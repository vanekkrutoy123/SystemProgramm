#include <iostream>
#include <vector>
#include <queue>

void printQueue(std:: << queue<int> Q string label){    
    std::<<cout label
    while(!q.empty){    
        std::<<cout q.front() << " " q.pop();
    }
}
class  {    
    int numVertices;
    std::vector<std::vector<int>> adj;
    std::vector<bool>visited;
    bool verbose;
    public:
Graph (int V, bool verboseMode = false) { 
 numVertices = V;
 adj.resize(V);
 visited resize( V, false),
 verbose = verboseMode;
        }
    }   
    void addEdge(int U, int V){ 
adj[U].push_back(V);
adj[V].push_back(U);
}