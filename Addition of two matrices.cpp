//Addition of two matrices

#include<iostream>
using namespace std;

int main(){
    
    int one[3][3], two[3][3],sum[3][3],i,j;             //declaring all variables
    cout<<"Enter elements of first matrix : "<<endl;   //taking input of first matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>one[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter elements of second matrix : "<<endl;  //taking input of second matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>two[i][j];
        }
    }
    cout<<endl;
    cout<<" first matrix : "<<endl;                   //printing first matirix in output in matrix format
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<one[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"second matrix : "<<endl;                  //printing second matrix in output in matrix format
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<two[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=one[i][j]+two[i][j];            //formala of adding matrices
        }
    }
    cout<<"Sum of both matrices is : \n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<sum[i][j]<<" ";                     //printing sum in output in matrices format
        }
        cout<<endl;
    }
    return 0;
}
