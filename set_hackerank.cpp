#include<bits/stdc++.h>

using namespace std;
main(){
	long long n;
	cin>>n;
	
	set<long long> s;
	vector<long long> a;
	vector<long long> b;
	
	for(long long i = 0; i < n; i++){
		long long x, y;
		cin>>x>>y;
		a.push_back(x);
		b.push_back(y);
	}
	for(long long i = 0; i < n; i++){
		if(a[i] == 1){
		
			s.insert(b[i]);	
		}
		else if(a[i] == 2){
			auto it = s.find(b[i]);
			if(it != s.end()){
				s.erase(it);
			}
		}
		else if(a[i] == 3){
			auto it = s.find(b[i]);
			if(it != s.end()){
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}
		}
	}	
		
		
	

	
}