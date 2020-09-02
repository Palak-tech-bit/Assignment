#include<iostream>
using namespace std;

bool testPalindrome(string str,int low,int high)
{
    if(low>=high)
        return true;

    if(str[low]!=str[high])
        return false;

    return testPalindrome(str,low+1,high-1);
}
int main()
{
    string str;
    cin>>str;
    int len=str.length();
    if(testPalindrome(str,0,len-1))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    return 0;
}



