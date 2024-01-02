#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
ll n;
cin >> n;
if(n<1) cout << "NO\n";
else if(n==1) cout<< "3 1 2 3 "<<endl;
else if(n==2){
cout << "1 4 "<<endl;
}else if(n==3){
cout << "2 5 6 " << endl;
}else{
ll i=0,k=0;
double sum=0;
while(k<n){
++i;
sum=sum+double(log10(i));
k=floor(sum)+1;
}
if(k==n) cout << "1 "<<i<<" "<<endl;
else cout << "NO\n";
}
}
}