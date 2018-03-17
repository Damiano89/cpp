/*
 * Write a function that takes in an integer x in range 10 to 10000,
 * and output the greatest integer that is less than x and a factor of x
 */

#include <iostream>

using namespace std;

void lessAndFactor(int x);

void lessAndFactor(int x){

    int fact[10000] = {};

    cout << "The factors of " << x << " are: " << endl;
    int i;

    for(i=1; i<=x; i++) {

        if (x % i == 0) {
            fact[i] = i;
        }
        if (fact[i] != 0) {
            cout << fact[i] << " ";
        }
    }

    cout << endl;
    cout << "The greatest number less than x and factor of x is: "; // I can't figure out how to print this value.

}

int main(){

    int num;

    do {
        cout << "Enter an integer between 10 and 10000: ";
        cin >> num;
        if (num < 10 or num > 10000){
            cout << "Wrong input!" << endl;
        }

    }while(num < 10 or num > 10000);

    lessAndFactor(num);
}
