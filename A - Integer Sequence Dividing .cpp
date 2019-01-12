#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if( n%2 == 0)
	{
		int a = (((n/2) + (n/2+1)) / 2);
		if(a % 2 == 0)cout << "0";
		else cout<< "1"; 
	}
	else 
	{
		int a = (n/2) + 1;
		if(a % 2 == 0)cout << "0";
		else cout<< "1"; 
	}
	return 0;
 } 
