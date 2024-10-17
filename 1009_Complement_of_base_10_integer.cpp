#include <bits/stdc++.h>
using namespace std;


// example
// suppose we have 5 so 5 in binary : 00000101 and ~5 is 11111010 but we need only 10 as a compliment so we have taken a mask with 00000000
// and m = n; so m = 00000101 and every right shift of 5,we are doing left shift of mask and then performing or operation of mask with 1 means
// adding 1 to the left end of the mask. and at the end,we are performing & operation on ~n & mask to get the desired output.


int complementTheNumber(int n) {
    int m = n;
    int mask = 0;

    if(!n) {
        // if number is 0 then compliment of 0 is 1
        return 1;
    }

    while(m) {
        mask = (mask << 1) | 1;
        m >>= 1;
    }

    // this is the formula to find the complimenmt of any number
    int ans = (~n) & mask;
    return ans;
}


int main() {
    int n;
    cin >> n;

    int complimentedBits = complementTheNumber(n);
    cout << complimentedBits << endl;
}