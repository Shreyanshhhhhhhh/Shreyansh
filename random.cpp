#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    vector<int> freqCount(2001, 0);  // Assuming values are within -1000 to 1000

    // Count occurrences of each element
    for (int num : arr) {
        freqCount[num + 1000]++;
    }

    // Store unique frequencies in a separate vector
    vector<int> uniqueFreqs;
    for (int freq : freqCount) {
        if (freq > 0) {
            if (find(uniqueFreqs.begin(), uniqueFreqs.end(), freq) != uniqueFreqs.end()) {
                return false;  // Duplicate frequency found
            }
            uniqueFreqs.push_back(freq);
        }
    }

    return true;  // All frequencies are unique
}

int main() {
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    bool result = uniqueOccurrences(arr);
    cout << result << endl;  // Output: true
    return 0;
}
