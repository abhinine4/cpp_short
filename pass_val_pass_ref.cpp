#include <iostream>
#define print(s) std::cout<<s<<std::endl;

// pass by value
int increment0(int value){
    value++;
    return value;
}

// pass by ref
void increment1(int& value){
    value++;
}

// pass by pointer no copies made
void increment2(int* value){
    (*value)++;
}

int main(){
    int a = 5;
    a = increment0(a);
    print(a);
    increment1(a);
    print(a);
    int* b = &a;
    increment2(b);
    print(a);

    return 0;
}