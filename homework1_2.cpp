/*
Write a program that takes a user input a number n from 1 to 10,
and display every integer x in range: n/2.0 <= x < n , separated by comma.
 Created by Damiano Canali on 2/1/18.
 */

#include <iostream>
using namespace std;

int main() {

    int n = 0;

    cout << "Insert a number between 1 and 10: " << endl;
    cin >> n;
    cout << endl;

    while(n < 1 || n > 10) {
        cout << "Sorry, your number is not in the range. Try again!" << endl;
        cin >> n;
    }

    cout << n/2.0 << ", " << (n/2.0)+1;
}
