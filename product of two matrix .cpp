//product of two matrix of 3*2 and 2*6 order

/* 21/9/23 we know that our ans is in order 3*6 and we have to take
another variable exept for row or column and that is k and its value 
should be 2 because we know that in question arre question dekho 
smagh aa jayega. Have a good day Google coder . keep practicing .*/

#include<iostream>
using namespace std;

int main(){
    
    int first[3][2], second[2][6],i,j;
    cout<<"Enter elements of first matrix or order 3*2 : "<<endl;
    for( i=0;i<3;i++){
        for( j=0;j<2;j++){
            cin>>first[i][j];
        }
    }
    cout<<endl;
     cout<<"Enter elements of second matrix or order 2*6 : "<<endl;
    for( i=0;i<2;i++){
        for( j=0;j<6;j++){
            cin>>second[i][j];
        }
    }
    cout<<endl;
     cout<<" elements of first matrix or order 3*2 : "<<endl;
    for( i=0;i<3;i++){
        for( j=0;j<2;j++){
            cout<<first[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
     cout<<" elements of second matrix or order 2*6 : "<<endl;
    for( i=0;i<2;i++){
        for( j=0;j<6;j++){
            cout<<second[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    //calculation 
    int product[3][6];
    for(i=0;i<3;i++){
        product[i][j]=0;
        for(j=0;j<6;j++){
            for(int k=0;k<2;k++){
                product[i][j] = product[i][j] + first[i][k] * second[k][j];
            }
        }
    }
    cout<<endl;
    cout<<"Product of above matrices is : "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            cout<<product[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
