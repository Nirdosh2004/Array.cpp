// find repeated or dublicate number in array

/* 22/9/23 we have to take two variable i,j for searching because
we have to campare elements that thay are equal or not j=i+1 se start krenge 
nhi to ek hi element ko wo repeated bta dega */

#include<iostream>
using namespace std;

int main(){
    
    int size;
    cout<<"Enter size of array : "<<endl;
    cin>>size;
    
    int repeated[size],i,j;
    cout<<"Enter elements of array  : "<<endl;
    for(i=0;i<size;i++){
        cin>>repeated[i];
    }
      cout<<endl;
    cout<<endl;
    cout<<" elements of array  : "<<endl;
    for(i=0;i<size;i++){
        cout<<repeated[i]<<"  ";
    }
    cout<<endl;
      cout<<endl;
    //logic
    
    cout<<"Repeated element  in array is :  "<<endl;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(repeated[i]==repeated[j]){
                cout<<repeated[j]<<"  ";
            }
        }
    }
    return 0;
}
