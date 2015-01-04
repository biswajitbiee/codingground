#include <iostream>
#include "BST.h"

using namespace std;

int main()
{
   int nums[] = {13, 8, 9, 5, 20, 15, 21};
   
   BST bst;
   for(int i = 0; i<7; i++)
   {
       bst.Insert(nums[i]);
   }
   
   bst.PrintBST();
   
   return 0;
}

