#pragma once
#include "Common.h"

namespace AT::AlbionServer
{
	class ItemRequest
	{
	private:
		ItemRequest(const vector<String>& itemIds, const vector<String>& cities, const vector<int>& qualities);
		vector<String> itemIds;
		vector<String> cities;
		vector<int> qualities;
	public:
		String getJsonUrl();
	};
}