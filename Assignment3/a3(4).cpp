
#include <iostream>
#include<math.h>
#define Pi 3.14159
using namespace std;

 float spherevolume()
{
    float volume,r;
    cin>>r;
    volume=((4.0/3.0)*Pi*(pow(r,3)));
    return volume;
}


int main()
{
    float result;
   result=spherevolume();
   cout<<result;
   return 0;
}

