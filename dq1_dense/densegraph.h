#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
#include<algorithm>
#include<iterator>
#include<set>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        nodes = 3;
        
    }

    DenseGraph(int n_in) {
        // Your code here
        nodes = n_in;
        
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        this->nodes = G.nodes;
        this->edges = G.edges;
    }

    void AddEdge(int a, int b) {
        // Your code here
        edges.insert({a,b});
    
        
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        edges.erase({a,b});
        
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return (edges.find({a,b}) != edges.end() ? true : false);
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph g(*this);
        g.edges.clear();
        for(set<pair<int,int>>::iterator it = edges.begin(); it != edges.end();it++){
            const int a = (*it).first;
            const int b = (*it).second;
            g.edges.insert({b,a});
        }
        return g;
    }

protected:
    int nodes;
    set<pair<int,int>> edges;
    // Your code here
};
#endif // __DENSE_GRAPH_H__
