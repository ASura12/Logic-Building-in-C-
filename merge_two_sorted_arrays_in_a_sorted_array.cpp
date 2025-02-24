#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>arr1,vector<int>arr2,int n)
{
    arr1.insert(arr1.end(),arr2.begin(),arr2.end());
    sort(arr1.begin(),arr1.end());
    for(int i = 0;i<n+n;i++)
    {
        cout <<arr1[i]<<" ";
    }
}

int main(){
int n;
cin>>n;
vector<int>arr1(n),arr2(n);
cout<<"Enter the element in a sorted order : "<<endl;
cout <<"Enter the sorted element for 1st array : "<<endl;
for(int i = 0;i<n;i++)
{
    cin>>arr1[i];
}
cout <<"Enter the sorted element for 2nd array : "<<endl;
for(int i = 0;i<n;i++)
{
    cin>>arr2[i];
}
merge(arr1,arr2,n);
return 0;
}