#include<iostream>
#include<string>

using namespace std;

int main() {
	string str1, str2;
	cin>>str1>>str2;
	if(str1.length()!=str2.length()){
		cout<<"NO";
		return 0;
	}
	
	else {
		int len = str1.length();
		for(int i=0; i<len; ++i) {
			if(str1[i]!=str2[len-1-i]) {
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
	}
}
