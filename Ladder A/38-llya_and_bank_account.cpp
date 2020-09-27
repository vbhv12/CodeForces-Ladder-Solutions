#include<bits/stdc++.h>
#define pb push_back
#define FOR(i, a, b) for(int i=a; i<b; ++i)
#define FORR(i, a, b) for(int i=a; i>b; --i)
#define ll long long
using namespace std;

short isSmaller(short x) {
	short ones = x%10;
	short tens = x/10;
	return (ones<tens)?ones:tens;
}

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	ll n;
	short lastTwo;
	cin>>n;
	if(n>0) {
		cout<<n; return 0;
	}
	else {

		if(abs(n/100) > 0) cout<<n/100<<(isSmaller(abs(n%100)));
		else cout<<-isSmaller(abs(n));
	}
	
	return 0;
}