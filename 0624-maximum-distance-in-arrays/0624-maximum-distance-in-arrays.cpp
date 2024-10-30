class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int min_val = arrays[0][0];
        int max_val = arrays[0].back();
        int max_distance = 0;
 
    for (size_t i = 1; i < arrays.size(); ++i) {
        int current_min = arrays[i][0];
        int current_max = arrays[i].back();

        max_distance = max(max_distance, abs(current_max - min_val));
        max_distance = max(max_distance, abs(max_val - current_min));


        min_val = min(min_val, current_min);
        max_val = max(max_val, current_max);
    }

    return max_distance;
    }
};

 