//weired algorithm
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    while(n>0 && n!=1){
        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else{
            n=(n*3)+1;
            cout<<n<<" ";
        }
    }
    return 0;
}