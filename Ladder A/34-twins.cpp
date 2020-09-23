#include<bits/stdc++.h>
#define pb push_back
#define FOR(i, a, b) for(short i=a; i<b; ++i)
#define FORR(i, a, b) for(short i=a; i>b; --i)
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	short n, x, cnt=0;
	cin>>n;
	vector<int> v;
	int sum=0;
	FOR(i, 0, n) {
		cin>>x;
		sum+=x;
		v.pb(x);
	}
	sort(v.begin(), v.end());

	int temp_sum=0;
	FORR(i, n-1, -1) {
		if(temp_sum<=sum) {
			temp_sum+=v[i];
			sum-=v[i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}