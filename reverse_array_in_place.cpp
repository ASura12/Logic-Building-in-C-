#include<iostream>

using namespace std;

void swapArray(int arr[],int size)
{
    int start = 0 , end = size - 1;
    while(end > start)
    {
        swap(arr[start],arr[end]);
        start++;
        end -- ;
    }
}


int main(){
int n,i,j;
cin >>n;
int arr[n];
for(i = 0;i<n;i++)
{
    cin >> arr[i];
}
int size = n;
//j = n-1;
swapArray(arr,size);
for(i = 0;i<n;i++)
{
    cout <<arr[i] <<" ";
}
return 0;
}