/*
Write the same function of homework2_1 , but for a std::vector<int> A, using iterator A.begin() and A.end()
 */

#include <iostream>
#include <vector>
using namespace std;

void printAllSatisfy(vector<int> A){

    vector<int>::iterator it;

    cout << "The element of the vector are: ";
    for (it = A.begin(); it != A.end(); ++it)
        cout << *it << " ";
    cout << endl;
}

int sum_of_element(vector<int> A) {

    vector<int>::iterator it;

    int sum = 0;
    for (it = A.begin(); it != A.end(); ++it)
        sum += *it;

    cout << "The sum of the element of the vector is: " << sum;
    cout << endl;

    return sum;
}

int main(){
    vector<int> A;
    vector<int>::iterator it;

    A.push_back(3);
    A.push_back(5);
    A.push_back(6);
    A.push_back(7);
    A.push_back(8);

    printAllSatisfy(A);
        cout << "The vector A has " << A.size() << " element." << endl;
    sum_of_element(A);

    return 0;
}