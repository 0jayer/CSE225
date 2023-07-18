#include <iostream>
#include "graphtype.h"
#include "heaptype.cpp"
using namespace std;

int main()
{
    GraphType<char>g(8);
    for(int i=0;i<8;i++)
    {
        char c;
        cin>>c;
        g.AddVertex(c);
    }
    g.AddEdge('A','B',1);
    g.AddEdge('B','A',1);
    g.AddEdge('A','C',1);
    g.AddEdge('A','D',1);
    g.AddEdge('D','A',1);
    g.AddEdge('D','E',1);
    g.AddEdge('D','G',1);
    g.AddEdge('G','F',1);
    g.AddEdge('F','H',1);
    g.AddEdge('H','E',1);

    int res = g.OutDegree('D');
    cout<<res<<endl;
    if(g.FoundEdge('A','D'))
        cout<<"There is an edge."<<endl;
    else
        cout<<"There is no edge.\n";

    if(g.FoundEdge('B','D'))
        cout<<"There is an edge."<<endl;
    else
        cout<<"There is no edge.\n";
    g.DepthFirstSearch('B','E');
    g.DepthFirstSearch('E','B');
    g.BreadthFirstSearch('B','E');
    g.BreadthFirstSearch('E','B');
    g.BreadthFirstSearchlen('B','E');

}

//  A B C D E F G H
