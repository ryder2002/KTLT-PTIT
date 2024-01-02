#include<bits/stdc++.h>
#include<vector>
using namespace std;
void kq(string s){
	long long tong=0;
	vector<int> st;
	string tmp="";
	for(char c:s){
		if(c==','){
			int r=stoi(tmp);
			tong+=r;
			st.push_back(r);
			tmp="";
		}
		else{
			tmp+=c;
		}
	}
	cout<<(tong+stoi(tmp));
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		kq(s);
		cout<<endl;
	}
	return 0;
}