#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ukr");
    int n;
    cout << "введiть розмiр масиву: ";
    cin >> n;
    double* arr = new double[n];
    cout << "введiть " << n << " дiйсних чисел:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    double product = 1.0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            product *= arr[i];
        }
    }
    cout << "добуток додатних елементiв масиву: " << product << endl;
    double minElement = arr[0];
    int minIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
    }
    double sum = 0.0;
    for (int i = 0; i < minIndex; ++i) {
        sum += arr[i];
    }
    cout << "сума елементiв масиву, розташованих до мiнiмального елемента: " << sum << endl;
    delete[] arr;

    return 0;
}
