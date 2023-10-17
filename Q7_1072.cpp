//increasing array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter number: ";
        cin>>arr[i];
    }
    int moves=0;
    int counter=1;
    while(counter<n){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                moves++;
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"No. of moves: "<<moves<<endl;
    return 0;  
}
    