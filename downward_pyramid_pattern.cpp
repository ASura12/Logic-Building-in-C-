#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the number of lines : ";
    cin >> n;
    for(int i = n; i >= 1;i--)  // Rows
    {
        for(int j = n-i;j > 0;j--) // Space
        {
            cout <<" ";
        }
        for(int k = i ; k > 0;k--)  // For writting star ("* ") and managing middle & right space
        {
            cout << "* ";
        }
        cout <<endl;
    }
    return 0;
}
