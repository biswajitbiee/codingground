#include <iostream>
#include <vector>

using namespace std;

class Graph
{
    private:
        int v_;
        vector<vector<int>> adj_;
        
    public:
        Graph(int v);
        void addEdge(int v, int w);
        vector<int> getAdjList(int v);
        
        void printGraph();
};