#include <iostream>
#include <vector>

auto main()-> int{
    std::vector<int> unsorted_arr = { 9, 2, 3, 4, 5, 10, 7, 8, 1, 6 };

    int* max_index = &unsorted_arr[0];
    int* min_index = &unsorted_arr[0];

    for (int i=0; i<unsorted_arr.size(); ++i){
        if(unsorted_arr[i] > *max_index)
            max_index = &unsorted_arr[i];
    }

    for (int i=0; i<unsorted_arr.size(); ++i){
        if(unsorted_arr[i] < *min_index)
            min_index = &unsorted_arr[i];
    }

    std::cout << "MAX: "<<*max_index << std::endl;
    std::cout << "MIN: "<<*min_index << std::endl;
}

