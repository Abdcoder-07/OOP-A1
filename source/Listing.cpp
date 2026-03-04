#include "Listing.h"
#include <iostream>

// Initialize static member
int Listing::totalListings = 0;

Listing::Listing() : listingID(++totalListings), price(0.0), isAvailable(false), views(0), vehiclePtr(NULL), sellerPtr(NULL) {}

Listing::Listing(double p, Vehicle* v, Seller* s) : listingID(++totalListings), price(p), isAvailable(true), views(0), vehiclePtr(v), sellerPtr(s) {}

Vehicle* Listing::getVehicle() const {
	 return vehiclePtr;
	  }
	  
double Listing::getPrice() const {
	 return price; 
	 }
	 
int Listing::getListingID() const { 
return listingID;
 }
 
bool Listing::getStatus() const { 
return isAvailable;
 }
int Listing::getTotalListings() { 
return totalListings; 
}
void Listing::markSold() { 
isAvailable = false;
 }
void Listing::updatePrice(double newPrice) { 
price = newPrice; 
}
void Listing::incrementViews() {
 views++; 
 }
void Listing::displayListing() const {
    if(vehiclePtr) {
        std::cout << "Listing #" << listingID << " - Price: PKR " << price << "\n";
        vehiclePtr->displaySpecs();
    }
}
