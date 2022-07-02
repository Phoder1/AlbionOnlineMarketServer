#include "ItemRequest.h"
#include "StringLib.h"
#include "AlbionApiLib.h"

namespace AT::AlbionServer
{
	ItemRequest::ItemRequest(const vector<String>& itemIdsToUse, const vector<String>& citiesToUse, const vector<int>& qualitiesToUse)
	{
		itemIds = itemIdsToUse;
		cities = citiesToUse;
		qualities = qualitiesToUse;
	}

	String ItemRequest::getJsonUrl()
	{
		auto newUrl = AlbionApiLib::baseUrl;

		String idsStr = StringLib::join(",", itemIds);

		cout << idsStr;

		return "";
		//newUrl.replace("{0}", )
	}
}
