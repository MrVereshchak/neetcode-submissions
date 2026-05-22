class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        ROWS, COLS = len(matrix), len(matrix[0])

        left, right = 0, (ROWS * COLS) - 1 

        while left <= right:
            middle = (right + left) // 2

            row = middle // COLS
            col = middle % COLS

            print(left, right)
            print(middle, row, col, matrix[row][col], target)

            if target > matrix[row][col]:
                left = middle + 1
            elif target < matrix[row][col]:
                right = middle - 1
            else:
                return True
        return False
            
        
        # L, R = 0, len(matrix)-1

        # while L <= R:
        #     mid_arr = (L + R) // 2

        #     if target < matrix[mid_arr][0]:
        #         R = mid_arr - 1
        #     elif target > matrix[mid_arr][-1]:
        #         L = mid_arr + 1
        #     else:
        #         l, r = 0, len(matrix[mid_arr])-1

        #         while l <= r:
        #             mid = (l + r) // 2
                    
        #             if target > matrix[mid_arr][mid]:
        #                 l = mid + 1
        #             elif target < matrix[mid_arr][mid]:
        #                 r = mid - 1
        #             else: 
        #                 return True
        
        #         break
        
        # return False