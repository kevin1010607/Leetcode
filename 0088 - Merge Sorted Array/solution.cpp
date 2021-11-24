class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx1 = m-1, idx2 = n-1;
        for(int i = m+n-1; i >= 0; i--){
            if(idx1>=0 && idx2>=0){
                nums1[i] = max(nums1[idx1], nums2[idx2]);
                (nums1[idx1]>nums2[idx2])?(idx1--):(idx2--);
            }
            else{
                nums1[i] = (idx1>=0)?nums1[idx1]:nums2[idx2];
                (idx1>=0)?(idx1--):(idx2--);
            }
        }
    }
};