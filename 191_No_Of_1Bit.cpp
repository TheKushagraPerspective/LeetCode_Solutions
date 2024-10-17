#include <bits/stdc++.h>
using namespace std;


int NumberOfOneBits(int n) {
    int count = 0;

    while(n) {
        int bit = n & 1;

        // if bit=1 then count++
        if(bit) {
            count++;
        }

        n = n >> 1;
    }

    return count;
}



int main() {
    int n;
    cin >> n;


    int NoOfBits = NumberOfOneBits(n);
    cout << NoOfBits << endl;
}