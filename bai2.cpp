#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"Nhap chuoi: ";
	getline(cin,str);
	int i=0;
	while(i <str.size())
	{
		if(str[i]==' ' && str[i+1] ==' ')
		str.erase(i,1);
		else
		i++;
	}
	cout<<"Ket qua: "<<str;
return 0;
}
