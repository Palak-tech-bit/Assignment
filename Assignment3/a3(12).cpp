#include <iostream>
using namespace std;

void stringReverse(string &str, int l, int h)
{
	if(l>=h)
    {
        return;
    }

	if (l < h)
	{
		swap(str[l], str[h]);
		stringReverse(str, l + 1, h - 1);
	}
}

int main()
{
	string str;
	cin>>str;
    stringReverse(str, 0, str.length() - 1);
	cout << "Reverse of the given string is : " << str;

	return 0;
}
