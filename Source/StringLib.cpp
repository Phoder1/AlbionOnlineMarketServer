/*
  ==============================================================================

	StringLib.cpp
	Created: 2 Jul 2022 1:02:10pm
	Author:  alont

  ==============================================================================
*/

#include "StringLib.h"

namespace AT::AlbionServer::StringLib
{
	String join(String separator, vector<String> strgs)
	{
		String joinedStr;

		for (size_t i = 0; i < strgs.size(); i++)
		{
			joinedStr += strgs[i];
			if (i != strgs.size() - 1)
				joinedStr += separator;
		}

		return  joinedStr;
	}

	String commaJoin(vector<String> strgs)
	{
		return join(",", strgs);
	}

	vector<String> cast(vector<int> numbers)
	{
		vector<String> strings;
		for (int i = 0; i < numbers.size(); i ++)
			strings[i] = to_string(numbers[i]);

		return strings;
	}
	vector<string> toStd(vector<String> strings)
	{
		auto stdStrings = vector<string>(strings.size());
		for (size_t i = 0; i < strings.size(); i++)
			stdStrings[i] = strings[i].toStdString();

		return stdStrings;
	}
	vector<String> fromStd(vector<string> strings) {
		auto stdStrings = vector<String>(strings.size());
		for (size_t i = 0; i < strings.size(); i++)
			stdStrings[i] = strings[i];

		return stdStrings;
	}
}
