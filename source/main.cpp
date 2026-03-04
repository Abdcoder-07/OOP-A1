#include <iostream>

// Include all the class headers
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
    cout << "==========================================\n";
    cout << "       Welcome to Abdullah's Garage!      \n";
    cout << "==========================================\n\n";

    // 1. Setup the Marketplace
    Marketplace abdullahWheels("AbdullahWheels");

    // 2. Create Users
    Seller seller1(101, "AliMotors", "ali@motors.com", "Ali Dealership");
    Buyer buyer1("Ahmed", "ahmed@mail.com", 5000000.0);
    Admin admin1("A001", "SystemAdmin", 3);

    // Show static member working
    cout << "--- SYSTEM INFO ---\n";
    cout << "Total Users Registered: " << User::getTotalUsers() << "\n\n";

    // 3. Create Vehicles (Composition: Vehicle has Engine and Registration)
    Engine e1("ENG-9988", 1800, 140, "Hybrid");
    Registration r1("Lahore", 2021, "LEA-123", true, "AliMotors");
    Vehicle v1("VIN12345678", "Toyota", "Corolla", 2021, 15000, e1, r1);

    Engine e2("ENG-5544", 1500, 118, "Petrol");
    Registration r2("Karachi", 2018, "KHI-999", true, "AliMotors");
    Vehicle v2("VIN87654321", "Honda", "Civic", 2018, 45000, e2, r2);

    // 4. Create Listings (Aggregation: Listing points to Vehicle and Seller)
    Listing l1(4500000.0, &v1, &seller1);
    Listing l2(3200000.0, &v2, &seller1);

    cout << "Total Listings Drafted: " << Listing::getTotalListings() << "\n\n";

    cout << "==========================================\n";
    cout << "          ADMIN APPROVING ADS             \n";
    cout << "==========================================\n";
    admin1.approveListing(l1);
    abdullahWheels.addListing(&l1);
    
    admin1.approveListing(l2);
    abdullahWheels.addListing(&l2);
    cout << "\n";

    cout << "==========================================\n";
    cout << "          BUYER SEARCH & FILTER           \n";
    cout << "==========================================\n";
    
    // Test the search feature
    cout << "Searching for 'Toyota':";
    abdullahWheels.searchByBrand("Toyota");

    // Test the price filter
    cout << "\nFiltering cars under PKR 4,000,000:";
    abdullahWheels.filterByPrice(4000000.0);
    cout << "\n";

    cout << "==========================================\n";
    cout << "          FAVORITES & MESSAGES            \n";
    cout << "==========================================\n";
    
    // Buyer saves a car
    buyer1.saveFavorite(&l1);
    cout << "\n";
    buyer1.viewFavorites();
    cout << "\n";

    // Buyer sends a message
    cout << "--- New Message Received ---\n";
    Message inquiry("Ahmed", "AliMotors", "Is the Corolla price negotiable?", "10:30 AM");
    inquiry.displayMessage();
    cout << "\n";

    cout << "==========================================\n";
    cout << "          DELETING A LISTING              \n";
    cout << "==========================================\n";
    
    // Admin removes a car and we test the filter again to prove it's gone
    admin1.removeListing(l2);
    cout << "\nChecking if it was removed (Searching under 4,000,000 again):";
    abdullahWheels.filterByPrice(4000000.0); // Honda Civic should not show up now!
    cout << "\n";

    cout << "==========================================\n";
    cout << "               SYSTEM EXIT                \n";
    cout << "==========================================\n";

    return 0;
}

