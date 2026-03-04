#pragma once
#include <string>
#include "Engine.h"
#include "Registration.h"

class Vehicle {
private:
    const std::string vin; 
    std::string brand;
    std::string model;
    int year;
    int mileage;
    
    Engine carEngine; 
    Registration carReg;

public:
    Vehicle(std::string v, std::string b, std::string m, int y, int mil);
    Vehicle(std::string v, std::string b, std::string m, int y, int mil, Engine e, Registration r);

    std::string getBrand() const;
    std::string getModel() const;
    int getYear() const;
    int getMileage() const;
    std::string getVin() const;

    void drive(int miles);
    void serviceVehicle();
    void updateRegistration(std::string newOwner);
    void displaySpecs() const;
};
