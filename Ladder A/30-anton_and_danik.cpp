#include<bits/stdc++.h>
#define pb push_back
#define FORI(i, a, b) for(int i=a; i<b; ++i)
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int n, anton=0, danik=0;
	cin>>n;
	string s;
	cin>>s;
	FORI(i, 0, n) {
		if(s[i] == 'A') anton++;
		else danik++;
	}
	if(anton>danik) cout<<"Anton";
	else if(anton==danik) cout<<"Friendship";
	else cout<<"Danik";
	return 0;
}