/*
 *  Write a program to write 1000 random odd integers to a file called integers.txt ,
 *  each integer in one separate line, and 0 in the last line.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main(){

    ofstream intFile;
    intFile.open("integer.txt");

    int rand_num, odd_num[1000];
    int o = 0;

    srand(time(NULL));

    for (int i = 0; i<1000; i++) {

        rand_num = rand();

            if(rand_num%2 != 0){
                odd_num[o] = rand_num;
                intFile << odd_num[o] << endl;
                o++;
        }

    }
    intFile << "0";

    intFile.close();
}
