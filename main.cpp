#include "Car.hpp"
#include "Sedan.hpp"

int main() {
    Car firstcar;
    firstcar.SetName("Heritage Edition");
    firstcar.SetBrand("Toyota");
    firstcar.SetModel("Land Cruiser");
    firstcar.SetPrice(87745);
    firstcar.SetColor("white");
    firstcar.SetYearMake(2017);
    firstcar.ToString();

    Car secondcar("Tron", "Audi", "A1", "red", 2016, 83800);
    secondcar.ToString();
    
    return 0;
}