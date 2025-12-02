#include <array>
#include <iostream>

template<typename T, std::size_t N>
void passByRef(const std::array<T, N>& arr)
{
    // static_assert(N > 3);
    static_assert(std::size(arr) > 3);
    std::cout << arr[0] << "\n";
}

int main() {
    std::cout << "Test" << "\n";
    std::array<int, 3> arr = {1, 2, 5};
    std::cout << "arr " << arr[2] << "\n";
    
    const int x {3};
    constexpr int y {x};
    std::cout << y << "\n";

    std::array<int, 5> arr5 {1, 2, 3, 4, 5};
    passByRef(arr5);

    return 0;
}
