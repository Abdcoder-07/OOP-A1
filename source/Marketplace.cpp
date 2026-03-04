#include "Marketplace.h"
#include <iostream>

Marketplace::Marketplace(std::string name) : platformName(name), url("www.pakwheels.com"), maxCapacity(100), listingCount(0), featuredListing(NULL) {}

void Marketplace::addListing(Listing* list) {
    if (listingCount < maxCapacity) {
        activeListings[listingCount++] = list;
        std::cout << "Listing added to marketplace.\n";
    }
}

void Marketplace::deleteListing(int id) {
    for (int i = 0; i < listingCount; i++) {
        if (activeListings[i]->getListingID() == id) {
            activeListings[i]->markSold();
            std::cout << "Listing " << id << " deleted from search.\n";
            return;
        }
    }
}

void Marketplace::searchByBrand(std::string brand) const {
    std::cout << "\n--- Search Results for " << brand << " ---\n";
    for (int i = 0; i < listingCount; i++) {
        if (activeListings[i]->getStatus() && activeListings[i]->getVehicle()->getBrand() == brand) {
            activeListings[i]->displayListing();
        }
    }
}

void Marketplace::filterByPrice(double maxPrice) const {
    std::cout << "\n--- Filtering under PKR " << maxPrice << " ---\n";
    for (int i = 0; i < listingCount; i++) {
        if (activeListings[i]->getStatus() && activeListings[i]->getPrice() <= maxPrice) {
            activeListings[i]->displayListing();
        }
    }
}
