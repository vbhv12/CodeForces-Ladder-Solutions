#include<iostream>
using namespace std;

int main() {
	int n, x;
	cin>>n;
	int max_index=0, min_index=n-1, max=1, min=100;
	for(int i=0; i<n; i++) {
		cin>>x;
		if(x>max) {
			max = x;
			max_index = i;
		}
		if(x<=min) {
			min = x;
			min_index = i;
		}
	}
	if(max_index>min_index) cout<<(max_index-1) + (n-min_index) - 1;
	else cout<<(max_index-1) + (n-min_index);
}

