#include "Vertex.h"


Vertex::Vertex(Key k) {
    setKey(k);
    incomingEdges = 0;
    outgoingEdges = 0;
}

Key Vertex::getKey() {
    return _key;
}

void Vertex::setKey(Key k) {
    _key = k;
}

void Vertex::addAdj(Vertex v) { //Falta ver se ele já lá está
    adj.push_back(v);
}

int Vertex::adjSize() {
    return adj.size();
}

int Vertex::getIncomingEdges() {
    return incomingEdges;
}

int Vertex::getOutgoingEdges() {
    return outgoingEdges;
}

void Vertex::incrementIncomingEdges() {
    incomingEdges++;
}

void Vertex::incrementOutgoingEdges() {
    outgoingEdges++;
}

void Vertex::decrementIncomingEdges() {
    incomingEdges--;
}

void Vertex::decrementOutgoingEdges() {
    outgoingEdges--;
}

std::vector<Vertex> Vertex::getAdjacencies() {
    return adj;
}

bool Vertex::operator==(Vertex vertex) {
    return getKey() == vertex.getKey();
}
