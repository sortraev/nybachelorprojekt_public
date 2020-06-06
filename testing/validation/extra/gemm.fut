-- ==
-- compiled random input { f32 f32 [573][999]f32 [999][1010]f32 [573][1010]f32 } auto output

let main [M][U][N] (alpha: f32)
                   (beta : f32)
                   (A: [M][U]f32)
                   (B: [U][N]f32)
                   (C: [M][N]f32) : [M][N]f32 =
  map2 (\A_row C_row ->
     map2 (\B_col c ->
        let r = map2 (\a b -> a*b + alpha) A_row B_col
                |> reduce (+) 0
        in alpha*r + beta*c
          ) (transpose B) C_row
       ) A C
