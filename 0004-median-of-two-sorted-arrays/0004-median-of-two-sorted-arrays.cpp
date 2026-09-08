class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>ans;
        int i= 0 , j=0;
        while(i < n && j < m){
            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        if( i == n ){
            while(j<m){
                ans.push_back(nums2[j]);
                j++;
            }
        }
        else{
            while(i<n){
                ans.push_back(nums1[i]);
                i++;
            }
        }
        for(int val : ans){
            cout << val << " ";
        }
        int mid = (m+n)/2;
        if((m+n)%2 != 0) return ans[mid];
        double f_ans = (float)( ans[mid] + ans[mid-1] )/2;
        return f_ans;
    }
};