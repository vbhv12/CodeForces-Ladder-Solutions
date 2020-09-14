#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char str1[100], str2[100];
	cin>>str1>>str2;
	int ans = strcmpi(str1, str2);
	if (ans<=-1) {
		cout<<-1; return 0;
	}
	else if(ans>=1) {
		cout<<1; return 0;
	}
	else cout<<0;
}
