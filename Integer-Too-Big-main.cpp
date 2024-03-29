/*  Program to show integer overflow
    For expected inputs <=16 all is well, but
    What happens otherwise?

    Hint: Use the debugger to see what happens
	when the input is 17 or 18.

    by Jan Pearce, Berea College */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int myinput;
    cout << "Please a positive integer enter 16 or lower: ";
    cin >> myinput;

    for (int i = 0; i < pow(2, myinput); i = pow(2, i)) {
        cout << "i = " << i << endl;
    }

    return 0;
}