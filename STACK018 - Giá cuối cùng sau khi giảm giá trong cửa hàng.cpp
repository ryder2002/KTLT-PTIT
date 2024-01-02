#include<bits/stdc++.h>
#include<vector>
using namespace std;
void taovt(vector<int>&vt, string s){
	string tmp;
	for(char c:s){
		if(c==','){
			vt.push_back(stoi(tmp));
			tmp="";
		}
		else
		tmp+=c;
	}
	vt.push_back(stoi(tmp));
}
void kq(vector<int>vt){
	for(int i=0;i<vt.size()-1;i++){
	    int c=0;
		for(int j=i+1;j<vt.size();j++){
			if(vt[j]<=vt[i]){
				c=1;
				cout<<vt[i]-vt[j]<<",";
				break;
			}	
		}
		if(c==0){
			cout<<vt[i]<<",";
		}
	}
	cout<<vt[vt.size()-1];
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		vector<int>vt;
		taovt(vt,s);
		kq(vt);
		cout<<endl;
	}
}