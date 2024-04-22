//linear search in array 

/* 20/9/23  linear search means jisme koi element search krna hai one by
one ek loop chla ke bhot simple hai using bool data type */

#include<iostream>
using namespace std;

bool search( int linear[] , int lenght , int key) {
    for(int i=0;i<lenght;i++){
        if(linear[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    
    int lenght;
    cout<<"Enter lenght of array : "<<endl;
    cin>>lenght;
    
    int linear[lenght],i;
    cout<<"Enter elements of array : "<<endl;
    for(i=0;i<lenght;i++){
        cin>>linear[i];
    }
    cout<<endl;
    cout<<" elements of array : "<<endl;
    for(i=0;i<lenght;i++){
        cout<<linear[i]<<" ";
    }
    cout<<endl;
    
    int key;
    cout<<"Enter element that you want to search : "<<endl;
    cin>>key;
    
    int ans = search(linear,lenght,key);
    if(ans){
        cout<<"Key is present " <<endl;
    }
    else{
        cout<<"Key is absent "<<endl;
    }
    
    return 0;
}
