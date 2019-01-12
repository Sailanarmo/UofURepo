#include <iostream>
#include <vector>
#include <algorithm>

#include "node.hpp"

template <typename T>
void printArray(const std::vector<Node<T>> &toPrint)
{
  for(auto && e : toPrint)
  {
    std::cout << e.data << " ";
  }
  std::cout << std::endl;
}

template <typename T>
void rightRotation(std::vector<Node<T>> &toPrint)
{

}

template <typename T>
void leftRotation(std::vector<Node<T>> &toPrint)
{

}

template <typename T>
class CircularArray
{

  public:
    void insert(T data) { array.push_back(data); }
    void clear() { array.clear(); }
    void print() { printArray(array); }
    
    void rotateRight() { rightRotation(array); }
    void rotateLeft() { leftRotation(array); }
    void rotateByPosition(int target) { targetRotation(target, array); }

  private:
    std::vector<Node<T>> array;

};


