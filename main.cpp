#include <array>
#include <iostream>

int main() {
    std::cout << "Test" << "\n";
    std::array<int, 3> arr = {1, 2, 5};
    std::cout << "arr " << arr[2] << "\n";
    
    const int x {3};
    constexpr int y {x};
    std::cout << y << "\n";


    return 0;
}
