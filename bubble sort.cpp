//bubble sort 

#include<iostream>
using namespace std;

int main(){
    string arr ;
    cout<<"Enter string : ";
    cin>>arr;
    int n = arr.length();
    int count = 1;
    while(count < n){
        for(int i=0;i<n-count;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    }
    cout<<"sorted array : "<<arr;
    
    
    return 0;
}
