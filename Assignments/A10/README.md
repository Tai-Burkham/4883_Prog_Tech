# Assignment 10 - Geometry Problem
## Leetcode 973 - K Closest Points to Origin

### Description
Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane and an integer k, return the k closest points to the origin (0, 0).
The distance between two points on the X-Y plane is the Euclidean distance (i.e., √(x1 - x2)2 + (y1 - y2)2).
You may return the answer in any order. The answer is guaranteed to be unique (except for the order that it is in).

|  #  | Folder Link | Assignment Description |
| :-: | -------------- | --------------------------------------------------------- |
|  1  | [P973](./P973) | [K Closest Points to Origin - Main Code](./P973/K_Closest_Points.cpp) |
|  2  | [P973](./P973) | [K Closest Points to Origin - PDF Version](./P973/K_Closest_Points.pdf) |

## Instruction
The Euclidean distance given is meant for Point to Point so I simplified it since the point is the origin (0,0). I used a Priority Queue (Heap) to find the k closest points to the origin. Then I used a lambda function to compare the points and use only the closest.
