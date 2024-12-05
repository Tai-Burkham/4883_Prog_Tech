## Assignment 11 - Bipartite / Graph Coloring
### Leetcode 1042. Flower Planting With No Adjacent
### Tailor Burkham 
### Description:
You have n gardens, labeled from 1 to n, and an array paths where paths[i] = [xi, yi] describes a bidirectional path between garden xi to garden yi. In each garden, you want to plant one of 4 types of flowers.
All gardens have at most 3 paths coming into or leaving it.
Your task is to choose a flower type for each garden such that, for any two gardens connected by a path, they have different types of flowers.
Return any such a choice as an array answer, where answer[i] is the type of flower planted in the (i+1)th garden. The flower types are denoted 1, 2, 3, or 4. It is guaranteed an answer exists.

### Files

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | [Flower_Planting.cpp](./P1042/Flower_Planting.cpp)     | solution file.  |
|   2   | [Flower_Planting_PDFv.pdf](./P1042/Flower_Planting_PDFv.pdf)  | solution file. PDF Version  |


### Instructions
I used an Adjacency list and DFS to traverse each garden, its path, and pick a different flower color for each garden.



