#include<iostream>
#include<string>
using namespace std;
string compressString(const string& str) {
    string compressed;
    int count = 1;
    
    for (size_t i = 0; i < str.length(); ++i) {
        if (i + 1 < str.length() && str[i] == str[i + 1]) {
            count++;
        } else {
            compressed += str[i];
            compressed += to_string(count);
            count = 1;
        }
    }
    
    return (compressed.length() < str.length()) ? compressed : str;
}
int main(){
    string str;
    cout << "Enter the string : ";
    cin >> str;
 
    string compressed = compressString(str);
    cout << "Compressed String: " << compressed << endl;
    return 0;
}