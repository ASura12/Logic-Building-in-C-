#include<iostream>

using namespace std;
int main(){
int n;
cout<<"Enter the number of line : ";
cin >> n;
for(int i = 1;i<= n;i++)
{
    for(int k = 1;k<=i;k++)
    {
        cout <<" ";
    }
    for(int j = i;j<n;j++)
    {
        cout <<"*";
    }
    for(int j = i;j<= n;j++)
    {
        cout <<"*";
    }
    cout <<endl;
}
for(int i = 1;i<=n;i++)
{
    for(int j = i;j<=n;j++)
    {
        cout <<" ";
    }
    for(int k = 1;k<i;k++)
    {
        cout << "*";
    }
    for(int k = 1;k<=i;k++)
    {
        cout <<"*";
    }
    cout<<endl;
}
return 0;
}
