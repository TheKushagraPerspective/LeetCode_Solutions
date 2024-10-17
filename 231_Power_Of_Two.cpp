#include <bits/stdc++.h>
using namespace std;


int isNPowerOfTwo(int n) {
    if (n <= 0) return 0;

    int ans = 1;
    int i = 1;

    while(1) {
        if(ans == n) {
            return true;
        }
        else if(pow(2 , i) > n) {
            return false;
        }

        ans = pow(2 , i);
        i++;
    }
}


int main() {
    int n;
    cin >> n;

    int ans = isNPowerOfTwo(n);
    if(ans) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}