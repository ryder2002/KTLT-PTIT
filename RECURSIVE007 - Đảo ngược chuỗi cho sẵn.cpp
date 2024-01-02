#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; cin>>s;
		for(int i=s.length()-1;i>=0;i--){
            cout<<s[i];
        }
        cout<<endl;
	}
	return 0;
}