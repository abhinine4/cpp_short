#include <iostream>
#include <vector>

// 2D vector
typedef std::vector<std::vector<int>> matrix;

matrix A = { {1, 2, 3}, 
             {4, 5, 6},
             {7, 8, 9} };

void swap(int& _x, int& _y){
    _x = _x - _y;
    _y = _x + _y;
    _x = _y - _x;
}

void print(matrix B){
    for (int i=0; i<B.size(); ++i){
        std::cout << B[i][0] << "  " << B[i][1] << "  " << B[i][2] <<  std::endl;
        }
    std::cout << std::endl;
}

int main(){
    print(A);

    swap(A[1][0], A[0][1]);
    swap(A[2][0], A[0][2]);
    swap(A[2][1], A[1][2]);

    print(A);
    return 0;
}