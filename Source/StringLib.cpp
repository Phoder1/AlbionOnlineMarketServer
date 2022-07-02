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
}
