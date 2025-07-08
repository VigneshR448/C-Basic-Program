#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;  //i/p-> size (10)
    cout<<"Enter "<<n<<" Elemnets: "; 
    int arr[n],i,j,k;
    for(i=0;i<n;i++)
 {                  //  0123456789
    cin>>arr[i];//i/p-> 9025598448
}
    for(i=0;i<n;i++) //->0<10  T
    {
        for(j=i+1;j<n;j++)
        if(arr[i]==arr[j])  // 9==0    F
        {
            for(k=j;k<n-1;k++){
            arr[k]=arr[k+1];
            }
            n--;  // above for loop eneterd means there will be deleting a Elemnet so nnned to reduce the size
        }
    }
    cout<<"Array after remove duplicate number in a array: ";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
