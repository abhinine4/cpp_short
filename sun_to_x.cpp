#include <iostream>
#include <array>

int desired_sum = 10;
std::array<int, 10> arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int main(){
    int i, j;
    for(i=0; i<arr.size(); ++i){
        for(j=0; j<arr.size(); ++j){
            if(arr[i]+arr[j] == desired_sum){
                std::cout<<i<<" "<<j<<std::endl;
            }
        }
    }
}