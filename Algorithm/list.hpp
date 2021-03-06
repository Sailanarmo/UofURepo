#include <iostream>
#include <algorithm>

#include "node.hpp"

// This template function takes a T value and a vector of nodes.
// This will create a newVector and a new node and push them back
// into the list.
template <typename T>
void insertValue(T value, std::vector<std::shared_ptr<Node<T>>> &currList)
{
  std::vector<T> newVec;
  auto newValue = std::make_shared<Node<T>>(value,newVec);
  currList.push_back(newValue);
}

// This will take a pair of T's and insert them into the lists vector 
// of neighbors.
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

// This simply prints the Adjacency list
template <typename T>
void printList(const std::vector<std::shared_ptr<Node<T>>> &currList)
{
  for (auto && e : currList)
  {
    std::cout << e->neighbors.size() << " " << e->value << ":";

    for (auto && f : e->neighbors)
    {
      std::cout << f << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

// This will find the optimal work, currently, this will not throw any error
// if it does not find a path. 
template <typename T>
std::vector<T> findPath(const std::vector<std::shared_ptr<Node<T>>> &currList)
{
  std::vector<T> newList;

  while (newList.size() < currList.size())
  {
    for(int i = 0; i < currList.size(); ++i)
    {
      if(currList[i]->neighbors.empty() && std::find(newList.begin(),newList.end(), currList[i]->value) == newList.end())
      {
        newList.push_back(currList[i]->value);
      }
      else
      {
        std::vector<T> temp1 = newList;
        std::vector<T> temp2 = currList[i]->neighbors;
        std::sort(temp1.begin(),temp1.end());
        std::sort(temp2.begin(),temp2.end());
        
        if(std::includes(temp1.begin(),temp1.end(),temp2.begin(),temp2.end()) && temp2.size() > 0)
        {
          auto it = std::find(newList.begin(),newList.end(),currList[i]->value);
          if(it == newList.end())
            newList.push_back(currList[i]->value);
        }
      }
    }
  }
  return newList;
}

// This is our Adjacency List class.
template <typename T>
class List
{

  public:
    
    void insert(T value) { insertValue(value, list);  } 
    void insertDependencies(T a, T b) { addDependencies(a, b, list); }
    void print() { printList(list); }
    std::vector<T> findOptimalWork() { return findPath(list); }

  private:
    std::vector<std::shared_ptr<Node<T>>> list;     
};

