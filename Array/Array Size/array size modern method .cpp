#include <iostream>
#include <iterator> // Required for size
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    // Direct and safe
    int length = size(arr); 
    
    std::cout << "Array size: " << length << "\n"; // Output: 5
    return 0;
}
