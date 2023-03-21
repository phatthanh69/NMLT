import re
class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = re.sub('[^a-zA-Z0-9]','',s.lower())
        if s == ''.join(reversed(s)):
            return True
        return False