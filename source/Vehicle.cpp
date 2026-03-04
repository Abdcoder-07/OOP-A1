#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string v, std::string b, std::string m, int y, int mil) 
    : vin(v), brand(b), model(m), year(y), mileage(mil) {}
    
Vehicle::Vehicle(std::string v, std::string b, std::string m, int y, int mil, Engine e, Registration r) 
    : vin(v), brand(b), model(m), year(y), mileage(mil), carEngine(e), carReg(r) {}

std::string Vehicle::getBrand() const { return brand; }
std::string Vehicle::getModel() const { return model; }
int Vehicle::getYear() const { return year; }
int Vehicle::getMileage() const { return mileage; }
std::string Vehicle::getVin() const { return vin; }

void Vehicle::drive(int miles) { 
		mileage += miles;
 }
void Vehicle::serviceVehicle() { 
	carEngine.tuneUp();
 }
void Vehicle::updateRegistration(std::string newOwner) {
 	carReg.transferOwnership(newOwner);
  }
void Vehicle::displaySpecs() const { 
    std::cout << year << " " << brand << " " << model << " (VIN: " << vin << ")\n"; 
}
