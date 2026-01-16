// Last updated: 15/01/2026, 23:02:25
1class Solution {
2    public int lengthOfLongestSubstring(String s) {
3        if (s.length() == 0 || s.length() == 1) {
4            return s.length();
5        }
6        String uniques = String.valueOf(s.charAt(0));
7        int longest = 0, start_uniques = 0;
8        for (int i = 1; i < s.length(); i++) {
9            if (uniques.contains(String.valueOf(s.charAt(i)))) {
10                if (uniques.length() > longest) {
11                    longest = uniques.length();
12                }
13                start_uniques = start_uniques + uniques.indexOf(s.charAt(i)) + 1;
14                if (start_uniques == i) {
15                    uniques = "";
16                } else {
17                    
18                    uniques = s.substring(start_uniques, i); 
19                }
20            }
21            uniques = uniques + s.charAt(i);
22        }
23        if (uniques.length() > longest) {
24            longest = uniques.length();
25        }
26        return longest;
27    }
28}