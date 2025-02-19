#include<iostream>

using namespace std;
int find_maxi(int arr[],int n)
{
    int max = INT32_MIN;
    for(int i = 0;i<n;i++)
    {
        if(max <= arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int find_mini(int arr[],int n)
{
    int min = INT32_MAX;
    for(int i = 0;i<n;i++)
    {
        if(min >= arr[i])
        {
            min = arr[i];
        }
    }
    return min;

}
int main(){
int n;
cin >> n;
int arr[n];
for(int i = 0;i<n;i++)
{
    cin >> arr[i];
}
cout << "The maximum element in an array is : "<<find_maxi(arr,n)<<endl;
cout << "The minimum element in an array is : "<<find_mini(arr,n)<<endl;
return 0;
}