#include<bits/stdc++.h>
#define pb push_back
#define FORI(i, a, b) for(int i=a; i<b; ++i)
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int n, x, ones=0, twos=0, threes=0;
	cin>>n;
	vector<int> v;
	FORI(i, 0, n) {
		scanf("%d", &x); v.pb(x);
		if(x==1) ones++;
		else if(x==2) twos++;
		else threes++;
	}
	int lower_bound = min({ones, twos, threes});
	if(lower_bound==0) {
		cout<<0; return 0;
	}
	cout<<lower_bound<<"\n";
	bool flag1=true, flag2=true, flag3=true;
	FORI(i, 0, lower_bound) {
		FORI(j, 0, n) {
			if(v[j]==1 && flag1) {
				cout<<j+1<<" "; v[j]=-1; flag1=false;
			}
			else if(v[j]==2 && flag2) {
				cout<<j+1<<" "; v[j]=-1; flag2=false;
			}
			else if(v[j]==3 && flag3) {
				cout<<j+1<<" "; v[j]=-1; flag3=false;
			}
		}
		cout<<"\n";
		flag1=true; flag2=true; flag3=true;
	}

	return 0;
}