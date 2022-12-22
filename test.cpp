#include<iostream>
using namespace std;

class Bank{
    int principal,time;
    float roi;
    public:
        void calculate(){
            float total = principal*roi*time/100;
            cout<<"Interest: "<<total<<endl;
        }

        void input(int p,int t, float r=8.5){
            principal=p;
            time=t;
            roi=r;
        }

        Bank operator+(int k){
            Bank ans;
            ans.principal=principal;
            ans.time=time;
            if(k<0)
                cout<<"Rate of interest is reduced"<<endl;
            ans.roi = roi + k;
            return ans;
        }
};

int main(){
    Bank s;
    int p,t;
    float r;
    cout<<"Enter principal: ";
    cin>>p;
    cout<<"Enter time: ";
    cin>>t;
    s.input(p,t);
    s.calculate();
    int f = -2;
    Bank x = s + f;
    x.calculate();
    return 0;
}