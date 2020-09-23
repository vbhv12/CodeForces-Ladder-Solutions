#include<bits/stdc++.h>
#define pb push_back
#define FORI(i, a, b) for(int i=a; i<b; ++i)
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	short n, m;
	cin>>n>>m;
	string s[n];
	FORI(i, 0, n) cin>>s[i];
	bool ans[n] = {false};
	short max;
	FORI(i, 0, m) {
		max=0;
		FORI(j, 0, n) {
			if(max<s[j][i]) {
				max=s[j][i];
			}
		}
		
		FORI(j, 0, n) {
			if(s[j][i]==max) {
				ans[j] = true;
			}
		}
	}
	short cnt=0;
	FORI(i, 0, n) {
		if(ans[i]) cnt++;
	}
	cout<<cnt;

	return 0;
}