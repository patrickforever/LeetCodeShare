class Solution
{
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points)
    {
        int answer = 0;
        for(int i=0; i<points.size(); i++)
        {
            unordered_map<int,int> possible(points.size());
            for(int j =0 ; j<points.size() ; j++)
            {
                if(j==i)
                    continue;
                int dy = points[i].second - points[j].second;
                int dx = points[i].first - points[j].first;
                possible[dy*dy+dx*dx]++;
            }
            for(auto& j: possible)
            {
                if(j.second > 1)
                    answer += j.second * (j.second-1);
            }
        }
        return answer;
    }
};
