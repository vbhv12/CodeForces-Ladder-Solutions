#include<bits/stdc++.h>
#define pb push_back
#define FORI(i, a, b) for(int i=a; i<b; ++i)
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	string p;
	cin>>p;

	if(p.length()>100) {
		cout<<"NO"; return 0;
	}

	FORI(i, 0, p.length()) {
		if(int(p[i]) >=33 && int(p[i]) <= 126) {
			if(p[i]=='H' || p[i]=='Q' || p[i]=='9') {
				cout<<"YES"; return 0;
			}
		}
	}

	cout<<"NO";

	return 0;
}