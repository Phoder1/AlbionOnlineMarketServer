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
