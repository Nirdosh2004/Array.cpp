//quick sort algorithm 

#include<iostream>
using namespace std;

int partition(int arr[] , int s , int e){
    int pivot = arr[s];
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex =  s+count;
    swap(arr[pivotIndex] , arr[s]);
    
    int i=s , j= e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j++;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++] , arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[] , int s , int e){
    //base case
    if(s>=e)
    return ;
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){
    
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"\nEnter elements of array : \n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    quickSort(arr,0,n-1);
    cout<<"Sorted array : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }cout<<endl;
    
    
    
    return 0;
}
