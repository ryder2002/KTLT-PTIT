#include<bits/stdc++.h>
using namespace std;
double power(double x, int n) {
    if (n == 0) {
        return 1.0;
    }
    if (n < 0) {
        return 1.0 / power(x, -n);
    }
    double half = power(x, n / 2);
    if (n % 2 == 0) {
        return half * half;
    } else {
        return half * half * x;
    }
}
int main(){
	int t; cin>>t;
	while(t--){
		double x;
		int n;
		cin>>x>>n;
		cout<<power(x,n)<<endl;
	}
}