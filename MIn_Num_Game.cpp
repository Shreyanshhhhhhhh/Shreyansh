#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
      cout<<"This is the first element of the array: "<<nums[0];   
    }
};
int main() {
    vector<int> arr={1,2,3,4};
    Solution s1;
    s1.numberGame(arr);
    return 0;
}