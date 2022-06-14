#include <iostream>
#include "Complex.h"
using namespace std;

void first_task() {
    cout << "    Task 1:\n";
    cout << "Enter complex number: ";
    Complex FirstValue;
    cin >> FirstValue;
    cout << "Enter real number: ";
    double SecondValue;
    cin >> SecondValue;
    cout << "Result: " << FirstValue * SecondValue << endl;
}
void second_task() {
    cout << "    Task 2:\n";
    cout << "Enter complex number: ";
    Complex FirstValue;
    cin >> FirstValue;
    cout << "Enter complex number: ";
    Complex SecondValue;
    cin >> SecondValue;
    cout << "Result: " << FirstValue + SecondValue << endl;
}
void third_task() {
    cout << "    Task 3:\n";
    cout << "Enter complex number: ";
    Complex FirstValue;
    cin >> FirstValue;
    cout << "Enter complex number: ";
    Complex SecondValue;
    cin >> SecondValue;
    cout << "Result: " << FirstValue * SecondValue << endl;
}

int main() {
    cout << "\t --- LAB #2 ---\n";
    bool kid = true;
    while (kid) {
        cout << "1. Multiply a complex number on real number.\n"
                "2. Sum of two complex numbers.\n"
                "3. Multiply of two complex numbers.\n"
                "4. Exit.\n"
                "Enter number of the task:";
        int n;
        cin >> n;
        if (n == 1) {
            first_task();
            cout << endl;
        } else if (n == 2) {
            second_task();
            cout << endl;
        } else if (n == 3) {
            third_task();
            cout << endl;
        } else{
            break;
        }
    }
}