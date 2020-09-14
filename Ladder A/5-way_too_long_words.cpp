#include<iostream>
using namespace std;
int main() {
	int n;
	string str;
	cin>>n;
	while(n--) {
		cin>>str;
		int len = str.length();
		if(len<=10)
			cout<<str<<"\n";
		else {
		   string ans;
			ans+=str[0];
			ans+=to_string(len-2);
			ans+=str[len-1];
			cout<<ans<<"\n";
		}
	}
	
}
