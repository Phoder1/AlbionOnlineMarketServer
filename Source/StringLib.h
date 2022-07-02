/*
  ==============================================================================

	StringLib.h
	Created: 2 Jul 2022 1:02:10pm
	Author:  alont

  ==============================================================================
*/

#pragma once
#include "Common.h"

namespace AT::AlbionServer::StringLib
{
	String join(String separator, vector<String> strgs);
	String commaJoin(vector<String> strgs);
	vector<String> cast(vector<int> numbers);
	vector<string> toStd(vector<String> strings);
	vector<String> fromStd(vector<string> strings);
};