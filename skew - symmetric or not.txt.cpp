//skew - symmetric or not

#include<iostream>
using namespace std;

int main(){
    
    int row,col;
    cout<<"Enter row and column of matrix : "<<endl;
    cin>>row>>col;
    
    int array[row][col],i,j;
    cout<<"Enter elements of matrix : "<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>array[i][j];
        }
    }
    cout<<endl;
    cout<<" elements in matrix format : "<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<array[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    int transpose[col][row];
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            transpose[i][j] = array[j][i];
        }
    }
    cout<<"Transpose of above matrix  : "<<endl;
      for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            cout<<transpose[i][j] <<"  ";
        }
        cout<<endl;
    }
    int f=0;
     for(i=0;i<col;i++){
        for(j=0;j<row;j++){
          if( transpose[i][j] != -array[i][j]){
                    f=1;
                    break;
          }
        }
    }
    cout<<endl;
     if(f==0){
        cout<<" skew - Symmetric"<<endl;
    }
    else{
        cout<<"Not skew - symmetric "<<endl;
    }
    return 0;
}
