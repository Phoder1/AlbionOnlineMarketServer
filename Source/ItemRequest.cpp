#include "ItemRequest.h"

namespace AT::AlbionServer
{
	ItemRequest::ItemRequest(const vector<String>& itemIdsToUse, const vector<String>& citiesToUse, const vector<int>& qualitiesToUse)
	{
		itemIds = itemIdsToUse;
		cities = citiesToUse;
		qualities = qualitiesToUse;
	}

	ItemRequest::ItemRequest()
	{
		itemIds = vector<String>();
		cities = vector<String>();
		qualities = vector<int>();
	}

	String ItemRequest::getJsonUrl()
	{
		auto newUrl = AlbionApiLib::baseUrl;

		String idsStr = StringLib::join(",", itemIds);

		cout << idsStr;

		return "";
		//newUrl.replace("{0}", )
	}

	ItemRequest ItemRequest::defaultValue()
	{
		ItemRequest request;

		auto ids = vector<String>();
		ids.push_back("T4_BAG");
		ids.push_back("T5_BAG");
		request.itemIds = ids;

		auto cities = vector<String>();
		cities.push_back("Caerleon");
		cities.push_back("Bridgewatch");
		request.cities = cities;

		auto qualities = vector<int>();
		qualities.push_back(2);
		qualities.push_back(3);
		request.qualities = qualities;

		return request;
	}

	ItemRequest ItemRequest::fromJson(const json& var)
	{
		ItemRequest request;
		
		auto tempValue = var.at("itemIds").get<vector<string>>();

		for (int i = 0; i < tempValue.size(); i++) {
			json j_val(tempValue[i]);
			request.itemIds[i] = j_val;
		}

		return request;
	}
	json ItemRequest::toJson(ItemRequest& request)
	{
		json itemRequestVar = json();

		auto cities = StringLib::toStd(request.cities);
		json j_cities(cities);
			itemRequestVar["cities"] = j_cities;

		auto itemIds = StringLib::toStd(request.itemIds);
		json j_itemIds(itemIds);
		itemRequestVar["itemIds"] = j_itemIds;


		auto qualities = request.qualities;
		json j_qualities(qualities);
		itemRequestVar["qualities"] = j_qualities;

		return itemRequestVar;
	}

	void ItemRequest::logOut()
	{
		cout << "Item Ids: " << StringLib::commaJoin(itemIds) << endl
			<< "Cities: " << StringLib::commaJoin(cities) << endl
			<< "Qualities: " << StringLib::commaJoin(StringLib::cast(qualities)) << endl;
	}

}
