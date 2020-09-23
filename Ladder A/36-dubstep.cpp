#include<bits/stdc++.h>
#define pb push_back
#define FOR(i, a, b) for(short i=a; i<b; ++i)
#define FORR(i, a, b) for(short i=a; i>b; --i)
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	string ipt;
	cin>>ipt;
	bool flag=false;
	
	for(short i=0; i<ipt.length(); ) {
		if(ipt[i]=='W' && ipt[i+1]=='U' && ipt[i+2]=='B') {
			if(flag) cout<<" ";
			flag=false;
			i+=3;
		}
		else {
			cout<<ipt[i];
			i++;
			flag=true;
		}
	}
	
	return 0;
}