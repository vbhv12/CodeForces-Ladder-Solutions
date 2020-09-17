#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	string s;
	cin>>s;
	vector<int> v;

	for(int i=0; i<s.length(); i+=2) v.pb(s[i]-48);

	sort(v.begin(), v.end());

	int k=0;
	int n = v.size();

	for(int i=0; i<n; ++i) {
		cout<<v[i];
		if(k<n-1) cout<<"+";
		k++;
	}

	return 0;
}