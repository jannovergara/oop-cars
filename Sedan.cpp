#include "Sedan.hpp"

Sedan::Sedan(std::string name, std::string color, std::string brand, std::string model,
        int year_make, double price, bool is_nitro) : Car(name, color, brand,
        model, year_make, price) {

    this->is_nitro = is_nitro;
}

Sedan::~Sedan() {
}

void Sedan::ToString() {
    std::cout << this->GetName() << " is a " << this->GetBrand() + " " + this->GetModel() <<
    " with a color " << this->GetColor() << " made last " << this->GetYearMake() <<
    " with a price of " << this->GetPrice() << "." << std::endl;
}