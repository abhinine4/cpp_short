#include <iostream>
#include <vector>

void print(int s){
    std::cout << s << std::endl;
}

// a const vector ref of int  and a func pointer with int params
void ForEach(const std::vector<int>& values, void(*func)(int)){
    for(int value: values){
        func(value);
    }
}

int main(){
    std::vector<int> values = {1, 2, 3, 4, 5, 6, 7, 8};

    auto myfun = print;

    
    ForEach(values, myfun);
}