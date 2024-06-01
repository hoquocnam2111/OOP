#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	friend class GiaoVien;
	private:
		string id,ten,ns;
		float gpa;
		static int dem ;

	public:
		SinhVien();
		void nhap();
 		void in();
 		float getGpa();
		void tangdem();
		int getdem();
		friend void inthongtin(SinhVien);
};
void inthongtin(SinhVien a){
	cout<<a.id<<" "<<a.ten;
}
int SinhVien::dem=0;

void SinhVien::tangdem(){
	dem++;
}
int SinhVien::getdem(){
	return dem;
}
SinhVien::SinhVien(){
	ten=ns="";
	gpa=0;
}
void SinhVien::nhap(){
	++dem;
	
	this->id="SV"+string(3-to_string(dem).length(),'0')+to_string(dem);
	cout<<"Nhap Ten : ";getline(cin,ten);
	cout<<"Nhap Ns: ";cin>>ns;
	cout<<"Nhap Diem: ";cin>>gpa;
	cin.ignore();
}
void SinhVien::in(){
	cout<<id<<" "<<ten<<" "<<ns<<" "<<gpa<<" "<<endl;
}
// float SinhVien::getGpa(){
// 	return this->gpa;
// }
// bool cmp(SinhVien a, SinhVien b){
// 	return a.getGpa()>b.getGpa();
// }
class GiaoVien{
	private:
		string khoa;
	public:
		void update(SinhVien&);
};
void GiaoVien::update(SinhVien& x){
	x.gpa=3.2;
}
int main(){
	// cout<<"Nhap so luong Sinh Vien : ";
	//  int n;cin>>n;
	//  SinhVien a[100];
	//  for(int i=0;i<n;i++){
	// 	a[i].nhap();
	//  }
	//  for(int i=0;i<n;i++){
	// 	a[i].in();
	// 	inthongtin(a[i]);
	//  }
	
	SinhVien x;
	x.nhap();
	GiaoVien y;
	y.update(x);
	x.in();
	return 0;
}
