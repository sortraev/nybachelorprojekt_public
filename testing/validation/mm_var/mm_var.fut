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
          let k = reduce (+) 0 [1, 2, 3]
          in map2 (\x y -> x*y + k) A_row B_col |> reduce (+) 0
          ) (transpose B)
      ) A
