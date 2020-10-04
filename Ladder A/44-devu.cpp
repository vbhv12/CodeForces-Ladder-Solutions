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

	short n, d, x;
	cin>>n>>d;
	int devuTime=0;
	FOR(i, 0, n) {
		cin>>x;
		devuTime+=x;
	}
	devuTime+=((n-1)*10);
	if(devuTime>d) { cout<<-1; return 0; }
	else cout<<(n-1)*2 + (d-devuTime)/5;

	return 0;
}