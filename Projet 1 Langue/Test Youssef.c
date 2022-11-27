/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int *MultiplyArrayByTwo(int arr[], int size){
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2;
    }
    return arr;
}

int main(){
    constexpr int size = 10;
    int c_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr = MultiplyArrayByTwo(c_array, size);

    cout << "array = [ ";
    for (int i = 0; i < size; ++i) {
        cout << ptr[i] << ", ";
    }
    cout << "]" << endl;

    return EXIT_SUCCESS;
}
*/
