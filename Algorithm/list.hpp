#include <iostream>

#include "node.hpp"

template <typename T>
void insertValue(T value, std::vector<std::shared_ptr<Node<T>>> &currList)
{
  auto newValue = std::make_shared<Node<T>>(value);
  currList.push_back(newValue);
}

template <typename T>
void addDependencies(T a, T b, std::vector<std::shared_ptr<Node<T>>> &currList)
{
  for (auto && e : currList)
  {
    if(e->value == b)
    {
      e->neighbors.push_back(a);
    }
  }
}

template <typename T>
void printList(const std::vector<std::shared_ptr<Node<T>>> &currList)
{
  for (auto && e : currList)
  {
    std::cout << e->value << ":";

    for (auto && f : e->neighbors)
    {
      std::cout << f << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

template <typename T>
class List
{

  public:
    
    void insert(T value) { insertValue(value, list);  } 
    void insertDependencies(T a, T b) { addDependencies(a, b, list); }
    void print() { printList(list); }

  private:
    std::vector<std::shared_ptr<Node<T>>> list;     
};

