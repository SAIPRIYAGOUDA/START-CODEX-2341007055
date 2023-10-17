//coin piles
#include<iostream>
using namespace std;

int main(){
    int t=1;
    cin>>t;
    while(t--){
        int a,b; 
        cin>>a>>b;
        if(a>=b){
            int k=abs(a-b);
            a=a-2*k;
            b=b-k;
            if(a==b && a>=0 && a%3==0){
                cout<<"yes\n";
            }
            else cout<<"No\n";
        }
        else{
            int k=abs(a-b);
            b=b-2*k; 
            a=a-k;
            if(a==b && a>=0 && a%3==0) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }

    return 0;
}
