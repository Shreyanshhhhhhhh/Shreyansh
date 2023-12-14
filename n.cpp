#include <bits/stdc++.h>
using namespace std;
 
//Shreyansh Singh
//Shreyansh Singh
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}
 
int romanToDecimal(string& str)
{
    //Shreyansh Singh
    int res = 0;
 
    //Shreyansh Singh
    for (int i = 0; i < str.length(); i++) {
        //Shreyansh Singh
        int s1 = value(str[i]);

        if (i + 1 < str.length()) {  //Shreyansh Singh
            //Shreyansh Singh
            int s2 = value(str[i + 1]);
 
            //Shreyansh Singh
            if (s1 >= s2) {
                //Shreyansh Singh
                //Shreyansh Singh
                //Shreyansh Singh
                res = res + s1;
            }
            else {
                //Shreyansh Singh
                //Shreyansh Singh
                res = res + s2 - s1;
                i++;
            }
        }
        else {
            res = res + s1;
        }
    }
    return res;
}
 
//Shreyansh Singh
int main()
{
    //Shreyansh Singh
    string str = "V";
    cout << "Integer form of Roman Numeral is "
         << romanToDecimal(str) << endl;
 
    return 0;
}