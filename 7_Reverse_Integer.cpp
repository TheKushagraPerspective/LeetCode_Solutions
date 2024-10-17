#include <bits/stdc++.h>
using namespace std;


int reverseTheInteger(int n) {
    int revAns = 0;

    while(n != 0) {
        int lDigit = n % 10;

        // checking if the integer limit exceeds or not
        if(revAns > (INT_MAX / 10)) {
            return 0;
        }
        else if(revAns < (INT_MIN / 10)) {
            return 0;
        }

        revAns = revAns * 10 + lDigit;
        n /= 10;
    }

    return revAns;
}


int main() {
    int n;
    cin >> n;

    int reversedNum = reverseTheInteger(n);
    if(reversedNum) {
        cout << reversedNum << endl;
    }
    else {
        cout << "Reversed Integer exceeds the limit of integer" << endl;
    }
}