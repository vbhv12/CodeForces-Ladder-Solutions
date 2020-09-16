#include<bits/stdc++.h>
using namespace std;
int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	long int i, n, m, x, l, r, p, ones=0, neg_ones=0;
	scanf("%ld%ld", &n, &m);
	for(i=0; i<n; ++i) {
		scanf("%ld", &x);
		if(x==1) ones++;
	}
	neg_ones = n - ones;

	for(i=0; i<m; ++i) {
		scanf("%ld%ld", &l, &r);
		p = (r-l+1);
		if(p==1 || p%2!=0) cout<<0<<"\n";
		else {
			if(ones>=p/2 && neg_ones>=p/2) cout<<1<<"\n";
			else cout<<0<<"\n";
		}
	}

	return 0;
}