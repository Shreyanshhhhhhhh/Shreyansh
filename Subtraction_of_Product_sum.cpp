#include<iostream>
using namespace std;

class Solution {
public:   
    int subtractProductAndSum(int n) {
        int product=1;
        int digit;
        int add=0;
        while (n){
            digit=n%10; 
            n=n/10; 
            product=product*digit; 
            add=add+digit; 
        }
        int result = product-add;
        return result;
    }
};


int main() { 
    Solution s1;
    int a = s1.subtractProductAndSum(234);
    cout<<a;
    return 0;
}