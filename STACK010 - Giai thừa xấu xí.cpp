#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		string s = "";
		stack<string>st;
		for(int i=1;i<=n;i++){
			string tmp = to_string(i);
			st.push(tmp);
		}
		int dem = 0;
		stack<string> st2;
		while(st.size()>0){
			dem++;
			if(st.size()>1){
				string tmp = st.top();
				st.pop();
				int num = stoi(tmp);
				int res = num;
				if(dem%4==1){
					res*=stoi(st.top());
				}
				if(dem%4==2){
					res/=stoi(st.top());
				}
				if(dem%4==3||dem%4==0){
					st2.push(to_string(res));
				}
				else{
					st.pop();
					st.push(to_string(res));
				}
			}
			else if(st.size()==1){
				st2.push(st.top());
				st.pop();
			}
		}
		stack<string> st1;
		while(!st2.empty()){
			st1.push(st2.top());
			st2.pop();
		}
		dem=0;
		int sum = 0;
		sum = stoi(st1.top());
		st1.pop();
		while(!st1.empty()){
			dem++;
			if(dem%2==1){
				sum+=stoi(st1.top());
			}
			if(dem%2==0){
				sum-=stoi(st1.top());
			}
			st1.pop();
		}
		cout<<sum<<endl;
	}
	return 0;
}