#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"Nhap chuoi: ";
	getline(cin,str);
	while(str[0]== ' ')
	{
		str.erase(0,1);
	}
	while(str[str.size()-1] ==' ')
	{
		str.erase(str.size()-1,1);
	}
	cout<<str;
return 0;
}

	
