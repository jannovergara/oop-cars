#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car {
private:
    std::string name, color, brand, model;
    int year_make;
    double price;

    static int num_cars;
public:
    std::string GetName(){ return name; }
    void SetName(std::string name){ this->name = name; }
    std::string GetColor(){ return color; }
    void SetColor(std::string color){ this->color = color; }
    std::string GetBrand(){ return brand; }
    void SetBrand(std::string brand){ this->brand = brand; }
    std::string GetModel(){ return model; }
    void SetModel(std::string model){ this->model = model; }
    int GetYearMake(){ return year_make; }
    void SetYearMake(int year_make){ this->year_make = year_make; }
    double GetPrice(){ return price; }
    void SetPrice(double price){ this->price = price; }
    
    void SetAll(std::string, std::string, std::string, std::string,
        int, double);

    static int GetNumCars(){ return num_cars; }
    void SetNumCars(int num_cars){ this->num_cars = num_cars; }
    void ToString();

    Car(std::string, std::string, std::string, std::string, int, double);
    Car();
    ~Car();
};

#endif