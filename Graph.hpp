// Id: 315284554 ,Email : gilada8892@gmail.com

#ifndef GRAPH_HPP
#define GRAPH_HPP
#include <vector>

namespace ariel{
    class Graph {
        private:
        std::vector<std::vector<int>> graphMatrix;
        int verticesCount;
        int edgesCount;
        bool isDirected;
        bool isWeighted;

        public:
        Graph();
        void loadGraph(std::vector<std::vector<int>> &graph);
        void printGraph();
        int getNumVertices();
        bool getIsDirected();
        bool getIsWeighted();
        std::vector<std::vector<int>> getMatrix();

    };
}
#endif