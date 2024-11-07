// Assignment 7 - Priority queezy
class Solution 
{
    public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int, int>> projects;
        for (int i = 0; i < profits.size(); i++) 
        {
            projects.push_back(make_pair(capital[i], profits[i]));
        }
        sort(projects.begin(), projects.end());

        priority_queue<int> maxHeap; 
        int index = 0;
        int n = projects.size();

        for (int i = 0; i < k; i++) 
        {    
            while (index < n && projects[index].first <= w) 
            {
                maxHeap.push(projects[index].second); 
                index++;
            }
            if (!maxHeap.empty()) 
            {
                w += maxHeap.top(); 
                maxHeap.pop(); 
            } else {
                break; 
            }
        }
        return w; 
    }
};
