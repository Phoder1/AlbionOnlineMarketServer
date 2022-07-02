#include "AlbionApiLib.h"


namespace AT::AlbionServer::AlbionApiLib
{
	vector<ItemPrice> LoadItemData()
	{
		vector<ItemPrice> parsed_items;
		if (const auto inputStream
			= URL("https://www.albion-online-data.com/api/v2/stats/prices/T4_BAG,T5_BAG.json?locations=Caerleon,Bridgewatch&qualities=2")
			.createInputStream(URL::InputStreamOptions(URL::ParameterHandling::inAddress)
				.withConnectionTimeoutMs(1000)
				.withNumRedirectsToFollow(0)))
		{
			const String response = inputStream->readString();
			//json j = json::parse(response.toStdString());
			//ItemPrice item;
			//ItemPrice::from_json(j, item);
			//item.LogOut();
			auto items = JSON::fromString(response);

			if (items.isArray()) {
				for (size_t i = 0; i < items.size(); i++)
				{
					auto item = items[i];
					ItemPrice price;
					ItemPrice::from_json(item, price);

					price.logOut();
				}
			}
		}

		return parsed_items;
	}
}