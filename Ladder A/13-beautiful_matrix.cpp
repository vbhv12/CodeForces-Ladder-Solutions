#include<bits/stdc++.h>
using namespace std;
int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int i, j, steps=0;
	int arr[5][5];
	for(i=0; i<5; ++i) {
		for(j=0; j<5; ++j) {
			cin>>arr[i][j];
			if(arr[i][j]!=0){
				steps=abs(2-i)+abs(2-j);
				cout<<steps;
				return 0;	
			}
		}
	}
}