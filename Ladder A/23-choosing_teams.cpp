#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int n, x, k, ans=0;
	cin>>n>>k;
	if(n<3) {
		cout<<0; return 0;
	}

	for(int i=0; i<n; ++i) {
		cin>>x;
		if(5 - x >= k) ans++;
	}

	cout<<ans/3;

}