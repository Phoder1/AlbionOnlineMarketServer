/*
  ==============================================================================

	ItemPrice.cpp
	Created: 14 Jun 2022 7:46:18pm
	Author:  alont

  ==============================================================================
*/

#include "ItemPrice.h"

namespace  AT::AlbionServer
{
	void ItemPrice::from_json(const var& var, ItemPrice& i)
	{
		auto tempValue = var.getProperty("item_id", NULL);
		i.set_item_id(tempValue);

		tempValue = var.getProperty("city", NULL);
		i.set_city(tempValue);

		tempValue = var.getProperty("quality", NULL);
		i.set_quality(tempValue);

		tempValue = var.getProperty("sell_price_min", NULL);
		i.set_sell_price_min(tempValue);

		tempValue = var.getProperty("sell_price_min_date", NULL);
		i.set_sell_price_min_date(tempValue);

		tempValue = var.getProperty("sell_price_max", NULL);
		i.set_sell_price_max(tempValue);

		tempValue = var.getProperty("sell_price_max_date", NULL);
		i.set_sell_price_max_date(tempValue);

		tempValue = var.getProperty("buy_price_min", NULL);
		i.set_buy_price_min(tempValue);

		tempValue = var.getProperty("buy_price_min_date", NULL);
		i.set_buy_price_min_date(tempValue);

		tempValue = var.getProperty("buy_price_max", NULL);
		i.set_buy_price_max(tempValue);

		tempValue = var.getProperty("buy_price_max_date", NULL);
		i.set_buy_price_max_date(tempValue);
	}

	void ItemPrice::logOut() const
	{
		cout << "Item ID: " << item_id << endl
			<< "City: " << city << endl
			<< "Quality: " << quality << endl
			<< "Min Sell Price " << sell_price_min << endl
			<< "Min Sell Price Date " << sell_price_min_date << endl
			<< "Max Sell Price " << sell_price_max << endl
			<< "Max Sell Price Date " << sell_price_max_date << endl
			<< "Min Buy Price " << buy_price_min << endl
			<< "Min Buy Price Date " << buy_price_min_date << endl
			<< "Max Buy Price " << buy_price_max << endl
			<< "Max Buy Price Date " << buy_price_max_date << endl;

	}
}
