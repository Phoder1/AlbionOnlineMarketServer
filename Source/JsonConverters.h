///*
//  ==============================================================================
//
//    JsonConverters.h
//    Created: 2 Jul 2022 9:27:21pm
//    Author:  alont
//
//  ==============================================================================
//*/
//
//#pragma once
//
//#include "ItemRequest.h"
//#include "StringLib.h"
//
//using json = nlohmann::json;
//
//namespace AT::AlbionServer {
//    void to_json(json& j, const ItemRequest& request) {
//
//		auto cities = StringLib::toStd(request.GetCities());
//		json j_cities(cities);
//		j["cities"] = j_cities;
//
//		auto itemIds = StringLib::toStd(request.GetItemIds());
//		json j_itemIds(itemIds);
//		j["itemIds"] = j_itemIds;
//
//
//		auto qualities = request.GetQualities();
//		json j_qualities(qualities);
//		j["qualities"] = j_qualities;
//    }
//
//    void from_json(const json& j, ItemRequest& p) {
//		auto itemIdsJson = j.at("itemIds");
//		auto itemIdsVector = itemIdsJson.get<vector<string>>();
//		p.SetItemIds(StringLib::fromStd(itemIdsVector));
//
//		auto citiesJson = j.at("cities");
//		auto citiesVector = citiesJson.get<vector<string>>();
//		p.SetCities(StringLib::fromStd(citiesVector));
//
//		auto qualitiesJson = j.at("qualities");
//		auto qualitiesVector = qualitiesJson.get<vector<int>>();
//		p.SetQualities(qualitiesVector);
//    }
//}