class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        L, R = 0, len(matrix)-1

        while L <= R:
            mid_arr = (L + R) // 2

            if target < matrix[mid_arr][0]:
                R = mid_arr - 1
            elif target > matrix[mid_arr][-1]:
                L = mid_arr + 1
            else:
                l, r = 0, len(matrix[mid_arr])-1

                while l <= r:
                    mid = (l + r) // 2
                    
                    if target > matrix[mid_arr][mid]:
                        l = mid + 1
                    elif target < matrix[mid_arr][mid]:
                        r = mid - 1
                    else: 
                        return True
        
                break
        
        return False