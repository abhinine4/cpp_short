#include <iostream>
#include <array>
#include <map>

std::array<int, 10> arr = { 1, 2, 9, 4, 1, 6, 7, 3, 9, 1 };
std::map<int, int> my_hash;

int main(){
    for(int& init_key : arr){
        my_hash[init_key] = 0;
    }

    for(int& add_key : arr){
        my_hash[add_key]++;
    }

    for(std::map<int, int>::iterator it = my_hash.begin(); it != my_hash.end(); std::advance(it, 1)){
        std::cout<< it->first << ":" << it->second << std::endl;
    }
}