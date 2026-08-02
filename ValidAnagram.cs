public class Solution {
    public bool IsAnagram(string s, string t) {
        if(s.Length != t.Length)
        {
            return false;
        }
        Dictionary<char, int> anagram1 = new Dictionary<char, int>();
        foreach(char c in s)
        {
            if(anagram1.ContainsKey(c))
            {
                anagram1[c]++ ;
            }
            else
            {
                anagram1.Add(c,1);
            }
        }
        foreach(char c in t)
        {
            if(anagram1.ContainsKey(c))
            {
                anagram1[c]--;

                if(anagram1[c]==0)
                {
                    anagram1.Remove(c);
                }
            }
            else
            {
                return false;
            }


        }

        return anagram1.Count == 0;
        
    }
}

