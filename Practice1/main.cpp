#include <iostream>
#include "Algorithm.h"

using namespace std;

int main()
{
    string input = "This is a string";
    Algorithm::replaceSpaces(input);
    cout <<input<<endl;
    
    input = "aabbbcdd";
    Algorithm::CompressString(input);
    cout<<input<<endl;
    
    return 0;
}