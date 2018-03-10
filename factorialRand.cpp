/*
 Created by Damiano Canali on 3/9/18.
 Write another function "factorial" overloading the factorial in (1), with 0 parameters.
 It should use "rand2" to generate a random number before passing it to "factorial" in (1),
 and returning the factorial of that random number.
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

double factorial(int x){

    double factRand;
        for (int i=1; i<=x; i++){
             factRand *= i;

        }

        cout << endl;
        cout << "The factorial of " << x << " is " << factRand << endl;
        return 0;
}

int rand2(){

    srand(time(NULL));
    int rand_integer = rand() % 30 + 1;

    cout << "The random number is: " << rand_integer;
    cout << endl;

    factorial(rand_integer);

}

int main(){

    rand2();
}