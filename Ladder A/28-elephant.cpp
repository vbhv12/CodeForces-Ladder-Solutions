#include<bits/stdc++.h>
#define pb push_back
#define FORI(i, a, b) for(int i=a; i<b; ++i)
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	long int x;
	cin>>x;
	if(x<=5) {
		cout<<1; return 0;
	}
	else {
		if(x%5==0) cout<<x/5;
		else cout<<x/5 + 1;
	}

	return 0;
}