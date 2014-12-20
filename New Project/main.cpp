#include <iostream>
#include <string>

using namespace std;

bool IsUniqueCharString(string input)
{
    bool charStorage[256] = {false};
    for(int i=0; i<input.length(); i++)
    {
        if(charStorage[input[i]])
        {
            return false;
        }
        else
        {
            charStorage[input[i]] = true;
        }
    }
    
    return true;
}

int stringLen(char* str)
{
    int length = 0; 
    
    char* p = str;
    while(*p != '\0')
    {
        length++;
        p++;
    }   
    return length;
}

void reverse(char* str)
{
    int length = stringLen(str);
    
    for(int i=0, j=length-1; i < j; i++,j--)
    {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
}

int main()
{
   cout << "Hello is unique char : "<<IsUniqueCharString("Hello")<<endl;
   cout << "abcde;; is unique char : "<<IsUniqueCharString("abcde")<<endl;
   
   char tmpStr[] = "Hello\0";
   reverse(tmpStr);
   cout << "Reverse of Hello is : "<<tmpStr<<endl;
   
   return 0;
}

