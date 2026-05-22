class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        # row_check
        # column_check
        # box_check

        # [0, 0] [0, 1] [0, 2] [0, 3] [0, 4] [0, 5] [0, 6] [0, 7] [0, 8]
        # (0, 0) (0, 1) (0, 2) (1, 0) (1, 1) (1, 2) (2, 0) (2, 1) (2, 2)

        # [5, 0] [5, 1] [5, 2] [5, 3] [5, 4] [5, 5] [5, 6] [5, 7] [5, 8]
        # (3, 6) (3, 7) (3, 8) (4, 6) (4, 7) (4, 8) (5, 6) (5, 7) (5, 8)

        # box = 3 * (i // 3) + (j // 3) 0-8
        # (i % 3) + (j % 3)
        

        # if i < 3:
        #     if j < 3: box_1
        #     if j >= 3 and j < 6: box_2
        #     if j >= 6 and j < 9: box_3
        # if i >= 3 and i < 6:
        #     if j < 3: box_4
        #     if j >= 3 and j < 6: box_5
        #     if j >= 6 and j < 9: box_6
        # if i >= 6:
        #     if j < 3: box_7
        #     if j >= 3 and j < 6: box_8
        #     if j >= 6 and j < 9: box_9

        rows = [set() for _ in range(9)]
        cols = [set() for _ in range(9)]
        boxes = [set() for _ in range(9)]

        for i in range(9):
            for j in range(9):
                el = board[i][j]

                if el == '.':
                    continue
                
                box_idx = 3 * (i // 3) + (j // 3)
                
                if el in rows[i] or el in cols[j] or el in boxes[box_idx]:
                    return False
                
                rows[i].add(el)
                cols[j].add(el)
                boxes[box_idx].add(el)
            
        return True





        # box_cnt = [[0] * 9 for _ in range(9)]
        # col_cnt = [[0] * 9 for _ in range(9)]

        # for i, row in enumerate(board):
        #     row_cnt = [0] * 9

        #     for j, el in enumerate(row):
        #         box = 3 * (i // 3) + (j // 3) # 0-8
        #         # box_pos = 3 * (i % 3) + (j % 3) # position inside each box

        #         if el != '.':
        #             col_cnt[j][int(el)-1] += 1
        #             row_cnt[int(el)-1] += 1
        #             box_cnt[box][int(el)-1] += 1
        #         else: 
        #             continue
        #         # print(i, j, 3 * (i % 3) + (j % 3))
            
        #     if any(x > 1 for x in row_cnt):
        #         return False
        #     if any(x > 1 for arr in col_cnt for x in arr):
        #         return False
        #     if any(x > 1 for arr in box_cnt for x in arr):
        #         return False
        #     print(row_cnt)

        # print(col_cnt)
        # print(box_cnt)

        # return True   
        
        
        # print(col_cnt)


            
