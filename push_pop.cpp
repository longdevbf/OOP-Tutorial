#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v;
	while(n != 0){
		int a, b;
		cin>>a;
		if(a == 1){
			cin>>b;
			v.push_back(b);
		}
		else if(a == 2 && !v.empty()){
			v.pop_back();
		}
		n -= 1;
	}
	if(v.empty()){
		cout<<"EMPTY";
	}
	else{
		for(auto i : v){
			cout<<i<<" ";
		}
	}
	
}