//Time complexity: o(nlogn * n2) => 0(n2)

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> res;
    for(int i=0;i<intervals.size();i++){
        int a = intervals[i][0];
        int b = intervals[i][1];
        for(int j=i+1;j<intervals.size();j++){
            int c = intervals[j][0];
            int d = intervals[j][1];
            
            if(b>=c){
                b=max(b,d);
                i=j;
            }
        }
        res.push_back({a,b});
    }
    return res;
}


//Time complexity : 0(nlogn * n)
//Space complexity : 0(n) ->stack
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    stack<Interval> s;
    vector<vector<int>> res;
    sort(intervals.begin(), intervals.end());
    s.push(intervals[0]);
    for (int i = 1 ; i < intervals.size(); i++)
    {
        vector<int> top = s.top();
        if (top[1] < intervals[i][0]){
            s.push(intervals[i]);
        }
        else if (top[1] < intervals[i][1])
        {
            top[1] = intervals[i][1];
            s.pop();
            s.push(top);
        }
    }
 
    while (!s.empty())
    {
        vector<int> t = s.top();
        res.push_back(t);
        s.pop();
    }
    return res;
}


//Time complexity : 0(nlogn * n)

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> res;
    vector<int> temp = intervals[0];
    for(int i=1;i<intervals.size();i++){
        if(temp[1]>=intervals[i][0]){
            temp[1] = max(temp[1],intervals[i][1]);
        }
        else{
            res.push_back(temp);
            temp=intervals[i];
        }
    }
    res.push_back(temp);
    return res;
}
