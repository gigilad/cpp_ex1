// Id: 315284554 ,Email : gilada8892@gmail.com

#include "Graph.hpp"
#include <iostream>
namespace ariel{
    Graph::Graph() : verticesCount(0),isDirected(false),isWeighted(false),edgesCount(0){}

    void Graph::loadGraph(std::vector<std::vector<int>> &graph){
        verticesCount=graph.size();
        int col = graph[0].size();
        if(col == verticesCount){
        graphMatrix=graph;
        edgesCount=0;
        for (size_t i = 0; i < verticesCount; i++){
            for (size_t j = 0; j < verticesCount; j++){
                if(graphMatrix[i][j]>=1){
                    ++edgesCount;
                }
                if(graphMatrix[i][j]!=graphMatrix[j][i]){
                    isDirected=true;
                }
                if(graphMatrix[i][j]>1){
                    isWeighted=true;
                }
            }
        }

        if(!isDirected){
            edgesCount/=2;
        }
        }else{
            throw std::invalid_argument("Invalid graph");
        }



    }
    void Graph::printGraph(){
        std::cout << "Graph with " << verticesCount << " vertices and " << edgesCount << " edges " << std::endl;
    }
    int Graph::getNumVertices(){
        return verticesCount;
    }
    bool Graph::getIsDirected(){
        return isDirected;
    }
    bool Graph::getIsWeighted(){
        return isWeighted;
    }
    std::vector<std::vector<int>> Graph::getMatrix(){
        return graphMatrix;
    }

};