//find minimum element in an array 

/* 21/9/23  maine ek min variable declare kra aur uska value array[0] rkha 
 aur ek if condition chalayenge agar first index se bhi chota hogo kuch hoga
to min ke jgah store ho jayega and for loop will run again until it meets 
its conditions */

#include<iostream>
using namespace std;

int minimum( int array[] , int size ){
    int min = array[0];
    for( int i=0;i<size;i++){
        if(array[i]<min){
            min = array[i];
        }
    }
    return min;
}

int main(){
    
    int size;
    cout<<"Enter size of array : "<<endl;
    cin>>size;
    
    int array[size],i;
    cout<<"Enter elements of array : "<<endl;
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<endl;
    cout<<" elements of array : "<<endl;
    for(i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    int ans = minimum(array,size);
    
        cout<<endl<<"Minimum element is : "<<ans<<endl;

    return 0;
}
