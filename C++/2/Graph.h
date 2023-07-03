#ifndef GRAPH_H
#define GRAPH_H

#include <map>
#include <set>


class Graph
{
public:
    const std::string COURSE_PREFIX = "CS A";  

    // Implement the opening constructor to later be implemeneted in the implementation graph.cpp
    Graph();
    // Void since not returning and const reference for reading only purposes
    void createGraph(const std::vector<std::vector<int>> &courses);
    void Graph::printAllCourses() const;

private:
    // create the variable that will be initialized from the implementation graph.cpp
    std::map<int, std::set<int>> *graph;
    int numOfCourses;
};

#endif