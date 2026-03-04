#include "Engine.h"
#include <iostream>

Engine::Engine() : engineNumber("Unknown"), cc(0), horsepower(0), fuelType("Petrol"), isRunning(false) {}

Engine::Engine(std::string num, int capacity, int hp, std::string fuel) 
    : engineNumber(num), cc(capacity), horsepower(hp), fuelType(fuel), isRunning(false) {}

void Engine::setHorsepower(int hp) { horsepower = hp; }
int Engine::getHorsepower() const { return horsepower; }

void Engine::startEngine() { 
	isRunning = true; std::cout << "Engine started.\n";
 }
 
 
void Engine::stopEngine() { 
	isRunning = false; std::cout << "Engine stopped.\n";
 }
 
 
void Engine::tuneUp() { 
	horsepower += 5; std::cout << "Engine tuned up.\n";
 }
 
 
bool Engine::checkStatus() const { 
	return isRunning; 	
}
