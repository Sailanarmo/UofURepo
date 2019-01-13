#include <memory>
#include <vector>

template <typename T>
struct Node
{
  Node (T v, std::vector<T> n) : value(v), neighbors(n) {};

  T value;
  std::vector<T> neighbors;
};
