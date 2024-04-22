//diagonal sum in an array  ;

#include<iostream>
using namespace std;

int main(){
    
    int matrix[3][3];
    cout<<"Enter elements of matrix : "<<endl;
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
     cout<<" elements of matrix in matrix format : "<<endl;
   
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    int sum = 0;
    for(i=0;i<3;i++){
        
        for(j=0;j<3;j++){
            if(i==j){
                sum = sum +  matrix[i][j];
            }
        }
    }
    cout<<"Diagonal sum : "<<endl;
    cout<<sum;
    return 0;
}

