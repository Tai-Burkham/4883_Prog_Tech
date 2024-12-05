// Assignment 10 - Geometry Problems
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        priority_queue<pair<int, vector<int>>> maxHeap;
        
        for (const auto& point : points) 
        {
            // 
            double distance = sqrt(point[0] * point[0] + point[1] * point[1]);
            maxHeap.push({distance, point});
            if (maxHeap.size() > k) 
            {
                maxHeap.pop();
            }
        }
        
        vector<vector<int>> result;
        while (!maxHeap.empty()) 
        {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return result;
    }
};
