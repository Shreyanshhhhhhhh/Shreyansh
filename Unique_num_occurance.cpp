#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int size=arr.size();
        cout<<size;
        for (int i = 0; i < size; i++){
            for (int j = 1; i < size; j++){
                if ( i !=j && arr[i]=arr[j]){
                    

                }
                
            }
            
        }




        
    }
};

int main() {
    Solution s1;
    vector<int> arr={1,2,3,4,5};
    s1.uniqueOccurrences(arr);
    return 0;
}