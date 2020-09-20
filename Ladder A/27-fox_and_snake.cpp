#include<bits/stdc++.h>
#define pb push_back
#define FORI(i, a, b) for(int i=a; i<b; ++i)
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	short int n, m;
	cin>>n>>m;
	FORI(i, 0, n) {
		if(i%2==0) cout<<string(m, '#');
		else if(i==1 || (i-1)%4==0) cout<<string(m-1, '.')<<'#';
		else cout<<'#'<<string(m-1, '.');
		cout<<"\n";	
	}
	return 0;
}