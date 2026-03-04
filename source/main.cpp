#include <iostream>
#include "Engine.h"
#include "Registration.h"
#include "Vehicle.h"
#include "Seller.h"
#include "Buyer.h"
#include "Admin.h"
#include "Listing.h"
#include "Message.h"
#include "Marketplace.h"

using namespace std;

int main() {
    cout << "Welcome to Abdullah's Garage!\n";

    // 1. Setup Marketplace
    Marketplace abdullahWheels("AbdullahWheels");

    // 2. Setup Actors
    Seller seller1(101, "Jhangirmotors", "jhangir@jw.com", "Jhangir Dealership");
    Buyer buyer1("Anas", "Anas@gmail.com", 5000000.0);
    Admin admin1("A001", "SystemAdmin", 3);

    // 3. Setup Vehicles 
    Engine e1("ENG-9988", 1800, 140, "Hybrid");
    Registration r1("Lahore", 2021, "LEA-123", true, "JhangirMotors");
    Vehicle v1("VIN12345678", "Toyota", "Corolla", 2021, 15000, e1, r1);

    Engine e2("ENG-5544", 1500, 118, "Petrol");
    Registration r2("Karachi", 2018, "KHI-999", true, "AliMotors");
    Vehicle v2("VIN87654321", "Honda", "Civic", 2018, 45000, e2, r2);

    // 4. Create Listings 
    Listing l1(4500000.0, &v1, &seller1);
    Listing l2(3200000.0, &v2, &seller1);

    // 5. Admin Approves and System Adds Listings
    admin1.approveListing(l1);
    abdullahWheels.addListing(&l1);
    abdullahWheels.addListing(&l2);

    // 6. Search and Filter Vehicles
    abdullahWheels.searchByBrand("Toyota");
    abdullahWheels.filterByPrice(4000000.0);

    // 7. Buyer saves favorites and messages seller
    buyer1.saveFavorite(&l1);
    buyer1.viewFavorites();

    Message inquiry("Anas", "JhangirMotors", "Is the Corolla price negotiable?", "10:30 AM");
    inquiry.displayMessage();

    // 8. Admin removes a listing
    admin1.removeListing(l2);

    return 0;
}
