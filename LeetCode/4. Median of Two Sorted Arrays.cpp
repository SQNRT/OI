// There are two sorted arrays nums1 and nums2 of size m and n respectively.

// Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

// Example 1:
// nums1 = [1, 3]
// nums2 = [2]

// The median is 2.0
// Example 2:
// nums1 = [1, 2]
// nums2 = [3, 4]

// The median is (2 + 3)/2 = 2.5

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        if(m > n)
        {
            std::swap(nums1, nums2);
            std::swap(m, n);
        }
        int imin = 0, imax = m, HalfLen = (m + n + 1) / 2;
        int MaxLeft, MinRight;
        while(imin <= imax)
        {
            int i = (imin + imax) / 2;
            int j = HalfLen - i;
            if(i > 0 && nums1[i - 1] > nums2[j])
                imax = i - 1;
            else if(i < m && nums2[j - 1] > nums1[i])
                imin = i + 1;
            else
            {
                if(i == 0)
                    MaxLeft = nums2[j - 1];
                else if(j == 0)
                    MaxLeft = nums1[i - 1];
                else
                    MaxLeft = max(nums1[i - 1], nums2[j - 1]);
                
                if((m + n) % 2 == 1)
                    return MaxLeft;
                else
                {
                    if(i == m)
                        MinRight = nums2[j];
                    else if(j == n)
                        MinRight = nums1[i];
                    else
                        MinRight = min(nums1[i], nums2[j]);
                    
                    return (MaxLeft + MinRight) / 2.0;
                }
            }
        }
    }
};