Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.

Constraints:

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters.

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        n=len(needle)
        h=len(haystack)
        for i in range(h-n+1):
            if haystack[i:i+n] == needle:
                return i
        return -1
