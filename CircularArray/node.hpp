#include <memory>

template <typename T>
struct Node
{
  Node(T d) : data(d) {};
  
  T data;
};
