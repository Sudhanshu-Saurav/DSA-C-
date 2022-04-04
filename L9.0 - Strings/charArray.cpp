#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    //char arr[] = {'a','b','c','d'}; //abcd-garbage
    //char arr[] = {'a','b','c','d','\0'}; //no garbage
    //char arr[] = "abcdef";
    
   // cout << arr << endl;
   // cout << strlen(arr) << endl; // no of actual characters
   // cout << sizeof(arr) << endl; // no of char's + last NULL


    // FAALTU LOGIC
    // char sentence[1000];
    // char temp = cin.get();
    // int len = 0;
    // while(temp!='#')
    // {
    //      sentence[len++] = temp;   
    //     //cout << temp << endl;
    //     temp = cin.get();
    // }
    // sentence[len] = '\0';
    // cout << sentence << endl; 




    //given a sentence, count the number of alphabhets digits and spaces in the sentences
    // char ch;
    // ch = cin.get();
    // int alpha = 0;
    // int digit = 0;
    // int space = 0;
    // while(ch!='\n')
    // {
    //     if(ch>='0' and ch<='9')
    //         digit++;
    //     else if ((ch>='a' and ch<='z') or (ch>='A' and ch<='Z'))
    //         alpha++;
    //     else
    //         space++;
    //     ch = cin.get();
    // }
    // cout << "alpha ->" << alpha << " " << "digit ->" << digit << " " << "space ->" << space << endl;

    //getline function
    char sentence[1000];
    cin.getline(sentence,1000, '\n');
    cout << sentence << endl;


}