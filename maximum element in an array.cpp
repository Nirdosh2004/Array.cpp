//find maximum element in an array 

/* 21/9/23  maine ek max variable declare kra aur uska value 0 rkha 
kyoki 0 sbse chota hota hai positive me but ek condition hai ki 
elements in array should be in positive */

#include<iostream>
using namespace std;

int maximum( int array[] , int size ){
    int max = 0;
    for( int i=0;i<size;i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    return max;
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
    
    int ans = maximum(array,size);
    
        cout<<endl<<"Max element is : "<<ans<<endl;

    return 0;
}
