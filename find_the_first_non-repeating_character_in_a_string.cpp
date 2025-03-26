#include <iostream>
#include <unordered_map>
using namespace std;
char firstnonrepeating(string &str)
{
    unordered_map<char, int> freq;
    for (char ch : str)
    {
        freq[ch]++;
    }
    for (char ch : str)
    {
        if (freq[ch] == 1)
        {
            return ch;
        }
    }
    return '\0';
}
int main()
{
    string str, s;
    cout << "Enter the string : ";
    cin >> str;
    int n = str.length();
    char result = firstnonrepeating(str);
    if (result != '\0')
    {
        cout << "The first non-repeating characte : " << result << endl;
    }
    else
    {
        cout << "The non-repeating character is found; " << endl;
    }

    return 0;
}