#include <iostream>
using namespace std;

class CubeCalculator {
public:
    CubeCalculator(int num) : number(num) {}

    ~CubeCalculator() {
        cout << "Cube of " << number << " is " << (number * number * number) << endl;
    }

private:
    int number;
};

int main() {
    int maxNumber;
    cout << "Enter the maximum number: ";
    cin >> maxNumber;

    for (int i = 1; i <= maxNumber; ++i) {
        CubeCalculator calc(i);
    }

    return 0;
}

