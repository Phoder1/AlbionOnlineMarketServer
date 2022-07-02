#include "ItemRequest.h"
#include "StringLib.h"
#include "AlbionApiLib.h"

namespace AT::AlbionServer
{
	String ItemRequest::getJsonUrl()
	{
		auto newUrl = AlbionApiLib::baseUrl;


		String idsStr = StringLib::commaJoin(itemIds);
		String citiesStr = StringLib::commaJoin(cities);
		String qualitiesStr = StringLib::commaJoin(StringLib::cast(qualities));

		newUrl.replace("{0}", idsStr);
		newUrl.replace("{1}", format);
		newUrl.replace("{2}", citiesStr);
		newUrl.replace("{3}", qualitiesStr);

		return newUrl;
	}

	const ItemRequest ItemRequest::defaultValue()
	{
		ItemRequest request;

		vector<String> ids;
		ids.push_back("T4_BAG");
		ids.push_back("T5_BAG");
		request.itemIds = ids;

		vector<String> cities;
		cities.push_back("Caerleon");
		cities.push_back("Bridgewatch");
		request.cities = cities;

		vector<int> qualities;
		qualities.push_back(2);
		qualities.push_back(3);
		request.qualities = qualities;

		return request;
	}

	void ItemRequest::logOut()
	{
		cout << "Item Ids: " << StringLib::commaJoin(itemIds) << endl
			<< "Cities: " << StringLib::commaJoin(cities) << endl
			<< "Qualities: " << StringLib::commaJoin(StringLib::cast(qualities)) << endl;
	}

	void ItemRequest::SetItemIds(vector<String> ids)
	{
		itemIds = ids;
	}

	void ItemRequest::SetCities(vector<String> citiesToUse)
	{
		cities = citiesToUse;
	}

	void ItemRequest::SetQualities(vector<int> qualitiesToUse)
	{
		qualities = qualitiesToUse;
	}

	vector<String> ItemRequest::GetItemIds() const
	{
		return itemIds;
	}

	vector<String> ItemRequest::GetCities() const
	{
		return cities;
	}

	vector<int> ItemRequest::GetQualities() const
	{
		return qualities;
	}

	json ItemRequest::to_json() {
		json j;

		auto cities = StringLib::toStd(GetCities());
		json j_cities(cities);
		j["cities"] = j_cities;

		auto itemIds = StringLib::toStd(GetItemIds());
		json j_itemIds(itemIds);
		j["itemIds"] = j_itemIds;


		auto qualities = GetQualities();
		json j_qualities(qualities);
		j["qualities"] = j_qualities;

		return j;
	}
	ItemRequest ItemRequest::from_json(const json& j) {
		ItemRequest p;

		auto itemIdsJson = j.at("itemIds");
		auto itemIdsVector = itemIdsJson.get<vector<string>>();
		p.SetItemIds(StringLib::fromStd(itemIdsVector));

		auto citiesJson = j.at("cities");
		auto citiesVector = citiesJson.get<vector<string>>();
		p.SetCities(StringLib::fromStd(citiesVector));

		auto qualitiesJson = j.at("qualities");
		auto qualitiesVector = qualitiesJson.get<vector<int>>();
		p.SetQualities(qualitiesVector);

		return p;
	}
}
