#pragma once
#include "Common.h"
#include "ItemPrice.h"

namespace AT::AlbionServer::AlbionApiLib
{
	inline String baseUrl = "https ://www.albion-online-data.com/api/v2/stats/prices/{0}{1}?locations={2}&qualities={3}";
	vector<ItemPrice> LoadItemData();
};
