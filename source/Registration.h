#pragma once
#include <string>

class Registration {
private:
    std::string city;
    int year;
    std::string plateNumber;
    bool isTokenPaid;
    std::string ownerName;

public:
    Registration();
    Registration(std::string c, int y, std::string p, bool token, std::string owner);

    void setCity(std::string c);
    std::string getCity() const;

    void payTokenTax();
    void transferOwnership(std::string newOwner);
    void printDetails() const;
    bool verifyRegistration() const;
};
