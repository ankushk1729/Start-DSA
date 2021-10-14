class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i = 0;
        int j = 0;
        int k = 0;
        int len = m+n;
        int arr[1001];
        
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
                
            {
                arr[k]=nums1[i];
                k++;
                i++;
            }
            else
            {
                arr[k]=nums2[j];
                k++;
                j++;
            }
        }
        while(i<m)
        {
            arr[k]=nums1[i];
            k++;
            i++;
        }
        while(j<n)
        {
            arr[k]=nums2[j];
            k++;
            j++;
        }
        
        k=0;
                
        while (k<len)
        {
            nums1[k]=arr[k];
            k++;
        }
    }
};