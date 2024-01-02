#include<bits/stdc++.h>
#include<vector>
using namespace std;
void taovt(string s, vector<int>&vt){
	string tmp="";
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
void kq(vector<int>&vt){
	
	for(int i=0;i<vt.size();i++){
	    int c=0;
	    if(i==(vt.size()-1)){
	    c=1;
	    cout<<0;}
	    else{
		for(int j=i+1;j<vt.size();j++){
		    
			if(vt[j]>vt[i]){
				c=1;
				cout<<(j-i)<<",";
				break;
			}
		}
	    }
		if(c==0)
		cout<<"0,";
	}
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; 
		getline(cin,s);
		vector<int>vt;
		taovt(s,vt);
		kq(vt);
		cout<<endl;
	}
	return 0;
}