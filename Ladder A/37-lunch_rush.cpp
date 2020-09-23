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

	long n, k, f, t, i, j, joy, max_joy;
	cin>>n>>k;
	max_joy = LONG_MIN;
	while(n--) {
		cin>>f>>t;
		joy=(t>k)?(f-t+k):f;
		if(max_joy<joy) max_joy=joy;
	}
	cout<<max_joy;
	return 0;
}