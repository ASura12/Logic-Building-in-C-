#include<iostream>

using namespace std;
int main(){
int n,i,j,b;
cout <<"Enter the number of lines : ";
cin >>n;
for(i = 1;i<=n;i++) // Rows
{
    for(b = n-i;b > 0;b--) // For handling spaces on right side
    {
        cout <<" ";
    }
    for(j = 1;j<=i;j++) // For writting star ("* ") and managing middle & right space
    {
        cout <<"* ";

    }
    cout<<endl;
}
return 0;
}
