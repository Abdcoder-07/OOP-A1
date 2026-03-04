#include "Admin.h"
#include <iostream>

Admin::Admin(std::string empID, std::string u, int level) 
    : User(u, "", ""), clearanceLevel(level), listingsRemoved(0), adminRegion("All"), superAdmin(false), employeeID(empID) {}

void Admin::approveListing(Listing& list) { std::cout << "Listing " << list.getListingID() << " approved.\n"; }

void Admin::removeListing(Listing& list) { 
    list.markSold(); 
    listingsRemoved++;
    std::cout << "Admin removed listing " << list.getListingID() << ".\n";
}

void Admin::promoteToSuperAdmin() { 
superAdmin = true; 
}

void Admin::printAdminStats() const { 
std::cout << "Admin " << username << " removed " << listingsRemoved << " listings.\n";
 }
