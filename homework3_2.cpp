/*
 * Write a program to read integers from a text file (each line has one integer),
 * and count number of odd and even integers, and test on the integers.txt
 */

#include <iostream>
#include <fstream>

using namespace std;

void readFile(){
    ifstream intFile("integer2.txt");
    int rand_num;
    while(intFile >> rand_num){
        if(rand_num % 2 == 0){
            cout << "Even number: " << rand_num << endl;
        }
        else{
            cout << "Odd number: " << rand_num << endl;
        }
    }
}

void totalIntegers() {
    ifstream intFile("integer2.txt");
    int rand_num;
    int tot_even = 0, tot_odd = 0;
    while (intFile >> rand_num) {
        if (rand_num % 2 == 0) {
            tot_even++;
        } else {
            tot_odd++;
        }

    }
    cout << "The total even integers is: " << tot_even << endl;
    cout << "The total odd integers is: " << tot_odd;
}
    int main() {

        ofstream intFile;
        intFile.open("integer2.txt");

        int e = 0, o = 0;
        int rand_num, odd_num[1000], eve_num[1000];

        srand(time(NULL));

        for (int i = 0; i < 1000; i++) {

            rand_num = rand();

            if (rand_num % 2 == 0) {
                eve_num[e] = rand_num;
                intFile << eve_num[e] << endl;
                e++;
            } else {
                odd_num[o] = rand_num;
                intFile << odd_num[o] << endl;
                o++;
            }
        }

        readFile();
        totalIntegers();

        intFile.close();
    }

