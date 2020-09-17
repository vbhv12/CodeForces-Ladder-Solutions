#include<bits/stdc++.h>
using namespace std;
int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int i, j, r, c, flag=0, rw=0, cw=0;
	cin>>r>>c;
	char arr[r][c];
	for(i=0; i<r; ++i) {
		for(j=0; j<c; ++j) {
			cin>>arr[i][j];
		}
	}
	for(i=0; i<r; ++i) {
		flag=0;
		for(j=0; j<c; ++j) {
			if(arr[i][j] != '.') flag=1;
		}
		if(flag==0) rw++;
	}
	for(i=0; i<c; ++i) {
		flag=0;
		for(j=0; j<r; ++j) {
			if(arr[j][i] != '.') flag=1;
		}
		if(flag==0) cw++;
	}

	int ans = (rw*c + cw*r) - (rw*cw);
	cout<<ans;
	return 0;
}