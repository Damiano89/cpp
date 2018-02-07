/*
Given an int array and its size n, write a function that calculate the sum of all elements of this array.
 */

#include <iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0;i<n;i++) {

        cout << arr[i] << ' ';
    }
}

int sum(int arr[], int n)

{

    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }

    return s;
}

int main(){

    int arr[5] = {3, 5, 6, 7, 8};
    cout << "Those are the numbers in the array: "; printArray(arr, 5);
    cout << endl;
    cout << "The sum of the array is: " << sum(arr, 5);

    return 0;
}