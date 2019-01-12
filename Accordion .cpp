#include<iostream>
using namespace std;

int main()
{
	string a;
	string ans;
	int start = 0;
	int end = 0;
	bool get[4] = {false,false,false,false};
	cin >> a;
	for(int i = 0;i<a.size();i++)
	{
		if(a[i] == '[' && !get[0] && !get[1])
		{				
				ans += a[i];
				get[0] = true;
		}
		if(a[i] == ':' && !get[1] && get[0])
		{				
				ans += a[i];
				get[1] = true;
		}
		start=i;
		if(get[0] && get[1])break;
	}
	
	for(int i = a.size()-1; i>start ;i--)
	{
		if(a[i] == ']' && !get[3] && !get[2])
		{				
				ans += a[i];
				get[3] = true;
		}
		if(a[i] == ':' && !get[2] && get[3])
		{				
				ans += a[i];
				get[2] = true;
		}
		end=i;
		if(get[2] && get[3])break;
	}
	
	
	if(!get[0]|| !get[1] || !get[2] || !get[3])
	{
		cout<<"-1";
	}
	else
	{
		for(int i = start+1;i<end;i++)
		{
			if(a[i] == '|')
				if(get[0] && get[1] && get[2] && get[3] )
				{				
					ans += a[i];
				}
		}
		cout << ans.size();	
	}

}
