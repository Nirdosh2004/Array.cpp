//sorting array 

#include<iostream>
using namespace std;

int main(){
    
   int size;
   cout<<"Enter size of array : "<<endl;
   cin>>size;
   
   int array[size];
   cout<<"Enter elements of array  :"<<endl;
   for(int i=0;i<size;i++){
       cin>>array[i];
   }
   
   for(int i=0;i<size;i++){
       for(int j=i+1;j<size;j++){
           if(array[j]<array[i]){
               int temp = array[j];
               array[j] = array[i];
               array[i] = temp;
           }
       }
       
   }
   cout<<"Sorted array in ascending order : "<<endl;
   for(int i=0;i<size;i++){
       cout<<array[i]<< " ";
   }
    cout<<endl<<"Sorted array in descending order : "<<endl;
   for(int i=size;i>=0;i--){
       cout<<array[i]<< " ";
   }
    
    return 0;
}
