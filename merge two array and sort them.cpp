//merge two array and sort them

#include<iostream>
using namespace std;

void sorted(int a[] , int n ){              //sorting two merged array 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    
    int n1,j;
    cout<<"Enter size of 1st array : "<<endl;
    cin>>n1;
    int a1[n1];
    cout<<"Enter elements of 1st array : "<<endl;
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    
    int n2;
    cout<<"Enter size of 2nd array : "<<endl;
    cin>>n2;
    int a2[n2];
     cout<<"Enter elements of 1st array : "<<endl;
    for(int j=0;j<n2;j++){
        cin>>a2[j];
    }
    int n = n1 + n2 ;
    
    int a[n];                        //third array 
    for(int i=0;i<n1;i++){
        a[i]=a1[i];               //storing first array elements 
    }
    for(int i=n1;i<n;i++){
        a[i]=a2[j];      //storing second array elements 
        j++;
    }
    cout<<"Merged array: "<<endl; 
    for(int i=0;i<n;i++){ 
        cout<<a[i]<<" ";       //printing merged array 
    }
    cout<<endl;
   sorted(a,n);                  //making function for sorting merged array 
    cout<<"Sorted array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<< " ";
    }
    cout<<endl;
    cout<<"Largest element : "<<a[n-1]<<endl; //printing largest element 
    cout<<"smallest element  :"<<a[0]<<endl;  //printing smallest element 
    
    return 0;
}

