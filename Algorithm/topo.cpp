#include <iostream>
#include <deque>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/topological_sort.hpp>

struct Vertex
{
  std::string name;
};

typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::directedS,Vertex> Graph;

int main()
{
  Graph g;

  boost::add_vertex(Vertex{"a"},g);
  boost::add_vertex(Vertex{"b"},g);
  boost::add_vertex(Vertex{"c"},g);
  boost::add_vertex(Vertex{"d"},g);
  boost::add_vertex(Vertex{"e"},g);
  boost::add_vertex(Vertex{"f"},g);

  boost::add_edge(0,3,g);
  boost::add_edge(1,3,g);
  boost::add_edge(3,2,g);
  boost::add_edge(5,1,g);
  boost::add_edge(5,0,g);
  
  std::deque<int> topo_order;
  boost::topological_sort(g,std::front_inserter(topo_order));

  for(auto&&e : topo_order)
  {
    std::cout << g[e].name << " ";
  }
  std::cout << std::endl;
}
