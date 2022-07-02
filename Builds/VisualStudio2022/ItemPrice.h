#pragma once
#include <stdexcept>
#include <regex>
#include <JuceHeader.h>

using namespace std;
using namespace juce;

class ItemPrice {
public:
    ItemPrice() = default;
    virtual ~ItemPrice() = default;

private:
    String item_id;
    String city;
    int quality;
    int sell_price_min;
    String sell_price_min_date;
    int sell_price_max;
    String sell_price_max_date;
    int buy_price_min;
    String buy_price_min_date;
    int buy_price_max;
    String buy_price_max_date;

public:
    const String& get_item_id() const { return item_id; }
    String& get_mutable_item_id() { return item_id; }
    void set_item_id(const String& value) { this->item_id = value; }

    const String& get_city() const { return city; }
    String& get_mutable_city() { return city; }
    void set_city(const String& value) { this->city = value; }

    const int& get_quality() const { return quality; }
    int& get_mutable_quality() { return quality; }
    void set_quality(const int64& value) { this->quality = value; }

    const int& get_sell_price_min() const { return sell_price_min; }
    int& get_mutable_sell_price_min() { return sell_price_min; }
    void set_sell_price_min(const int64& value) { this->sell_price_min = value; }

    const String& get_sell_price_min_date() const { return sell_price_min_date; }
    String& get_mutable_sell_price_min_date() { return sell_price_min_date; }
    void set_sell_price_min_date(const String& value) { this->sell_price_min_date = value; }

    const int& get_sell_price_max() const { return sell_price_max; }
    int& get_mutable_sell_price_max() { return sell_price_max; }
    void set_sell_price_max(const int64& value) { this->sell_price_max = value; }

    const String& get_sell_price_max_date() const { return sell_price_max_date; }
    String& get_mutable_sell_price_max_date() { return sell_price_max_date; }
    void set_sell_price_max_date(const String& value) { this->sell_price_max_date = value; }

    const int& get_buy_price_min() const { return buy_price_min; }
    int& get_mutable_buy_price_min() { return buy_price_min; }
    void set_buy_price_min(const int64& value) { this->buy_price_min = value; }

    const String& get_buy_price_min_date() const { return buy_price_min_date; }
    String& get_mutable_buy_price_min_date() { return buy_price_min_date; }
    void set_buy_price_min_date(const String& value) { this->buy_price_min_date = value; }

    const int& get_buy_price_max() const { return buy_price_max; }
    int& get_mutable_buy_price_max() { return buy_price_max; }
    void set_buy_price_max(const int64& value) { this->buy_price_max = value; }

    const String& get_buy_price_max_date() const { return buy_price_max_date; }
    String& get_mutable_buy_price_max_date() { return buy_price_max_date; }
    void set_buy_price_max_date(const String& value) { this->buy_price_max_date = value; }
};