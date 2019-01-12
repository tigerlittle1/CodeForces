#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	
	while(a--)
	{
		int l,r,d;
		cin >> l >>r>>d;
		int temp = 1;
		while((temp * d) >= l && (temp * d) <= r)
		{
			temp++;
		}
		cout << temp * d<<endl;
	}
 } 
