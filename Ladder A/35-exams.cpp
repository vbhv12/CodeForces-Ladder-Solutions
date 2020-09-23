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

	short n, k;
	cin>>n>>k;
	if(3*n > k) cout<<3*n-k;
	else cout<<0;
	
	return 0;
}