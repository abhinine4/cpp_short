#include <iostream>
#include <algorithm>

int find_max(int* _counter){
    int i;
    for(i = 0; i< 100; i++){
        if (_counter[i] >= 2) break;
    }
    return i;
};

int main(){
    int list[100];
    for (int i = 0; i <100; i++){
        list[i] = i+1;
    }
    list[50] = 50;

    int counter[100];
    for(int& el : counter){
        el =0;
    }

    for (int i=0; i<100; i++){
        counter[list[i]-1]++;
    } 

    std::cout<<find_max(counter)<<std::endl;
}

