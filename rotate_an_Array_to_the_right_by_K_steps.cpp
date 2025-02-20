#include<iostream>
#include<vector>
using namespace std;

void find_element(vector<int>arr,int k)
{
    vector<int>nums(arr.size());
    for(int i = 0;i<nums.size();i++)
    {
        nums[(i + k) % nums.size()] = arr[i];
    }
    //arr = nums;
    for(int i = 0;i<arr.size();i++)
    {
        cout << nums[i]<<" ";
    }
}
int main()
{
    int n,k,element;
    cin >> n >> k;
    vector<int>arr;
    for(int i = 0;i<n;i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    find_element(arr,k);
    return 0;
}
