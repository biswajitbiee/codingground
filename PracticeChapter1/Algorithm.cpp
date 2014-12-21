#include <iostream>
#include "Algorithm.h"

using namespace std;

void replaceSpaces(string& input)
{
    int len = input.length();
    int spaceCnt = 0;
    for(int i = 0; i<len; i++)
    {
        if(input[i] == ' ')
        {
            spaceCnt++;
        }
    }
    
    int newLen = len + spaceCnt*2;
    input.resize(newLen);
    input[newLen] = '\0';
    for(int i = len - 1; i>=0; i--)
    {
        if(input[i] == ' ')
        {
            input[newLen - 1] = '0';
            input[newLen - 2] = '2';
            input[newLen - 3] = '%';
            newLen = newLen - 3;
        }
        else
        {
            input[newLen - 1] = input[i];
            newLen = newLen - 1;
        }
    }
}