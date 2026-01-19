// Last updated: 18/01/2026, 20:26:42
1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        int index1 = 0, index2 = 0, tot_length = nums1.size() + nums2.size();
5        if (tot_length % 2 == 0) {
6            double median = 0.0;
7            while (index1 + index2 < tot_length/2 - 1) {
8                if (index1 < nums1.size() && index2 < nums2.size()) {
9                    if (nums1.at(index1) < nums2.at(index2)) {
10                        index1++;
11                    } else {
12                        index2++;
13                    }
14                } else if (index1 < nums1.size()) {
15                    index1++;
16                } else {
17                    index2++;
18                }
19            }
20            for (int i = 0; i < 2; i++) {
21                if (index1 < nums1.size() && index2 < nums2.size()) {
22                    if (nums1.at(index1) < nums2.at(index2)) {
23                        median += double(nums1.at(index1));
24                        index1++;
25                    } else {
26                        median += double(nums2.at(index2));
27                        index2++;
28                    }
29                } else if (index1 < nums1.size()) {
30                    median += double(nums1.at(index1));
31                    index1++;
32                } else {
33                    median += double(nums2.at(index2));
34                    index2++;
35                }
36            }
37            return median / 2.0;
38        } else {
39            while (index1 + index2 < (tot_length-1) / 2) {
40                if (index1 < nums1.size() && index2 < nums2.size()) {
41                    if (nums1.at(index1) < nums2.at(index2)) {
42                        index1++;
43                    } else {
44                        index2++;
45                    }
46                } else if (index1 < nums1.size()) {
47                    index1++;
48                } else {
49                    index2++;
50                }
51            }
52            
53            if (index1 < nums1.size() && index2 < nums2.size()) {
54                if (nums1.at(index1) < nums2.at(index2)) {
55                    return nums1.at(index1);
56                } else {
57                    return nums2.at(index2);
58                }
59            } else if (index1 < nums1.size()) {
60                return nums1.at(index1);
61            } else {
62                return nums2.at(index2);
63            }
64        }
65    }
66};