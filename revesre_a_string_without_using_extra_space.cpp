#include<iostream>
#include<string>
using namespace std;

void reversestring(string &str)
{
    int start = 0;
    int end = str.length() - 1;
    while(start < end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    }
}

int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    cout <<endl;
    reversestring(str);
    cout << "After Reversing string : " << str <<endl;
    return 0;
}
