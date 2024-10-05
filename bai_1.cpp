#include<bits/stdc++.h>

using namespace std;
void swap(int &a, int &b){
	int t = a;
	a = b;
	b = t;
}

int x =  10;
int& get();
int min(int a, int b);
int min(int a, int b, int c);
int min(int a[], int n);
int main(){

	cout<<::x<<endl;
	int &r = ::x;
	
	r += 10;
	cout<<::x<<endl;
	
	::x += 10;
	cout<<r<<" "<<::x<<endl;
	
	
	int y = 5;
	const int &g = y;
	
	cout<<g<<" "<<y<<endl;
	y += 10;
//	g += 10;//bao loi vi hang k the thay doi gia tri duoc tham chieu
	cout<<g<<" "<<y<<endl;
	
	int a = 5, b = 6;
	swap(a, b);
	cout<<a<<endl<<b;
	cout<<endl<<::x;
	get()+= 10;
	cout<<endl<<::x<<endl;
	cout<<min(2, 3)<<endl;
	cout<<min(5, 21, 1);
	int t[4] = {1, 2, 3, 4};
	
	cout<<endl<<min(t, 4)<<endl;
}
int& get(){
	return x;
}
int min(int a, int b){
	return a < b ? a: b;
}
int min(int a, int b, int c){
	return min(a, min(b, c));
}
int min(int a[], int n){
	int res = a[0];
	for(int i = 1; i < n; i++) res = min(res, a[i]);
	return res;
}