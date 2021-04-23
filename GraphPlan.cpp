#include <iostream>
#include "Src/Zyrian/Tuple/Defines/Tuple"
#include "Src/Zyrian/Graph/Implements/Graph"


int main()
{
  /*  auto tuple = MakeTuple(std::string("test"), 2, 4.5);

    auto a = Get<0>(tuple);
    auto b = Get<1>(tuple);
    auto c = Get<2>(tuple);*/

    Graph<int> graph(5);

    graph.addEdge(4, 2);
    graph.addEdge(4, 0);
    graph.addEdge(3, 1);
    graph.addEdge(2, 3);
    graph.addEdge(1, 2);

    graph.TopologicalSort();

    //std::cout << a << " " << b << " " << c << std::endl;
}
