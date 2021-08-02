//Time complexity : o(nlogn)

static bool comp(Interval a,Interval b){
    return a.start<=b.start;
} 
bool canAttendMeetings(vector<Interval> &intervals) {
    if(intervals.size()==0) return true;
    sort(intervals.begin(),intervals.end(),comp);
    for(int i=1;i<intervals.size();i++){
        if(intervals[i-1].end > intervals[i].start){
            return false;
        }
    }
    return true;
}
