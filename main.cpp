#include "Car.hpp"
#include "Sedan.hpp"

int main() {
    Car firstcar;
    firstcar.SetName("G4");
    firstcar.SetBrand("Mitsubishi");
    firstcar.SetModel("Mirage");
    firstcar.SetPrice(6000000);
    firstcar.SetColor("blue");
    firstcar.SetYearMake(2017);
    firstcar.ToString();

    Car secondcar("Ultraman", "Honda", "Jazz", "red", 2016, 1000000);
    secondcar.ToString();
    
    return 0;
}