#include<iostream>
#include<vector>
using namespace std;
int secondlargest(vector<int>arr,int n)
{
    int largest = arr[0];
    int slargest = INT32_MIN;
    for(int i = 1;i<n;i++)
    {
        if(arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}
int main(){
int n,m;
cin >> n;
vector<int>arr;
int element;
for(int i = 0;i<n;i++)
{
    cin >>element;
    arr.push_back(element);
}
m =secondlargest(arr,n);
cout <<"Second Largest element = "<<m;
return 0;
}