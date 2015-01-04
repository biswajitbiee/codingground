#include <iostream>
#include <iomanip>
#include "BST.h"

using namespace std;

BST::BST()
{
    root = NULL;
}

BST::~BST()
{
    
}

void BST::Insert(int data)
{
    root = InsertData(root, data);
}

void BST::PrintBST()
{
    InTravarse(root);
    cout<<endl;
}

Node* BST::InsertData(Node* node, int data)
{
    if(node == NULL)
    {
        return getNode(data);
    }
    else if(data <= node->data)
    {
        node->left = InsertData(node->left, data);
    }
    else
    {
        node->right = InsertData(node->right, data);
    }
    
    return node;
}

void BST::InTravarse(Node* node)
{
    if(node == NULL)
    {
        return;
    }
    InTravarse(node->left);
    cout<<setw(5)<<node->data;
    InTravarse(node->right);
}

Node* BST::getNode(int data)
{
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}