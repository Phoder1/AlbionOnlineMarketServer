#pragma once
#include "Common.h"
#include "ProjectSettings.h"
#include "AlbionApiLib.h"

namespace AT::AlbionServer
{
	class Application
	{
		const long updateInterval = 10;
		double updatesPerSecond() const { return 1 / updateInterval; }

		ProjectSettings settings;

		void update();
		void showCommands();
	public:
		Application();
		void init();
	};
};
