#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string id,ten,ns;
		float gpa;
	public:
		SinhVien();
		void nhap();
 		void in();
 		float getGpa();
		
};
SinhVien::SinhVien(){
	id=ten=ns="";
	gpa=0;
}
void SinhVien::nhap(){
	cout<<"Nhap ID : ";cin>>id;
	cin.ignore();
	cout<<"Nhap Ten : ";getline(cin,ten);
	cout<<"Nhap Ns: ";cin>>ns;
	cout<<"Nhap Diem: ";cin>>gpa;
}
void SinhVien::in(){
	cout<<id<<" "<<ten<<" "<<ns<<" "<<gpa<<" "<<endl;
}
float SinhVien::getGpa(){
	return this->gpa;
}
bool cmp(SinhVien a, SinhVien b){
	return a.getGpa()>b.getGpa();
}
int main(){
	 
	int n;
	cin>>n;
	
	SinhVien a[100];
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		a[i].in();
	}
	 
	return 0;
}
