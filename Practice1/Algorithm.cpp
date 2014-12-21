#include <iostream>
#include "Algorithm.h"

using namespace std;

void Algorithm::replaceSpaces(string& input)
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

int Algorithm::CompressedLength(const string& input)
{
    int cLen = 0;
    int count = 1;
    char last = input[0];
    
    for(int i=1; i< input.length(); i++)
    {
        if(input[i] == last)
        {
            count++;
        }
        else
        {
            cLen += 1+to_string(count).length();
            count = 1;
            last = input[i];
        }
    }
    return (cLen + 1+to_string(count).length());
}

void Algorithm::CompressString(string& input)
{
   int cLen = Algorithm::CompressedLength(input);
   if(cLen > input.length())
   {
       return;
   }
   else
   {
       string tmp;
       tmp.resize(cLen);
       int count = 1;
       char last = input[0];
       for(int i = 1; i< input.length(); i++)
       {
           if(last == input[i])
           {
               count++;
           }
           else
           {
               tmp.push_back(last);
               tmp.append(to_string(count));
               count = 1;
               last = input[i];
           }
       }
       tmp.push_back(last);
       tmp.append(to_string(count));
       
       input.assign(tmp);
   }
}