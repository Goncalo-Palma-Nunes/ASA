#include "Graph.h"
#include <algorithm>
#include <iostream>

Graph::Graph() {
    //Do nothing
}

void Graph::addVertex(Key k) {  //Falta dar update das listas de adjacências
    Vertex vertex = Vertex(k);
    vertexes.push_back(vertex);
}

std::vector<Vertex> Graph::getVertexes() {
    return vertexes;
}

Vertex* Graph::findVertex(Key k) {

    int size = vertexes.size();
    for (int i = 0; i < size; i++) {
        Vertex *v = &vertexes.at(i);
        if (v->getKey().equals(k)) {
            return v;
        }
    }

    return nullptr;
}

/*void Graph::addOutgoingEdge(Key u, Key v) {

    int size = vertexes.size();
    for (int i = 0; i < size; i++) {
        Vertex vertex = vertexes.at(i);
        if (vertex.getKey().equals(u)) {
            vertexes.at(i).incrementOutgoingEdges();
        }
        else if (vertex.getKey().equals(v)) {
            vertexes.at(i).incrementOutgoingEdges();
        }
    }
}*/

int Graph::numberCommonNeiborghs(Vertex *u, Vertex *v) {
    int result = 0;
    for (int i = 0; i < u->adjSize(); i++) {
        Vertex vertex1 = u->getAdjacencies().at(i);

        for (int j = 0; j < v->adjSize(); j++) {
            Vertex vertex2 = v->getAdjacencies().at(j);
            if (vertex1 == vertex2) {
                //std::cout << "O vertice " << vertex1.getKey().getValue() << " é igual ao vértice " << vertex2.getKey().getValue() << "\n";
                result++;
            }
        }
    }
    return result;
}
