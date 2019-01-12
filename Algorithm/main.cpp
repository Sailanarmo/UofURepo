#include "list.hpp"


int main()
{
  List<std::string> myList;

  myList.insert("a");
  myList.insert("b");
  myList.insert("c");
  myList.insert("d");
  myList.insert("e");
  myList.insert("f");
  myList.print();

  myList.insertDependencies("a","d");
  myList.insertDependencies("f","b");
  myList.insertDependencies("b","d");
  myList.insertDependencies("f","a");
  myList.insertDependencies("d","c");

  myList.print();
}
