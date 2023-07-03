#ifndef GRAPH_H
#define GRAPH_H

#include <map>
#include <set>

class Graph
{
public:
    // Implement the opening constructor to later be implemeneted in the implementation graph.cpp
    Graph();

private:
    // create the variable that will be initialized from the implementation graph.cpp
    std::map<int, std::set<int>> *graph;
    int numOfCourses;
};

#endif