#include <iostream>
using namespace std;

int main () {
    int number;
    int digit, sum = 0;
    bool mult3, mult4, mult5, multAll;
    string mo3 = "multiples of 3";
    string mo4 = "multiples of 4";
    string mo5 = "multiples of 5";

    cout << "Enter an interger : " << endl;

    cin >> number;

    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
        if (number > 0) {
            cout << digit << " + ";
        }else {
            cout << digit << " = " << sum << endl;
        }
    }

    mult3 = (sum % 3 == 0);
    mult4 = (sum % 4 == 0);
    mult5 = (sum % 5 == 0);
    multAll = (mult3 && mult4 && mult5);

    if (multAll) {
        cout << sum << " is " << mo3 << ", " << mo4 << " and " << mo5 << endl;
    } else if (mult4 && mult5) {
        cout << sum << " is " << mo4 << " and " << mo5 << endl;
    } else if (mult3 && mult5) {
        cout << sum << " is " << mo3 << " and " << mo5 << endl;
    } else if (mult3 && mult4) {
        cout << sum << " is " << mo3 << " and " << mo4 << endl;
    }else if (mult3) {
        cout << sum << " is " << mo3 << endl;
    } else if (mult4) {
        cout << sum << " is " << mo4 << endl;
    } else if (mult5) {
        cout << sum << " is " << mo5 << endl;
    } else {
        cout << sum << " is not a multiple of 3, 4 or 5" << endl;
    }

    return 0;

}