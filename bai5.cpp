#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"Nhap chuoi: ";
	getline(cin,str);
	//xoa ki tu trang o dau
	while(str[0]==' '){
		str.erase(0,1);
	}
	//xoa ki tu trang o cuoi
	while(str[str.size()-1]==' '){
		str.erase(str.size()-1,1);
	}
	int i=0;
	while(i < str.size()) {
		if(str[i]==' ' && str[i+1]==' ')
		str.erase(i,1);
		else i++;
	}
	for(int i=0;i<str.size();i++){
		str[i]=tolower(str[i]);
		}
	if(str[0] != ' '){
		str[0] = toupper(str[0]);
	}
	for(int i=0;i<str.size();i++){
		if(str[i] == ' ' && str[i+1] != ' '){
		str[i+1] = toupper(str[i+1]);
		}
	}
	cout<<str;
return 0;
}
