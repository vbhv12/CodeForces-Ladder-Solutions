#include<bits/stdc++.h>
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int n, k, row_sum=0, col_sum=0;
	cin>>n>>k;
	int arr[n][n];
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			if(i==j) arr[i][j]=k;
			else arr[i][j]=0;
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}