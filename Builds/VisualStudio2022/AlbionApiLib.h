#pragma once
#include "Common.h"
namespace AT::AlbionServer
{
	static class AlbionApiLib
	{
		const vector<String> Cities = { "Arthurs Rest","Black Market","Bridgewatch","Caerleon","Fort Sterling","Lymhurst","Martlock","Merlyns Rest","Thetford" };
		const vector<int> Qualities = { 1,2,3,4,5 };
		const vector<String> ItemPriceRequestUrl = "https://www.albion-online-data.com/api/v2/stats/prices/{0}{1}?{3}";

		vector<ItemPrice*> LoadItemData(ItemRequest request);
		String GetUrl(ItemRequest request);

	}
};

