/*
  ==============================================================================

	Application.cpp
	Created: 1 Jul 2022 5:17:39pm
	Author:  alont

  ==============================================================================
*/

#include "Application.h"
#include "AlbionApiLib.h"

namespace AT::AlbionServer
{
	void Application::init()
	{
		auto newSettings = ProjectSettings::LoadSettings();
		settings = newSettings;

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

		auto items = AlbionApiLib::LoadItemData();
	}

	Application::Application()
	{
		settings = ProjectSettings();
	}
	void Application::showCommands()
	{


	}
}
