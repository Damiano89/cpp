/*
 Created by Damiano Canali on 3/9/18.
 Write a function "rand2" that when called, return a random integer in range 0 to 30.
 You may use the library function rand() in <cstdlib> to generate a random number between 0 and RAND_MAX.
*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int rand2(){

    srand(time(NULL));
    int rand_integer = rand() % 30 + 1;

    cout << "The random number is: " << rand_integer;
    cout << endl;

}

int main (){

    rand2();

}

