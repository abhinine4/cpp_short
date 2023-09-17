#include <iostream>
#include <string>

struct vector3{
    float x, y, z;
};

int main(){
    int value = 5; //allocated on the stack memory
    int array[5]; //stack
    vector3 vector;
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    int* hvalue = new int; //allocated in heap
    *hvalue = 5; //initialized in heap

    int* harray = new int[5];
    vector3* hvector = new vector3;

    harray[0] = 1;
    harray[1] = 2;
    harray[2] = 3;
    harray[3] = 4;
    harray[4] = 5;

    // clear memory allocated in stack
    delete hvalue;
    delete[] harray;
    delete hvector;

    return 0;

}