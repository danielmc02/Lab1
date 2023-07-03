#include "Graph.h"
#include <iostream>
#include <string>
using namespace std;


//Not returning, courses only allows reading purposes
void Graph::createGraph(const vector<vector<int> >& courses )
{   
    /*For each type (automatic to save time on type def) in "courses" type vector<vector>
    Uses ':' because it's a "range-based". Similar to languages like rust or JS
    */
    for (const vector<int>& info : courses) {
        //First course number
        int course = info[0];
        //Init empty set of type int to represent the pre-reqs
        std::set<int> preReqs;
        //A range for loop to interate through each element via size and not index
        for (size_t i = 1; i < info.size(); i++) {
            /*
            The first time this runs, it will be an 'empty' initialized map
            Therefore this loop is inserting every instance inside the parent vector
            It insid
            
            */
            preReqs.insert(info[i]);
        }
        //If we are de-refrencing the pointer and going to access it, wrap it in parethesis
        (*graph)[course] = preReqs;
    }
    /*
    Basically, for every vector inside the parent parameter... each index will take a child vector
    and iterate over it. We assign 'course' the first child (index 0) to it in order to establish the course number.
    We then iterate further over (starting at the second child via index 1) and assign the children into a set.
    We then refrence back to the original course number found at index 0 and add the pre-reqs via private class value
    */
};

Graph::Graph()
{
    graph = new std::map<int, std::set<int> >();
    numOfCourses = 0;
};


int main()
{
    cout << "If this compiles, it should work properly" << endl;
}