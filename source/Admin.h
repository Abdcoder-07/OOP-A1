#pragma once
#include "User.h"
#include "Listing.h"
#include <string>

class Admin : public User {
private:
    int clearanceLevel;
    int listingsRemoved;
    std::string adminRegion;
    bool superAdmin;
    const std::string employeeID;

public:
    Admin(std::string empID, std::string u, int level);

    void approveListing(Listing& list);
    void removeListing(Listing& list);
    void promoteToSuperAdmin();
    void printAdminStats() const;
};
