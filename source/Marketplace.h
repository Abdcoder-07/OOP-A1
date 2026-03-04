#pragma once
#include "Listing.h"
#include <string>

class Marketplace {
private:
    const std::string platformName;
    std::string url;
    int maxCapacity;
    
    Listing* activeListings[100]; 
    int listingCount;
    Listing* const featuredListing; 

public:
    Marketplace(std::string name);

    void addListing(Listing* list);
    void deleteListing(int id);
    void searchByBrand(std::string brand) const;
    void filterByPrice(double maxPrice) const;
};
