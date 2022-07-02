#pragma once
#include "Common.h"
#include "StringLib.h"
#include "AlbionApiLib.h"

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
		ItemRequest();
		String getJsonUrl();

		static ItemRequest defaultValue();
		static ItemRequest fromJson(const json& var);
		static json toJson(ItemRequest& i);
		void logOut();
	};
}