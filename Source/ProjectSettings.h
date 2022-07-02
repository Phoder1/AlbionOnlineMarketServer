/*
  ==============================================================================

	ProjectSettings.h
	Created: 2 Jul 2022 2:37:50pm
	Author:  alont

  ==============================================================================
*/

#pragma once
#include "Common.h"
#include "ItemRequest.h"

namespace AT::AlbionServer
{
	class ProjectSettings
	{
	private:
		ItemRequest itemRequest;

	public:
		ProjectSettings();

		static ProjectSettings defaultValue();
		static String settingsFilePath() { return "C:/AlbionTracker/Server/ProjectSettings.Json"; }
		static ProjectSettings LoadSettings();
		static json toJson(ProjectSettings& settings);
		static ProjectSettings fromJson(json& json);
		void logOut();

		ItemRequest getItemRequest();
	};
}
