#include <iostream> 
#include <string>

//macro
#define print(s) std::cout<<s<<std::endl;

using String = std::string;

class Car{
    public:
    String brand;
    String model;
    int year;

    Car(const char* brand, const char* model, int _year){
        this->brand = brand;
        this->model = model;
        year = _year;
    };
};

int main(){
    Car carobj("mcqueen", "htc", 1776);
    print(carobj.brand)
    return 0;
}
