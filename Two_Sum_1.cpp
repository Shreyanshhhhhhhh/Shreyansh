
#include<iostream>   
#include<vector>
using namespace std;

class Solution{
  public:
  
  vector<int> twoSum(vector<int> &nums,int target){
    vector<int> res;

    for(int i=0;i<nums.size();i++){
        for(int j=1;j<nums.size();j++){
            if(nums[i]+nums[j]==target && i !=j){
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
    }
    return res;    
  }
};

int main(){
    vector<int> nums={2,5,5,11};
    int target=10;
    Solution s;
    vector<int> res= s.twoSum(nums,target);

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    
    return 0;
}