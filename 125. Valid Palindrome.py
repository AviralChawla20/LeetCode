import string
class Solution:
    def isPalindrome(self, s: str) -> bool:
        translator = str.maketrans('', '', string.punctuation)
        s = s.translate(translator)
        s = s.split()
        s = "".join(s)
        s = s.lower()
        print(s)
        if (s==s[::-1]):   
            return True
        return False
        
