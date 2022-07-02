/*
  ==============================================================================

	Application.cpp
	Created: 1 Jul 2022 5:17:39pm
	Author:  alont

  ==============================================================================
*/

#include "Application.h"

namespace AT::AlbionServer
{
	Application::Application()
	{
		settings = ProjectSettings();
	}
	void Application::init()
	{
		settings = ProjectSettings::LoadSettings();

		cout << "Successfully loaded settings:" << endl;
		settings.logOut();

		while (true)
		{
			update();

			sleep_for(seconds(updateInterval));
		}
	}

	void Application::update()
	{

		cout << "update" << endl << endl;

		auto items = AlbionApiLib::LoadItemData(settings.getItemRequest());
	}

	void Application::showCommands()
	{


	}
}
