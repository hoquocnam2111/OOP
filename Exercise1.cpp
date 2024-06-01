#include<bits/stdc++.h>
using namespace std;


using ll =long long;

ll UCLN(ll a, ll b){

    while ( a != b)
    {
        if (a > b){
            a = a - b;
        }
        else{
            b = b - a;
    }
    }
    return a;
}
 
class PhanSo{
    private:
        ll  tu , mau ;
    public:
        PhanSo(ll tu ,ll mau );
        friend ostream& operator<<(ostream&,PhanSo);   
        friend istream& operator>>(istream&,PhanSo&);   
        void rutgon();
};
PhanSo::PhanSo(ll tu , ll mau ){
    this->tu=tu;
    this->mau=mau;
}
ostream& operator<<(ostream& out ,PhanSo a){
    out<<a.tu<<"/"<<a.mau<<endl;
    return out;
}
istream& operator>>(istream& in ,PhanSo& a){
 in>>a.tu>>a.mau;
 return in;
}
void PhanSo::rutgon(){
ll g = UCLN(tu , mau );

tu =tu/g;
mau =mau/g;

}
int main(){
PhanSo p(1,1);
cin>>p;
p.rutgon();
cout<<p;
return 0;
}
