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

	int n, cnt=1, max=1;
	cin>>n;
	ll arr[n];
	for(int i=0; i<n; ++i) cin>>arr[i];

	for(int i=0; i<n-1; ++i) {
		if(arr[i]<=arr[i+1]) {
			cnt++;
		}
		else {
			if(max<cnt) max=cnt;
			cnt=1;
		}
	}
	if(max<cnt) max=cnt;
	cout<<max;


	return 0;
}