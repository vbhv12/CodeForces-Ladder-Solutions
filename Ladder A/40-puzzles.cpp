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

	int n, m, i, diff=996;
	cin>>n>>m;
	int arr[m];
	for(i=0; i<m; ++i) cin>>arr[i];
	sort(arr, arr+m);
	for(i=0; i<=m-n; ++i) {
		if(diff>arr[i+n-1]-arr[i])
			diff=arr[i+n-1]-arr[i];
	}
	cout<<diff;
	return 0;
}