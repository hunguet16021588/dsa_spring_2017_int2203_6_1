#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int a[10][10],i,j,n,k,max;
    cout<<"Nhap cap cua ma tran: ";
    cin>>n;
    for(i=0;i<n;i++){
	    k=rand()%(n+1);                    //Tao ma tran de kiem tra
        for(j=0;j<k;j++) a[i][j]=1;
        for(j=k;j<n;j++) a[i][j]=0;
    }
    cout<<"\nMa tran vua tao:\n";                     //In ma tran
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) cout<<a[i][j]<<"  ";
        cout<<"\n\n";
    }
    i=0;j=0;
    while(1){
             if(a[i][j]==0) i++;
              else {
                   j++;
                   max=i;
              }
             if(i==n-1||j==n-1) break;
    }
    cout<<"\nHang chua nhieu so 1 nhat la hang thu:"<<max+1;
    cin.ignore();
    cin.get();
}
