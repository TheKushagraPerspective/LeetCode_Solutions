#include <bits/stdc++.h>
using namespace std;

bool isOccurenceUnique(vector<int>& arr, int size) {
    unordered_map<int, int> freqMap;

    // Calculate the frequency of each element
    for (int i = 0; i < size; i++) {
        freqMap[arr[i]]++;
    }

    unordered_set<int> freqSet;
    // Check if the frequencies are unique
    for (auto& it : freqMap) {
        if (freqSet.find(it.second) != freqSet.end()) {
            return false;
        }
        freqSet.insert(it.second);
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);  // Using vector instead of a static array

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool result = isOccurenceUnique(arr, n);
    if (result) {
        cout << "Yes, Unique occurrence is there" << endl;
    } else {
        cout << "No, Unique occurrence is not there" << endl;
    }

    return 0;
}
