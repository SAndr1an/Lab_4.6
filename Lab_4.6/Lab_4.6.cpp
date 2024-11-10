#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double result = 0.0;
    int i, k;

    // while 
    result = 0.0;
    i = 1;
    while (i <= 15) {
        double result1 = sin(i * 10) + cos(10 * i);
        double result2 = 1.0;
        k = 1;
        while (k <= i) {
            result2 *= sqrt(k);
            k++;
        }
        result += result1 / result2;
        i++;
    }

    cout << "Result with while loops: " << result << endl;

    // do-while 
    result = 0.0;
    i = 1;
    do {

        double result1 = sin(10 * i) + cos(10 * i);


        double result2 = 1.0;
        k = 1;
        do {
            result2 *= sqrt(k);
            k++;
        } while (k <= i);
        result += result1 / result2;
        i++;
    } while (i <= 15);

    cout << "Result with do-while loops: " << result << endl;
    // for i++
    result = 0.0;
    for (i = 1; i <= 15; i++) {

        double result1 = sin(10 * i) + cos(10 * i);

        double result2 = 1.0;
        for (k = 1; k <= i; k++) {
            result2 *= sqrt(k);
        }

        result += result1 / result2;
    }
    cout << "Result with for loops (i++): " << result << endl;

    // for i--
    result = 0;
    for (int i = 15; i >= 1; i--) {

        double result1 = sin(10 * i) + cos(10 * i);

        double result2 = 1.0;
        for (int k = 1; k <= i; k++) {
            result2 *= sqrt(k);
        }
        result += result1 / result2;
    }
    cout << "Result with for loop (i--): " << result << endl;
    system("pause");
    return 0;
}
