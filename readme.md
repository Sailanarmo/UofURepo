# University of Utah Programming Challenges

This repository holds all of the programming challenges requested to be done.

## Task 1

Task 1 has been completed by the creation of this repository. 

## Task 2

Task 2 can be found in the folder CircularArray. For this problem, I created a templated version of a circular array. I first create a Node which takes a data type of type T, where T can be any data type given by the user. I then created a class where my array is a vector of Nodes of type T. When a user wants to create a circular array they simply call CircularArray<int> name. And that will create a new circular array of type int. The user can then insert values into the array. The program will then rotate the array to the right, rotate the array to the left, and rotate the array by 2. The user can choose on how many positions they can rotate the array by. 

This program was compiled in linux just by simply typing `g++ main.cpp` in the terminal and executing with `a.out`.

## Task 3

For the python scripting I am going to be totally honest as I found a solution online here: https://gist.github.com/astanin/626356. This is stuff that I would love to learn more about, my original thought when tackling this problem, was to load the images in and take the difference pixel by pixel. I googled ideas on how to do so and I stumbled upon this solution. I would like to get to understand it better. So this is something I hope to have a conversation with you about. 

## Bonus Task 1

Bonus Task 1 can be found in the folder Algorithm. This problem I tackled in two ways. The first way, is not efficient and will most likely not work with other implementations. I created my own adjacency list where each node has a value and vector of neighbors. The user will then go ahead and insert values into the adjacency list and will insert the dependencies as pairs. The list is then printed out and shows the dependencies in the vector. In order to solve the problem, I did not originally think of a topological sort. I first checked the adjacency list for values that had no dependencies. If they had no dependencies I pushed it back into a new outputVector. I then looped again and checked each values dependencies. If the values dependencies were in my outputVector they were okay to be added into the output vector. I do this until the outputVector size matches that of the input. This is where problems can arise. If the vector never matches, it will be stuck in an infinite while loop with no hope of escaping. 

This program can be compiled by typing `g++ main.cpp` in the command line and running `./a.out`. 

Once I realized this was a topological sort problem I went ahead and implemented this using boost's graphing library. I created an adjacency list where I inserted each node into the graph and added edges between them. I then created a deque and performed a topological sort on the graph pushing back each nodes name. Once that is finished, I then print out the topologically sorted graph. 
This program can be compiled by typing `g++ topo.cpp` and running `./a.out`. 

## Bonus Task 2

I did not attempt to do this problem. But this is something I would love to learn more about since it seems to be about aligning two images together and creating one final image. This seems super awesome and very interesting to learn more about. 

## Bonus Task 3

Following the instructions I was able to compile and run this program on my linux computer. It took a long time to compile and download but I managed to successfully get it to run. 

## Bonus Task 4 

Refer to Bonus Task 3 since it is a restatement of that. 
