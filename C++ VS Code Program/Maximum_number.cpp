#include <iostream>
using namespace std;

int main() {
    cout << "Enter three numbers: ";
    int a, b, c;
    cin >> a >> b >> c;

    int MAX, MID, MIN;

    if (a >= b && a >= c) {
        MAX = a;
        if (b >= c) {
            MID = b;
            MIN = c;
        } else {
            MID = c;
            MIN = b;
        }
    } else if (b >= a && b >= c) {
        MAX = b;
        if (a >= c) {
            MID = a;
            MIN = c;
        } else {
            MID = c;
            MIN = a;
        }
    } else {
        MAX = c;
        if (a >= b) {
            MID = a;
            MIN = b;
        } else {
            MID = b;
            MIN = a;
        }
    }

    cout << "MAX: " << MAX << ", MID: " << MID << ", MIN: " << MIN << endl;

    return 0;
}