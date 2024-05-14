#include <iostream>

using namespace std;

int main() {
    float a = 5;
    float b = 0;
    double result = 0;


    for (int i = 0; i <= a; ++i) {
        b += i;
    }

    result = a/b;

    cout << "Result: " << result << endl;

    int d = 10;
    while (d >= 0) {
        cout << "d: " << d << endl;
        d--;
    }

    int array[3] = {1, 2, 3};
    for (int i = 0; i < 3; ++i) {
        cout << "array[" << i << "]: " << array[i] << endl;
    }

    return 0;
}
