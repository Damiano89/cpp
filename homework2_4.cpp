/*
 * Given an array of doubles A and its size n, write a function that output all integers i satisfying A[i+1]-A[i]<1.0
 */

#include <iostream>
using namespace std;

void printAllSatisfy(int A[], int n){

    for(int i=0; i<n; i++) {
        if (A[i + 1] - A[i] < 1.0) {
            cout << "The element " << i << " satisfy A[i + 1] - A[i] < 1.0: " << A[i] << endl;
        }
    }
}

int main(){

    int A[5] = {9,7,1,10,8};

    printAllSatisfy(A, 5);
}
