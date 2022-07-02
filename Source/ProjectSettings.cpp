/*
  ==============================================================================

	ProjectSettings.cpp
	Created: 2 Jul 2022 2:37:50pm
	Author:  alont

  ==============================================================================
*/

#include "ProjectSettings.h"


namespace AT::AlbionServer
{
	ProjectSettings::ProjectSettings()
	{
	}

	ProjectSettings ProjectSettings::defaultValue()
	{
		ProjectSettings settings;
		settings.itemRequest = ItemRequest::defaultValue();
		return  settings;
	}

	ProjectSettings ProjectSettings::LoadSettings()
	{
		auto path = settingsFilePath();

		auto file = File(path);

		if (!file.hasWriteAccess())
			throw exception("Don't have write access to file");

		if (!file.exists())
		{
			if (!file.create())
				throw exception("Couldn't create file!!");


			auto writeStream = file.createOutputStream();

			ProjectSettings projectSettings = ProjectSettings::defaultValue();

			auto settingsJson = ProjectSettings::toJson(projectSettings);
			auto settingsStr = settingsJson.dump();
			writeStream->writeString(settingsStr);
			writeStream->flush();
		}

		auto settingsStr = file.loadFileAsString();
		json json = json::parse(settingsStr.toStdString());
		return ProjectSettings::fromJson(json);
	}

	json ProjectSettings::toJson(ProjectSettings& settings)
	{
		json settingsVar;

		settingsVar["itemRequest"] = settings.itemRequest.to_json();

		return settingsVar;
	}

	ItemRequest ProjectSettings::getItemRequest()
	{
		return itemRequest;
	}

	ProjectSettings ProjectSettings::fromJson(json& json)
	{
		ProjectSettings settings;
		auto requestJson = json.at("itemRequest");
		settings.itemRequest = ItemRequest::from_json(requestJson);
		return  settings;
	}

	void ProjectSettings::logOut()
	{
		itemRequest.logOut();
	}
}
