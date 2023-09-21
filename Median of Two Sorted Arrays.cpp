class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Combine nums1 and nums2 into a single sorted array
        vector<int> combined;
        int i = 0, j = 0;
        
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                combined.push_back(nums1[i]);
                i++;
            } else {
                combined.push_back(nums2[j]);
                j++;
            }
        }
        
        // Add any remaining elements from nums1 and nums2
        while (i < nums1.size()) {
            combined.push_back(nums1[i]);
            i++;
        }
        
        while (j < nums2.size()) {
            combined.push_back(nums2[j]);
            j++;
        }
        
        // Compute the median based on the size of the combined array
        int n = combined.size();
        if (n % 2 == 0) {
            // If the combined array has an even number of elements, average the middle two elements
            return (combined[n / 2 - 1] + combined[n / 2]) / 2.0;
        } else {
            // If the combined array has an odd number of elements, return the middle element
            return combined[n / 2];
        }
    }
};
