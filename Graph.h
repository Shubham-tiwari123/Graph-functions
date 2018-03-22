#ifndef GRAPH_H
#define GRAPH_H

class Graph{
private:
    struct node{
        int data;
        node *next;
    };
    node *newnode, *temp ,*newnode1;
    int num,v,source,dest,e,i;
    node *A[10];
public:
    void undirectedGraph();
    void directedGraph();
    void displayGraph();
};

#endif /* GRAPH_H */

