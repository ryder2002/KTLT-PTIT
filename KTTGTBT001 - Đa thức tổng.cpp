#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
float tinhmu(float n,int i){
	return 1.0 * pow(n,i);
}
int tinhtong(int k){
	int sum= k*(1+k)/2;
	return sum;
}
float tinhgt(int n, float x){
	float kq=0;
	for(int k=1;k<=n;k++){
		kq += 1.0* (tinhmu(x,k))/(tinhtong(k));
	}
	return kq;
}
int main(){
	int n,t; cin>>t;
	float x;
	while(t--){
		cin>>n>>x;
		cout <<fixed <<setprecision(3) << tinhgt(n,x);
		cout<<endl;
	}
	return 0;
}