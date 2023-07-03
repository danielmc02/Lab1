#ifndef GRAPH_H
#define GRAPH_H

#include <map>
#include <set>
#include <string>

const std::string COURSE_PREFIX = "CS A";


class Graph
{
public:
    // Implement the opening constructor to later be implemeneted in the implementation graph.cpp
    Graph();
    // Void since not returning and const reference for reading only purposes
    void createGraph(const std::vector<std::vector<int> > &courses);
    void printAllCourses() const;
    friend std::ostream &operator<<(std::ostream &os, const Graph &graph); // Declaration of friend function
    void printPrerequisites(int course) const;
    bool isEmpty() const;


private:
    // create the variable that will be initialized from the implementation graph.cpp
    std::map<int, std::set<int> > *graph;
    int numOfCourses;
};

#endif