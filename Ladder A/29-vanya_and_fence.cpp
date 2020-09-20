#include<bits/stdc++.h>
#define pb push_back
#define FORI(i, a, b) for(short int i=a; i<b; ++i)
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	short int n, h, a, ans=0;
	cin>>n>>h;
	FORI(i, 0, n) {
		scanf("%d", &a);
		if(a<=h) ans++;
		else ans+=2;
	}
	cout<<ans;

	return 0;
}