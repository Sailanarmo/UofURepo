#include <memory>
#include <vector>

template <typename T>
struct Node
{
  Node (T v) : value(v) {};

  T value;
  std::vector<T> neighbors;
};
