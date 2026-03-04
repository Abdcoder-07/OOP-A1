#pragma once
#include "Vehicle.h"
#include "Seller.h"

class Listing {
private:
    const int listingID; 
    double price;
    bool isAvailable;
    int views;
    
    Vehicle* vehiclePtr; 
    Seller* sellerPtr;   

    static int totalListings; 

public:
    Listing();
    Listing(double p, Vehicle* v, Seller* s);

    Vehicle* getVehicle() const;
    double getPrice() const;
    int getListingID() const;
    bool getStatus() const;
    static int getTotalListings();

    void markSold();
    void updatePrice(double newPrice);
    void incrementViews();
    void displayListing() const;
};
