#include<bits/stdc++.h>
using namespace std;
int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	string t, c;
	cin>>t>>c;
	int i=0, j=0;
	while(i<=t.length() && j<=c.length()) {
		if(t[i] == c[j]) {
			i++;
		}
		j++;
	}
	cout<<i+1;
	return 0;
}