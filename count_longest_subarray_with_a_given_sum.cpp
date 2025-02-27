#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int subaaraysum(vector<int>arr,int k)
{
    int n = arr.size();
    int count = 0;
    vector<int>prefixSum(n,0);

    for(int i = 0;i<n;i++)
    {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    unordered_map<int, int>m;
    for(int j = 0;j<n;j++)
    {
        if(prefixSum[j] == k) count++;

        int val = prefixSum[j] - k;
        if(m.find(val)!= m.end())
        {
            count+=m[val];
        }

        if(m.find(prefixSum[j]) == m.end())
        {
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }
    return count;
}
int main(){
    int n,k;
    cout << "Enter number of elements: ";
    cin >> n;
    cout <<"Enter the value of sum : ";
    cin >>k;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"The count of the subarray present : "<<subaaraysum(arr,k);
return 0;
}