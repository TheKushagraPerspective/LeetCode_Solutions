#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
    bool isPalindrome(string s) {
        int n = s.length();
        int left = 0;
        int right = n - 1;

        while(left < right) {
            while(left < right && !isalnum(s[left])) {
                left++;
            }
            while(left < right && !isalnum(s[right])) {
                right--;
            }

            if(tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() {

    // note :- we will only check for alpha-numeric values not for special words and other except alphanumeric values.
    // and case will not make any difference means p and P will be same for this program

    string s;
    getline(cin , s);

    Solution obj1;
    bool status = obj1.isPalindrome(s);

    if(status) {
        cout << "Given string is a palindrome" << endl;
    }
    else {
        cout << "Given string is not a palindrome" << endl;
    }
    
}