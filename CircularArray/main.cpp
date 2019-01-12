#include "circularArray.hpp"

int main()
{
  CircularArray<int> myArray;

  myArray.insert(3);
  myArray.insert(20);
  myArray.insert(5);
  myArray.insert(2);
  myArray.insert(1);
  myArray.print();
  myArray.rotateLeft();
  myArray.print();
  myArray.rotateRight();
  myArray.print();
  myArray.rotateByPosition(2);
  myArray.print();
}
