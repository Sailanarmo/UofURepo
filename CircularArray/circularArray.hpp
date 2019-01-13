#include <iostream>
#include <vector>
#include <algorithm>

#include "node.hpp"

// This simply prints the array
template <typename T>
void printArray(const std::vector<Node<T>> &toPrint)
{
  for(auto && e : toPrint)
  {
    std::cout << e.data << " ";
  }
  std::cout << std::endl;
}

// This performs a right rotation by using std::rotate
template <typename T>
void rightRotation(std::vector<Node<T>> &toRotate)
{
  std::rotate(toRotate.rbegin(),toRotate.rbegin() + 1, toRotate.rend());
}

// This performs a left rotation by using std::rotate
template <typename T>
void leftRotation(std::vector<Node<T>> &toRotate)
{
  std::rotate(toRotate.begin(),toRotate.begin() + 1, toRotate.end());
}

// This performs a left rotation by a user specific input. 
template <typename T>
void targetRotation(int target, std::vector<Node<T>> &toRotate)
{
  if(target < toRotate.size()
  {
    std::rotate(toRotate.begin(),toRotate.begin() + target, toRotate.end());
  }
  else
  {
    std::cout << "Target size is too large for the array! Please choose another position within the array size!" << std::endl;
  }
}

// This is the Circular Array Class
template <typename T>
class CircularArray
{

  public:
    void insert(T data) { array.push_back(data); }
    void clear() { array.clear(); }
    void print() { printArray(array); }
    void sort() { std::sort(array.begin(),array.end()); }
    
    void rotateRight() { rightRotation(array); }
    void rotateLeft() { leftRotation(array); }
    void rotateByPosition(int target) { targetRotation(target, array); }

  private:
    std::vector<Node<T>> array;

};


