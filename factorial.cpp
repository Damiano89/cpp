/*
 Created by Damiano Canali on 3/8/18.
 Write a function "factorial" that take in one int input,
 validate if the input is between 0 and 30,if input is out of range 0~30,
 return -1otherwise, return the factorial of the input as a double type, by using a for loop to
*/

#include <iostream>

using namespace std;

double factorial(int x){

    double fact = 1;
    if (x < 0 || x > 30){
        return -1;
    }
    else{
        for (int i=1; i<=x; i++){
            fact *= i;

        }

        cout << "The factorial of " << x << " is " << fact << endl;
    }

}

int main(){

    int num;
    cout << "Insert an integer between 0~30: " ;
    cin >> num;

    factorial(num);

}
