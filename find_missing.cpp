#include <iostream>
#include <algorithm>

int arr[100];

int main(){
    for(int i=0; i<100; i++){
        arr[i] = i+1;
    }
    arr[49] = 0;

    for(int& _el : arr){
        std::cout <<_el << std::endl;
    }

    // STL find algorithm (takes in itr , beign, end, consition)
    int* missing_num_location = std::find(&arr[0], &arr[99], 0);
    std::cout << missing_num_location<<std::endl;
    std::cout << &arr[0] <<std::endl;

    //pointer subtraction outputs the distance between the two pointers
    std::cout << std::endl << missing_num_location - &arr[0] << std::endl;
    //here we get output 49 as we have stores the numbers serially , and we can hence find it out by subtracting it from the start of the array
}