#include<iostream>
using namespace std;

void printArray(int a[],int low,int high)
{
    if(low>=high)
        return;
        cout<<a[low]<<" ";
        printArray(a,low+1,high);


}
int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
        printArray(a,0,n);
        return 0;


}




