#include <iostream>
using namespace std;
/*int Bubblesort(int* A, int n){
    for(int i=0;i<n-1;i++){
        int flag = true ;
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                flag =false ;
                int temp=0;
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
            if(flag!= false)
            break;
        }
    }
}*/
int display(int* a,int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}
int main(){
    int* array = nullptr;
    int size=0;
    cout<<"Enter the size of array you want to create : ";
    cin>>size;
    array= new int[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>array[i];
        cout<<endl;
    }
    int record[size];
    int rec=0;
    int index;
    for(int i=0;i<size-1;i++){
       for(int j=i+1;j<size;j++){
        int flag = false ;
        if(array[i]==array[j]){
        flag = true ;
        record[rec]=array[i];
        index=j;//important
        
        rec++;
        }
        if(flag!=false){
        for(int loop=index;loop<size-1;loop++){
          array[loop]=array[loop+1];
        }
        size--;
        j--;//important
        }
        
       }
    }
    display(array,size);
    delete[] array;//important
    array = nullptr;
}