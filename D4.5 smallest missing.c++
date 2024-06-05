#include <iostream>
#include <vector>

int findSmallestMissingElement(const std::vector<int>& arr) {
    int size = arr.size();
    int i = 0;
    
    while (i < size && arr[i] == i) {
        ++i;
    }
    
    return i;
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int missingElement = findSmallestMissingElement(arr);
    std::cout << "The smallest missing element is: " << missingElement << std::endl;

    return 0;
}
