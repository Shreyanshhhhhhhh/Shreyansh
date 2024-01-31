#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
    double j=x;
    
    double rev=0;
    if(x>=0){
    while (x!=0)
    {
        double rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    } 

    if(rev-j==0){
        return true;
    }
    else{
        return false;
    }}

    else{
        return false;
    }
    }
};


int main() {
    Solution s1;
    bool a = s1.isPalindrome(12251);
    if(a==1){
        cout<<"It is a Palindrome";
    }
    else{
        cout<<"It is not a palindrome";
    }
    return 0;
}