//Better or Brute force solution
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr1, int n, vector<int> &arr2)
{
    vector<int> temp = arr1;
    vector<int> temp1 = arr2;

    // Reverse arr1
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr1[start], arr1[end]);
        start++;
        end--;
    }

    // Reverse arr2
    start = 0, end = n - 1; // Reset start and end for arr2
    while (start < end)
    {
        swap(arr2[start], arr2[end]);
        start++;
        end--;
    }

    // Check if arr1 matches arr2's original state
    if (arr1 == temp1)
    {
        cout << "Arr1 is matched with arr2" << endl;
    }

    // Check if arr2 matches arr1's original state
    if (arr2 == temp)
    {
        cout << "Arr2 is matched with arr1" << endl;
    }
    else
    {
        cout << "Arr2 and Arr1 is not matched" << endl;
    }
}

int main()
{
    int n, element;
    cin >> n;

    vector<int> arr1, arr2;

    // Read elements for arr1
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        arr1.push_back(element);
    }

    // Read elements for arr2
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        arr2.push_back(element);
    }

    rotate(arr1, n, arr2);

    return 0;
}
/*


Optimal Solution


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate_and_compare(vector<int>&arr1,vector<int>&arr2,int n){
    vector<int>temp = arr1;
    vector<int>temp1 = arr2;
    reverse(arr1.begin(),arr.end());
    reverse(arr2.begin(),arr.end());

    if(arr1 == temp1 )
    {
       cout << "Arr1 is rotation of Arr2"<<endl;
    }
       else if(arr2 == temp)
       {
          cout <<"Arr2 is rotation of Arr1"<<endl;
       }
          else{
             cout <<"Arr1 and Arr2 both are not the rotations of each other "<<endl;
          }
}

int main()
{
   int n,element;
   cin >>n;
   vector <int>arr1(n),arr2(n);
   for(int i = 0;i<n;i++)
   {
       ain >>arr1[i]
   }
   for(int i = 0;i<n;i++)
   {
       cin >>arr2[i]
   }
       rotate_and_compare(arr1,arr2,n);
   return 0;
}
*/