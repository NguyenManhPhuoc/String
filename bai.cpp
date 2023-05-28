#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	//str.substr(x, y); cat chuoi / x : vi tri bat dau cat / y : so luong ki tu cat
	//str.find(s);      tim ra vi tri xuat hien cua chuoi con s trong chuoi str
	//str.erase(x, n);   xoa ki tu / x : vi tri bat dau xoa / n : so luong ki tu xoa
	//str.replace(x, n, s); thay the n phan tu tai vi tri x bang chuoi s
	//str.compare(s);  so sanh chuoi
	//str.insert(x, s)  chen chuoi s tu vi tri x
	//str.length, str.size() do dai chuoi
	string str="NguyenManhPhuoc";
	string str1= str.replace(6,4,"Tran"); 
	cout<<str1;
return 0;
}
