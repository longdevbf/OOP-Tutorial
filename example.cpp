#include<bits/stdc++.h>
using namespace std;
class CTY{
	private:
		string company;
		int year;
	public:
		void nhap1(){
			cout<<"Nhap ten cong ty :"<<endl;
			cin>>company;
			cout<<"Nhap nam thanh lap"<<endl;
			cin>>year;
		}
			
		void in(){
			cout<<"Ten cong ty : "<<company;
			cout<<"Nam thanh lap : "<<year;
		}
		int getY(){
			return year;
		}
		
			
};
class CTPM : public CTY{
	private: 
		int sltv;
	public:
		void nhapx(){
		CTY::nhap1();
		cout<<"Nhap so lap trinh vien cua cong ty "<<endl;
		cin>>sltv;
		}
		void in(){
			CTY::in();
			cout<<"So lap trinh vien cua cong ty : "<<sltv;
			
		}
		int getLTV(){
			return sltv;
		}

};
class CTVT : public CTY{
	private:
		int soto;
	public:
		void nhapy(){
			CTY::nhap1();
			cout<<"Nhap so o to cua cong ty van tai"<<endl;
			cin>>soto;
		}
		void in(){
			CTY::in();
			cout<<"So oto cua cong ty "<<soto;
		}
		int getOTO(){
			return soto;	
		}
};
int main(){
	
	int n, m;
	cout<<"Nhap n cong ty phan mem va m cong ty van tai : "<<endl;
	cin>>n>>m;
	
	CTPM a[n];
	CTVT b[n];
	cout<<"Nhap va danh sach cong ty phan mem"<<endl;
	
	for(int i = 0; i < n; i++){
		a[i].nhapx();
	}
	cout<<"Nhap vao danh sach cong ty van tai"<<endl;
		for(int i = 0 ; i < m; i++){
			b[i].nhapy();
		}
	
	//a
	for(int i = 0; i < n; i++){
		if(a[i].getY() > 2000 && a[i].getLTV() > 20){
			a[i].in();
		}
	}
	//b
	
	
	
	
}