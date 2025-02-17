#include<iostream>

using namespace std;
int main(){
int n;
cout<<"Enter the number of line : ";
cin >> n;
for(int i = 1;i<n;i++) //For upper priamid triangle
{
    for(int j = i;j<= n;j++)  // Decreasing triangle
    {
        cout <<" ";
    }
    for(int k = 1;k<i;k++) // Increasing Triangle
    {
        cout << "*";
    }
    for(int k = 1;k<=i;k++) // Increasing Triangle
    {
        cout <<"*";
    }
    cout<<endl;
}
for(int i = 1;i<= n;i++) // For lower pyramid triangle
{
    for(int k = 1;k<=i;k++)  // Inreasing triangle
    {
        cout <<" ";
    }
    for(int j = i;j<n;j++)  // Decreasing triangle
    {
        cout <<"*";
    }
    for(int j = i;j<= n;j++)  // Decreasing triangle
    {
        cout <<"*";
    }
    cout <<endl;
}
return 0;
}
