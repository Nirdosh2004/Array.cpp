//Binary search in array 


/* 20/9/23  binary search in only possible when array is sorted means either array is in  ascending or descending order */


#include<iostream>
using namespace std;

int search(int binary[] , int length , int key ){          //making fn for binary search
    int start = 0;                                         //declaring initial index  of array as start
    int end = length - 1;                                  //declaring last index of array as end
    int mid = start + ( end - start )/2;                   //declaring middle index of array as mid
    
    while( start <= end ){                                //using loop
        if( binary[mid]== key){
            return mid;                                  
        }
        else if(binary[mid]<key){                        
            start = mid + 1 ;
        }
        else{
            end = mid - 1 ;
        }
        mid =  start + ( end - start )/2;
    }
    return -1;                                     //if key is not present
}

int main(){
    
    int length;
    cout<<"Enter size or lenght of array : "<<endl;     //taking length of array 
    cin>>length;
    
    int binary[length],i;
    cout<<"Enter elements of array in ascending order : "<<endl;    //taking elements of array
    for(i=0;i<length;i++){
        cin>>binary[i];
    }
    cout<<endl;
    cout<<" elements of array in ascending order : "<<endl;    //printing array in array format
    for(i=0;i<length;i++){
        cout<<binary[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"Enter key or element that you want to search : "<<endl;     //taking key for binary search
    cin>>key;
    
    int ans = search(binary,length,key);                               //calling function that we make for binary search
        cout<<" Your key is at index : "<<ans<<endl;                   //printing index of key 
    return 0;
}
