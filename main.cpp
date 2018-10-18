#include <iostream>
#include <list>
#include "graph.h"

using namespace std;

int main(int argc, char *argv[]) {
   graph mygraph(11);
   mygraph.add_edge(4,6,10,0);
   mygraph.add_edge(4,7,10,0);
   mygraph.add_edge(4,3,10,0);
   mygraph.add_edge(6,7,10,0); //Esta arista completa un ciclo
   mygraph.print();

   cout << "\n\nNumber of nodes: " << mygraph.size()[0];
   cout << "\nNumber of edges: " << mygraph.size()[1];

   cout << "\n\nMinimum spanning tree";
   graph minimalTree = mygraph.kruskalAlgorithm();
   minimalTree.print();
   cout << "\n\nNumber of nodes: " << minimalTree.size()[0];
   cout << "\nNumber of edges: " << minimalTree.size()[1]<<endl;


   cout<<"ejemplo2: "<<endl;
   graph mygraph2(5);
   mygraph2.add_edge(4,3,9,0);
   mygraph2.add_edge(0,1,11,0);
   mygraph2.add_edge(2,1,9,0);
   mygraph2.add_edge(0,2,10,0);
   mygraph2.add_edge(0,3,7,0);
   cout<<"Print: "<<endl;
   mygraph2.print();
   cout<<endl<<"DFS: "<<endl;
   mygraph2.DFS(3);



    return EXIT_SUCCESS;
}