#include "AlbionApiLib.h"
#include "ItemRequest.h"

namespace AT::AlbionServer::AlbionApiLib
{
	vector<ItemPrice> LoadItemData(ItemRequest request)
	{
		vector<ItemPrice> parsed_items;
		if (const auto inputStream
			= URL(request.getJsonUrl())
			.createInputStream(URL::InputStreamOptions(URL::ParameterHandling::inAddress)
				.withConnectionTimeoutMs(1000)
				.withNumRedirectsToFollow(0)))
		{
			const String response = inputStream->readString();
		}

		return parsed_items;
	}
}