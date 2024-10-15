#include <bits/stdc++.h>
using namespace std;


int subtractProductAndSum(int n) {
    int product = 1;
        int sum = 0;

        while(n > 0) {
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n /= 10;
        }

        return product - sum;
}


int main() {
    int n;
    cin >> n;
    int diffBtwProdAndSum = subtractProductAndSum(n);
    cout << diffBtwProdAndSum << endl;


    return 0;
}