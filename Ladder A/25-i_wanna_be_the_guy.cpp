#include<bits/stdc++.h>
#define FORI(i, a, b) for(int i=a; i<b; ++i)
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int n, p, q, x;
	set<int> st;
	cin>>n>>p;
	FORI(i, 0, p) {
		cin>>x; st.insert(x);
	}
	cin>>q;
	FORI(i, 0, q) {
		cin>>x; st.insert(x);
	}

	if(st.size() == n) cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";
	return 0;
}