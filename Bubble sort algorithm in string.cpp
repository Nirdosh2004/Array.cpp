//APPLY BUBBLE SORT IN STRING 

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter input : ";
    cin>>s;
    int n = s.length();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j]>s[j+1]){
                int temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    cout<<"Sorted string : "<<s;
    
    
    
    return 0;
}
