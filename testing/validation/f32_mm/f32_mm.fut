-- ==
-- compiled random input { [1][1]f32     [1][1]f32        } auto output
-- compiled random input { [2][3]f32     [3][4]f32        } auto output
-- compiled random input { [15][29]f32   [29][27]f32      } auto output
-- compiled random input { [128][32]f32  [32][64]f32      } auto output
-- compiled random input { [128][103]f32 [103][64]f32     } auto output
-- compiled random input { [512][32]f32  [32][1024]f32    } auto output
-- compiled random input { [512][128]f32 [128][1024]f32   } auto output
-- compiled random input { [513][128]f32 [128][1024]f32   } auto output
-- compiled random input { [512][128]f32 [128][1025]f32   } auto output
-- compiled random input { [512][129]f32 [129][1024]f32   } auto output
-- compiled random input { [513][128]f32 [128][1025]f32   } auto output
-- compiled random input { [512][129]f32 [129][1025]f32   } auto output
-- compiled random input { [513][129]f32 [129][1024]f32   } auto output
-- compiled random input { [513][129]f32 [129][1025]f32   } auto output

let main [M][U][N] (A: [M][U]f32)
                   (B: [U][N]f32): [M][N]f32 =
  map (\A_row ->
      map (\B_col ->
          map2 (*) A_row B_col |> reduce (+) 0
          ) (transpose B)
      ) A

-- test cases                      assuming (Ty, Tx, Tk, Ry, Rx) == (16, 16, 32, 8, 4)
-- [1][1]f32     [1][1]f32         scalar multiplication because why not.                      
-- [2][3]f32     [3][4]f32         a single, partial register tile.                            
-- [15][29]f32   [29][27]f32       a single, partial block tile.                               

-- [128][32]f32  [32][64]f32       one group, one block tile per group,   no residual.         
-- [128][103]f32 [103][64]f32      one group, multiple block tiles/group, no residual.         

-- [512][32]f32  [32][1024]f32     multiple groups, one block tile per group,      no residual.
-- [512][128]f32 [128][1024]f32    multiple groups, multiple block tiles pergroup, no residual.

-- [513][128]f32 [128][1024]f32    multiple groups, residual in M dim.                         
-- [512][128]f32 [128][1025]f32    multiple groups, residual in N dim.                         
-- [512][129]f32 [129][1024]f32    multiple groups, residual in U dim.                         

-- [513][128]f32 [128][1025]f32    multiple groups, residual in M and N dims.                  
-- [512][129]f32 [129][1025]f32    multiple groups, residual in N and U dims.                  
-- [513][129]f32 [129][1024]f32    multiple groups, residual in M and U dims.                  

-- [513][129]f32 [129][1025]f32    multiple groups, residual in all dims.                      
