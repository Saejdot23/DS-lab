#include <iostream>
using namespace std;

void display(int* a,int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}
int sumrow(int a[][3],int row,int col){
    int sum=0;
    for(int i=0;i<col;i++){
        sum+=a[row][i];
    }
    return sum;
}
int sumcol(int a[][3],int col,int row){
    int sum=0;
    for(int i=0;i<row;i++){
        sum+=a[i][col];
    }
    return sum;
}


int main(){
    int arr[5]={1,5,8,32,9};
    display(arr,5);
    for(int i =4;i>=0;i--){
       cout<<arr[i]<<"\t";
    }
    cout<<endl;
    int matrix[2][2]={{1,2},{3,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<matrix[j][i]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    int mat[3][3]= {{1,2,3},{6,9,3},{4,2,3}};
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    int inst=0;
    do{
            cout<<"\ndo you want row sum or column sum ?\n"<<"1-ROW\n2-COLUMN\n3-EXIT\n";
    cin>>inst;
    switch(inst){
        case 1:
        int rowno;
        cout<<"\nWhich row's sum do you want :";
        cin>>rowno;
        cout<<endl<<sumrow(mat,rowno,3);
        cout<<endl;
        break;
        case 2:
        int colno;
        cout<<"Which column's sum do you want :";
        cin>>colno;
        cout<<endl<<sumcol(mat,colno,3);
        cout<<endl;
        break;
        case 3:
        cout<<"Youve exited the program\n";
        break;
    }}while(inst!=3);
    }
    
