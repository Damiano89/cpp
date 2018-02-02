/*
Write a program using "for" loop that is equivalent to the following program with "while" loop:

 int main()
{
    int p=1;
    int x=1;
    while(x<10){
        p*=x;
        x+=1;
    }
    return 0;
}
 Created by Damiano Canali on 2/2/18.
*/

#include <iostream>
using namespace std;

int main() {

    int p = 1;
    int x = 1;

    for(x=1; x<10; x++)
    {
      cout << "p = " << p << endl;
        p*=x;
      cout << "x = " << x << endl;
    }

    return 0;
}

