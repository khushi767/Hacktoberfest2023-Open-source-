#include <iostream>

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap the elements at the start and end positions
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the start and end pointers towards each other
        start++;
        end--;
    }
}

// Function to print the elements of the array
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cout << "Invalid array size." << std::endl;
        return 1;
    }

    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Original Array: ";
    printArray(arr, size);

    // Reverse the array
    reverseArray(arr, size);

    std::cout << "Reversed Array: ";
    printArray(arr, size);

    return 0;
}
