#include <memory>

// This is our node struct, it simply takes a value for T.
template <typename T>
struct Node
{
  Node(T d) : data(d) {};
  
  T data;
};
