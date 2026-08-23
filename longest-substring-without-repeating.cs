public class Solution {
    public int LengthOfLongestSubstring(string s) {
        HashSet<char> set = new HashSet<char>();
        var longestSubstring = 0;
        var left = 0;
        for(int right = 0 ; right <s.Length;right++)
        {
            while(set.Contains(s[right]))
            {
                set.Remove(s[left]);
                left ++;
            }

            set.Add(s[right]);
            longestSubstring = Math.Max(longestSubstring,right -left + 1);

        }
        return longestSubstring;
    }
}
