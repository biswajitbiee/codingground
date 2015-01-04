#include <iostream>
#include <iomanip>

using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class BST
{
    public:
    BST();
    ~BST();
    
    void Insert(int data);
    void PrintBST();
    
    private:
    Node* InsertData(Node* node, int data);
    void InTravarse(Node* node);
    
    Node* getNode(int data);
    
    private:
    Node* root;
};