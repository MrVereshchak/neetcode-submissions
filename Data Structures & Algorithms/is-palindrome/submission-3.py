class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        arr = [ch for ch in s if ch.isalnum()]
        
        left, right = 0, len(arr)-1

        print(arr)

        while left < right:
            if arr[left] != arr[right]: 
                return False
            print(arr[left], arr[right])
            left += 1
            right -= 1

        return True
            
            
        