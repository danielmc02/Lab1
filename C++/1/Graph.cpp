#include "Graph.h"
#include <iostream>
#include <string.h>
using namespace std;

Graph::Graph()
{
    graph = new std::map<int, std::set<int> >();
    numOfCourses = 0;
};

int main()
{
    cout << "If this compiles, it should work properly" << endl;
}