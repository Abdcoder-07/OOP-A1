#include "Buyer.h"
#include <iostream>

Buyer::Buyer(std::string u, std::string e, double b) : User(u, e, ""), budget(b), preferredBrand(""), favCount(0), msgCount(0) {}

void Buyer::saveFavorite(Listing* list) {
    if (favCount < 10) {
        favorites[favCount++] = list;
        std::cout << "Added to favorites.\n";
    }
}

void Buyer::receiveMessage(Message m) {
    if (msgCount < 50) { inbox[msgCount++] = m; }
}

void Buyer::viewFavorites() const {
    std::cout << username << "'s Favorites:\n";
    for (int i = 0; i < favCount; i++) {
        favorites[i]->displayListing();
    }
}

void Buyer::updateBudget(double newBudget) { budget = newBudget; }
