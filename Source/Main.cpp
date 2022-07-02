/*
  ==============================================================================

	This file contains the basic startup code for a JUCE application.

  ==============================================================================
*/

#include "Common.h"
#include "Application.h"

using namespace AT::AlbionServer;

int main(int argc, char* argv[])
{
	new Application();

	return 0;
}
