#ifndef __SEDAN__
#define __SEDAN__

#include "Car.hpp"

class Sedan: public Car {
private:
    bool is_nitro = false;
public:
    void IgniteNitro() {
        std::cout << "Sedan " << this->GetBrand() << " switched to nitrous mode: " <<
            is_nitro << std::endl;
    }
    Sedan(std::string, std::string, std::string, std::string, int, double, bool);
    Sedan(): Car(){};
    ~Sedan();

    void ToString();
};

#endif