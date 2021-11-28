#include <iostream>
#include <stdio.h>
#include <new>
#include "Graph.h"

int main() {

    int N, M;
    int *h1, *h2;
    char c; //To ignore the comma in the input
    Graph g = Graph();

    /* Read first half of input */
    std::cin >> N >> c >> M;

    /* Allocate memory for histograms */
    h1 = (int *) ::operator new (sizeof(int) * N);
    h2 = (int *) ::operator new (sizeof(int) * N);


    /* Initialize Graph */
    for (int i = 0; i < N; i++) {
        Key k = Key(i + 1);
        g.addVertex(k);
    }

    /* Read Second half of input */
    for (int i = 0; i < M; i++) {
        int u, v;

        std::cin >> u;
        std::cin >> v;
        Vertex *vertex1 = g.findVertex(Key(u));
        Vertex *vertex2 = g.findVertex(Key(v));
        vertex1->addAdj(*vertex2);
        vertex1->incrementOutgoingEdges();
        vertex2->incrementIncomingEdges();  
    }

    /* Populate first histogram */
    for (int i = 0; i < N; i++) { /* i < N because there are N vertexes */
        int numberFriends = g.getVertexes().at(i).adjSize();
        h1[numberFriends] += 1;
    }

    /* Output first histogram */
    std::cout << "Output A\n";
    std::cout << "Histograma 1\n";
    for (int i = 0; i < N; i++) {
        std::cout << h1[i] << "\n"; 
    }

    /* Populate second histogram */
    for (int i = 0; i < N; i++) {
        int numberConnections = g.getVertexes().at(i).getIncomingEdges();
        h2[numberConnections] += 1;
    }

    /* Output second histogram */
    std::cout << "Histograma 2\n";
    for (int i = 0; i < N; i++) {
        std::cout << h2[i] << "\n";
    }

    /* Second output type (Matrix) */
    std::cout << "Output B\n";
    for (int i = 0; i < N; i++) {
        Vertex *vertex1 = g.findVertex(Key(i + 1));
        for (int j = 0; j < N; j++) {
            Vertex *vertex2 = g.findVertex(Key(j + 1));
            std::cout << g.numberCommonNeiborghs(vertex1, vertex2) << " ";
        }
        std::cout << "\n";
    }

  
    return 0;
}
