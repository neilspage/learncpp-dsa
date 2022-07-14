#include <iostream>

int findMin(int array[], int start, int arraySize);
void printArray(int array[], int arraySize);

int main()
{
    int unsortedArray[]{ 4, 7, 2, 30, 50, 20, 10, 40 };

    //selection sort
    int arraySize { std::size(unsortedArray) };
    for (int x { 0 } ; x < arraySize; ++x){
        int minPos = findMin(unsortedArray, x, arraySize);

        //could use std::swap.
        int temp = unsortedArray[minPos];
        unsortedArray[minPos] = unsortedArray[x];
        unsortedArray[x] = temp;
    }
    printArray(unsortedArray, arraySize);
    return 0;
}

int findMin(int array[], int start, int arraySize){ 
    int min { array[start] };
    int pos = 0;

    for (int i {start}; i < arraySize; ++i) {
        if (array[i] < min) {
            min = array[i];
            pos = i;
        }
    }
    pos = (min == array[start]) ? start : pos;
    return pos;
}

void printArray(int array[], int arraySize) {
    for (int i { 0 } ; i < arraySize; ++i){
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}
