//merge two sorted array ; 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1;
    cout<<"Enter size of n1: ";
    cin>>n1;
    int one[n1];
    cout<<"Enter elements of first array : ";
    for(int i=0;i<n1;i++){
        cin>>one[i];
    }
    int n;
    cout<<"Enter size of n: ";
    cin>>n;
    int two[n];
    cout<<"Enter elements of second array : ";
    for(int i=0;i<n;i++){
        cin>>two[i];
    }
    int m = n1 + n;
    int merge[m];
    for(int i=0;i<n1;i++){
        merge[i] = one[i];
    }
    for(int i=0;i<n;i++){
        merge[n1+i] = two[i];
    }
    cout<<"Merged array : ";
    for(int i=0;i<m;i++){
        cout<<merge[i]<< "  ";
    }
    cout<<"\nMerged sorted array : ";
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
        if(merge[i]>merge[j]){
            int temp = merge[i];
            merge[i] = merge[j];
            merge[j] = temp;
        }
        }
    }
    for(int i=0;i<m;i++){
        cout<<merge[i]<<"  ";
    }
    return 0;
}
