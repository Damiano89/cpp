/*
Accomodate your code in 2 for a std::list<int> A by changing the type declarations. 
 */

#include <iostream>
#include <list>
using namespace std;

void printAllSatisfy(list<int> A){

    list<int>::iterator it;

    cout << "The element of the list are: ";
    for (it = A.begin(); it != A.end(); ++it)
        cout << *it << " ";
    cout << endl;
}

int sum_of_element(list<int> A) {

    list<int>::iterator it;

    int sum = 0;
    for (it = A.begin(); it != A.end(); ++it)
        sum += *it;

    cout << "The sum of the element of the vector is: " << sum;
    cout << endl;

    return sum;
}

int main(){
    list<int> A;
    list<int>::iterator it;

    A.push_back(3);
    A.push_back(5);
    A.push_back(6);
    A.push_back(7);
    A.push_back(8);

    printAllSatisfy(A);
    cout << "The list A has " << A.size() << " element." << endl;
    sum_of_element(A);

    return 0;
}