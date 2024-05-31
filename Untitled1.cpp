#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string id,ten,ns;
		float gpa;
		static int dem ;

	public:
		// SinhVien();
		// void nhap();
 		// void in();
 		// float getGpa();
		void tangdem();
		int getdem();
};
int SinhVien::dem=0;

void SinhVien::tangdem(){
	dem++;
}
int SinhVien::getdem(){
	return dem;
}
// SinhVien::SinhVien(){
// 	id=ten=ns="";
// 	gpa=0;
// }
// void SinhVien::nhap(){
// 	cout<<"Nhap ID : ";cin>>id;
// 	cin.ignore();
// 	cout<<"Nhap Ten : ";getline(cin,ten);
// 	cout<<"Nhap Ns: ";cin>>ns;
// 	cout<<"Nhap Diem: ";cin>>gpa;
// }
// void SinhVien::in(){
// 	cout<<id<<" "<<ten<<" "<<ns<<" "<<gpa<<" "<<endl;
// }
// float SinhVien::getGpa(){
// 	return this->gpa;
// }
// bool cmp(SinhVien a, SinhVien b){
// 	return a.getGpa()>b.getGpa();
// }
int main(){
	 
	SinhVien x;
	x.tangdem();
	x.tangdem();
	SinhVien y;
	cout<<y.getdem()<<endl;
	return 0;
}
