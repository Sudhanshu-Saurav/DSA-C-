#include<bits/stdc++.h>
using namespace std;

/*  Run length encoding for string compression
    if compressed string is bigger than the original, then return original string
    Input - aaabbcccdee
    output - a3b2c3d1e2

    input - abcd
    output - abcd
*/

string compressString(string str)
{
    int n = str.length();
    int count = 1;

    string result;
    for(int i = 0; i<n ; i++)
    {
        int count = 1;
        while(i<n-1 and str[i+1] == str[i])
        {
            count++;
            i++;
        }
        result += str[i];
        result += to_string(count);
    }
    if(result.length()>str.length())
    {
        return str;
    }
    return result;
}

int main()
{
    string s1 = "aaabbcccdee";
    cout << compressString(s1) << endl;

    string s2 = "abcd";
    cout << compressString(s2) << endl;

    return 0;
}