// multiplication of 2 matrices
#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter the number of rows and columns of first matrix: ";
    cin>>n1>>n2;
    cout<<"Enter the number of rows and columns of second matrix: ";
    cin>>n2>>n3;
    int a[n1][n2],b[n2][n3],c[n1][n3];
    cout<<"Enter the elements of first matrix: ";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of second matrix: ";
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            c[i][j]=0;
            for(int k=0;k<n2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"The resultant matrix is: ";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}