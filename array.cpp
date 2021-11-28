#include<iostream>
using namespace std;
int main()
{
    int A[5],i;
    int *ptr = &A[0];
    cout<<"enter the numbers:";
    for( i = 0;i<5;i++){
      cin>>A[i];
    }
    for(i = 0;i <5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    return 0;
}