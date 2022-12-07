#include <stdio.h>
#include <stdlib.h>

typedef struct ArcNode
{
    int adjvex;
    int data;
    struct ArcNode *nextarc;
}ArcNode;

typedef struct VNode
{
    int info;
    struct ArcNode *firstarc;
}VNode;

typedef struct AGraph
{
    int n,e;
    struct VNode adjlist[5];
}Agraph;