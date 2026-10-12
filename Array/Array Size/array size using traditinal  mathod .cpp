#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    // total bytes (20) / bytes per int (4)
    size_t length = sizeof(arr) / sizeof(arr[0]); 
    
    std::cout << "Array size: " << length << "\n"; // Output: 5
    return 0;
}
