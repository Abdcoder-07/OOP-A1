#pragma once
#include "User.h"
#include <string>

class Seller : public User {
private:
    int sellerRating;
    int totalSold;
    std::string dealershipName;
    bool isVerified;
    const int sellerID; 

public:
    Seller(int id, std::string u, std::string e, std::string dName);

    void verifySeller();
    void incrementSold();
    void updateRating(int newRating);
    void printSellerStats() const;
};
