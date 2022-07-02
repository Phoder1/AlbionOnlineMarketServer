#pragma once
#include "Common.h"
#include "StringLib.h"

namespace AT::AlbionServer
{
	class ItemRequest
	{
	private:
		String format = ".json";
		vector<String> itemIds;
		vector<String> cities;
		vector<int> qualities;
	public:
		ItemRequest() = default;
		//ItemRequest(const vector<String>& itemIds, const vector<String>& cities, const vector<int>& qualities);

		String getJsonUrl();

		static const ItemRequest defaultValue();
		void logOut();

		void SetItemIds(vector<String> ids);
		void SetCities(vector<String> cities);
		void SetQualities(vector<int> qualities);

		vector<String> GetItemIds() const;
		vector<String> GetCities() const;
		vector<int> GetQualities() const;

		json to_json();
		static ItemRequest from_json(const json& j);
	};
}