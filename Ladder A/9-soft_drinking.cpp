#include<iostream>
using namespace std;

int main() {
	//required variables
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int total_ml = k*l, total_slices=c*d;
	int condition1=(total_ml/nl);
	int condition2=total_slices;
	int condition3=p/np;
	//outputting the min
	cout<<min(min(condition1, condition2), condition3)/n;	
}
