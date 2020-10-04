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

	int arr[10] = {0};
	int k;
	string inp;
	cin>>k;

	for(int i=0; i<4; ++i) {
		cin>>inp;
		for(int j=0; j<4; ++j) {
			if(inp[j]!='.') {
				int num = inp[j]-'0';
				arr[num]++;
			}
		}
	}
	
	for(int i=0; i<10; i++) {
		if(arr[i] > 2*k) {
			cout<<"NO";
			return 0;
		}
	}
	
	cout<<"YES";
	return 0;

}
