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
	void Application::Update()
	{
		cout << "Update" << endl << endl;

		auto items = AlbionApiLib::LoadItemData();
	}

	Application::Application()
	{
		while (true)
		{
			Update();

			sleep_for(seconds(updateInterval));
		}
	}
}
