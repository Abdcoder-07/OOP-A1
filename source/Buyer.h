#pragma once
#include "User.h"
#include "Listing.h"
#include "Message.h"
#include <string>

class Buyer : public User {
private:
    double budget;
    std::string preferredBrand;
    
    Listing* favorites[10]; 
    int favCount;
    Message inbox[50]; 
    int msgCount;

public:
    Buyer(std::string u, std::string e, double b);

    void saveFavorite(Listing* list);
    void receiveMessage(Message m);
    void viewFavorites() const;
    void updateBudget(double newBudget);
};
