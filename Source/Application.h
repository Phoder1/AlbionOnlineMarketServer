#pragma once
#include "Common.h"

namespace AT::AlbionServer
{
	class Application
	{
		const long updateInterval = 10;
		double updatesPerSecond() const { return 1 / updateInterval; }

		void Update();
	public:
		Application();
	};
};
