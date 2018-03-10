/*
  Created by Damiano Canali on 3/9/18.
  Write a function "inc" that when called, return void after adding 100 to the only int parameter passed by reference.
*/

#include <iostream>

using namespace std;

void inc(int x){

    x =+ 100;
    cout << "100 has been added to the parameter." << endl;
    cout << x << endl;

}

int main(){

    int number;

    inc(number);

}

