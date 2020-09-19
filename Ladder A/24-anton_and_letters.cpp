#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	string s;
	getline(cin, s);
	int n = s.size();
	set<char> t;
	char ch;
	for(int i=0; i<n; ++i) {
		ch = s[i];
		t.insert(ch);
	}

	if(t.size()>=4) cout<<t.size()-4;
	else if(t.size()==3) cout<<1;
	else cout<<0;

	return 0;
}