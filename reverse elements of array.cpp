//reverse elements of array 

/* 22/9/23  we have to create two functions for reversing and printing reverse in reverse fn 
we declare two variable start and end for swapping and using while loop start++ and end--*/

#include<iostream>
using namespace std;

void printreverse(int hello[] , int length ){
    for(int i=0;i<length;i++){
        cout<<hello[i]<<"  ";
    }
}

void reverse( int hello [] , int length  ){
    int start = 0;
    int end = length - 1;
    while(start<=end){
        swap(hello[start],hello[end]);
        start++;
        end--;
    }
}

int main(){
    
    int length;
    cout<<"Enter length of array : "<<endl;
    cin>>length;
    
    int hello[length],i;
    cout<<"Enter elements of array : "<<endl;
    for(i=0;i<length;i++){
        cin>>hello[i];
    }
    cout<<endl;
     cout<<" elements of array : "<<endl;
    for(i=0;i<length;i++){
        cout<<hello[i]<<"  ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"elements in reverse : "<<endl;
    reverse(hello,length);
    printreverse(hello,length);
    return 0;
}
