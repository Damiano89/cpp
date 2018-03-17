/*
 * Write a recursive function with a integer parameter n and output the following sequence Y,
 * each element separated by one space (' ')
 * Y(i) = i*i + i*Y(i-1) +1
 */

#include <iostream>

using namespace std;

int printSequence(int n){

    if(n == 0){
        return 0;
    }
    cout << (n*n) + n*printSequence(n-1) + 1 << " ";
}

int main(){

    printSequence(5);
}