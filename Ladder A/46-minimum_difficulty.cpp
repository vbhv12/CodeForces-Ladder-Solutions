#include<bits/stdc++.h>
#define pb push_back
#define FOR(i, a, b) for(short i=a; i<b; ++i)
#define FORR(i, a, b) for(int i=a; i>b; --i)
#define ll long long
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	short n, k, diff, eachMax=1, ans=1000;
	cin>>n;
	short arr[n];
	FOR(i, 0, n) cin>>arr[i];
	k=1;
	while(k<n-1) {
		eachMax=1;
		for(short i=1; i<n; ) {
			if(i==k) {
				diff=arr[i+1]-arr[k-1];
				i+=2;
			}
			else {
				diff=arr[i]-arr[i-1];
				++i;
			}
			if(eachMax<diff) eachMax=diff;
		}
		k++;
		if(ans>eachMax) ans=eachMax;
	}
	cout<<ans;
	return 0;
}