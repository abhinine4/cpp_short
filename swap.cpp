#include <iostream>

int x=5, y=10;

void swap(int& _x, int& _y){
    _x = _x - _y;
    _y = _x + _y;
    _x = _y - _x;
}

int main(){
    std::cout << "X: "<<x<<" Y: "<< y <<std::endl;
    swap(x, y);
    std::cout << "X: "<<x<<" Y: "<< y <<std::endl;
}