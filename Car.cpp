#include "Car.hpp"

int Car::num_cars = 0;

Car::Car(std::string name, std::string brand, std::string model, std::string color,
        int year_make, double price) {
    this->name = name;
    this->color = color;
    this->brand = brand;
    this->model = model;
    this->year_make = year_make;
    this->price = price;

    Car::num_cars++;
}

Car::Car() {
    this->name = "";
    this->color = "";
    this->brand = "";
    this->model = "";
    this->year_make = 1990;
    this->price = 0;

    Car::num_cars++;
}

Car::~Car() {
}

void Car::ToString() {
    std::cout << this->name << " is a " << this->brand + " " + this->model <<
    " with a color " << this->color << " made last " << this->year_make <<
    " with a price of " << this->price << "." << std::endl;
}