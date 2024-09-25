## Assignment 6 - Hardwood Sneezy
#### LeetCode 451: Sort Characters By Frequency
#### Tailor Burkham
## Assignment Overview
Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.
Return the sorted string. If there are multiple answers, return any of them.
### Files

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | [solution_Code.cpp](./solution_Code.cpp)     | Solution Code                                            |


### Instructions
- This project was compiled using C++
1. I used a vector pair to store characters and their frequency.
2. Iterated over each character in the string
3. Need to to check if character is already in vector to avoid duplicates
4. If already not in vector then use count to find the frequency, and add it with character into vector
5. Use the lambda function to sort vector from largest to smallest frequency
6. Lastly, I appended the vector pair into a string. Then returned the string.
### Sources
- Geeks for Geek
  - https://www.geeksforgeeks.org/how-to-create-vector-of-pairs-in-cpp/
  - https://www.geeksforgeeks.org/std-find-in-cpp/
  - https://www.geeksforgeeks.org/lambda-expression-in-c/
  - https://www.geeksforgeeks.org/std-count-cpp-stl/
I used the sources to help me understand what more about Vector Pairs, Lambda expression, find in, and count.
I had learned about vectors, a variation of find, and count from Python coding. I needed more information about how to use it in C++.
I had learned how to do lambda expression thru Java, and needed more information about it in C++.
