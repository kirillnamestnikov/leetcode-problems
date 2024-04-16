class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        reversednum = 0
        temp = x
        while temp != 0:
            reversednum = reversednum * 10 + (temp%10)
            temp //= 10
        return reversednum == x
