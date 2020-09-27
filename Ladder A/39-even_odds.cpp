#include<bits/stdc++.h>
#define pb push_back
#define FOR(i, a, b) for(int i=a; i<b; ++i)
#define FORR(i, a, b) for(int i=a; i>b; --i)
#define ll long long
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	ll n, k, p;
	cin>>n>>k;
	if(n>0) {
		p=ceil(n/2.0);
		if(k<=p) cout<<2*k-1;
		else cout<<2*(k-p);
	}
	return 0;
}