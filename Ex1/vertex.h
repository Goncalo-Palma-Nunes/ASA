#include "Key.h"
//#include <list>
#include <vector>

#ifndef VERTEX_H
#define VERTEX_H

class Vertex {
    private:
        Key _key;
        std::vector<Vertex> adj;
        int incomingEdges;
        int outgoingEdges;
    public:
        Vertex(Key k);
        Key getKey();
        void setKey(Key k);
        void addAdj(Vertex v);
        void removeAdj(Vertex v);
        int adjSize();
        std::vector<Vertex> getAdjacencies();
        bool operator==(Vertex vertex);
        int getIncomingEdges();
        int getOutgoingEdges();
        void incrementIncomingEdges();
        void incrementOutgoingEdges();
        void decrementIncomingEdges();
        void decrementOutgoingEdges();
};


#endif
