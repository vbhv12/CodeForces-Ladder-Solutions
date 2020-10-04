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

	short int n;
	cin>>n;
	int queues[n];
	FOR(i, 0, n) cin>>queues[i];
	int x, time_taken, time=INT_MAX;
	FOR(i, 0, n) {
		time_taken=0;
		FOR(j, 0, queues[i]) {
			cin>>x;
			time_taken+=(x*5);
		}
		time_taken+=(queues[i]*15);
		if(time>time_taken) time=time_taken;
	}
	cout<<time;

	return 0;
}