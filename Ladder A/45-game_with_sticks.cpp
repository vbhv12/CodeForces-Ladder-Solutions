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

	int m, n, c=0;
	cin>>n>>m;
	while(n!=0 && m!=0) {
		n--;
		m--;
		if(c==0) c=1;
		else c=0;
	}
	if(c==0) cout<<"Malvika";
	else cout<<"Akshat";

	return 0;
}