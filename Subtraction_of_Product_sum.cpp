#include<iostream>
using namespace std;

class Solution {
public:   //Shreyansh Singh
    int subtractProductAndSum(int n) {
        int product=1;
        int digit;
        int add=0;
        while (n){
            digit=n%10; //Shreyansh Singh
            n=n/10; //Shreyansh Singh
            product=product*digit; //Shreyansh Singh
            add=add+digit; //Shreyansh Singh
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