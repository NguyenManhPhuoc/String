#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"Nhap chuoi: ";
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		str[i]=tolower(str[i]);
	}
	if(str[0]!=' ')
	str[0]=toupper(str[0]);
	for(int i=0;i<str.size();i++){
		if(str[i]==' ' && str[i+1]!=' '){
			str[i+1]=toupper(str[i+1]);
		}
	}
	cout<<"Ket qua: "<<str;
return 0;
}
	
			

