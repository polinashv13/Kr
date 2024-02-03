
#include <iostream>

void printArr(int* array, int length) {
    std::cout << "Array: ";
    for (int count = 0; count < length; ++count) {
        std::cout <<array [count] <<" ";
    }
    std::cout << std::endl;
}
void pwSum(int* array, int length, int sum) {
    std::cout << "Elements with sum " << sum << ":" << std::endl;
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (std::abs(array[i] + array[j]) == sum) {
                std::cout << array[i] << ", " << array[j] << std::endl;
            }
        }
    }
}


int main()
{
    int sum = 0;
    std::cout << "Summary ";
    std::cin >> sum;
    int length = 0;
    std::cout << "Length: ";
    std::cin >> length;
    int* array = new int[length];
    for (int count = 0; count < length; ++count) {
        array[count] = rand() % 50 + 1;
    }
    printArr(array, length);


    pwSum(array, length, sum);
    delete[] array;
   
    return 0;
}

