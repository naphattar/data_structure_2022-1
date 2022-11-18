#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        // Your code here
        nodes = 3;
        for(int i = 0;i<3;i++){
            vector<int> adj;
            edges.push_back(adj);
        }
    }

    SparseGraph(int n_in) {
        // Your code here
        nodes = n_in;
        for(int i = 0;i<n_in;i++){
            vector<int> adj;
            edges.push_back(adj);
        }
    }

    SparseGraph(const SparseGraph& G) {
        // Your code here
        nodes = G.nodes;
        edges = G.edges;

    }

    void AddEdge(int a, int b) {
        // Your code here
        edges[a].push_back(b);
        
        
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        if(edges[a].size() == 0){
            return;
        }
        auto it = find(edges[a].begin(),edges[a].end(),b);
        if(it != edges[a].end()){
            edges[a].erase(it);
        }
        return;
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        if(edges[a].size() == 0){
            return false;
        }
        return (find(edges[a].begin(),edges[a].end(),b)!= edges[a].end());
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph g(*this);
        for(int i = 0;i<g.nodes;i++){
            g.edges[i].clear();
        }
        for(int i = 0;i<nodes;i++){
            for(int j = 0;j < edges[i].size();j++){
                g.edges[edges[i][j]].push_back(i);
            }
        }
        return g;
    }

protected:
    // Your code here
    int nodes;
    vector<vector<int>> edges;
};
#endif // __SPARSE_GRAPH_H__

