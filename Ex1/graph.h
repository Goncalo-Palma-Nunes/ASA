#include "Vertex.h"
#include "Key.h"
#include <vector>

#ifndef GRAPH_H
#define GRAPH_H

class Graph {
    private:
        std::vector<Vertex> vertexes;
    public:
        Graph();
        void addVertex(Key k);
        //void addOutgoingEdge(Key u, Key v);
        //void removeVertex(Key k);
        //Vertex findVertex(Key k);
        Vertex* findVertex(Key k);
        std::vector<Vertex> getVertexes();
        int numberCommonNeiborghs(Vertex *u, Vertex *v);
};

#endif
