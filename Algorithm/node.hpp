#include <memory>
#include <vector>

// This is our Node, it takes a type T and a std::vector of
// type T.
template <typename T>
struct Node
{
  Node (T v, std::vector<T> n) : value(v), neighbors(n) {};

  T value;
  std::vector<T> neighbors;
};
