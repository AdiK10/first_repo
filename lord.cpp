#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int size,j,prod,index;
    int arr[10];
    for(i=0;i<n;i++)
    {
        cin>>size;
        for(j=0;j<size;j++)
        {
            cin>>arr[j];
        }
        int min=10;
        for(j=0;j<size;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                index=j;
            }
        }
        arr[index]+=1;
        prod=1;
        for(j=0;j<size;j++)
        {
            prod*=arr[j];
        }
        cout<<prod<<endl;
    }
}