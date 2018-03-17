/*
 * Write a function with void return type,
 * that has one double parameter x and two float parameters y z , x  by reference and y z by value.
 * The function should compute y^z (y's z-order power) by using
 * cmath pow function http://www.cplusplus.com/reference/cmath/pow/  and store the result in x.
 */

#include <iostream>
#include <cmath>

using namespace std;

void powerOf(double &x, float y, float z){

    x = pow(y,z);

    cout << "x = " << x;
}

int main(){

    double x;
    float y,z;

    cout << "Enter an integer: ";
    cin >> y;
    cout << "Enter an integer that you want to power " << y << " to: ";
    cin >> z;

    powerOf(x,y,z);

}