-- ==
-- compiled random input { [214][272]f32 [272][263]f32 } auto output
-- compiled random input { [432][415]f32 [415][456]f32 } auto output
-- compiled random input { [704][702]f32 [702][807]f32 } auto output
-- compiled random input { [1058][1073]f32 [1073][991]f32 } auto output
-- compiled random input { [1307][1318]f32 [1318][1298]f32 } auto output
-- compiled random input { [214][272]f32 [272][263]f32 } auto output
-- compiled random input { [432][415]f32 [415][456]f32 } auto output
-- compiled random input { [704][702]f32 [702][807]f32 } auto output
-- compiled random input { [1058][1073]f32 [1073][991]f32 } auto output
-- compiled random input { [1058][1073]f32 [1073][991]f32 } auto output
-- compiled random input { [1307][1318]f32 [1318][1298]f32 } auto output
-- compiled random input { [214][272]f32 [272][263]f32 } auto output
-- compiled random input { [432][415]f32 [415][456]f32 } auto output
-- compiled random input { [704][702]f32 [702][807]f32 } auto output
-- compiled random input { [1058][1073]f32 [1073][991]f32 } auto output
-- compiled random input { [1307][1318]f32 [1318][1298]f32 } auto output


let main [M][U][N] (A: [M][U]f32) (B: [U][N]f32): [M][N]f32 =
  map (\A_row ->
      map (\B_col ->

          reduce (+) 0 (map2 (*) A_row B_col)   -- tiled kernel
                                                   
          -- loop acc = 0 for k < U do             -- naive kernel
            -- acc + A_row[k] * B_col[k]

          ) (transpose B)
      ) A


-- compiled random input { [214][272]f32 [272][263]f32 } auto output
-- compiled random input { [432][415]f32 [415][456]f32 } auto output
-- compiled random input { [704][702]f32 [702][807]f32 } auto output
-- compiled random input { [1058][1073]f32 [1073][991]f32 } auto output
-- compiled random input { [1307][1318]f32 [1318][1298]f32 } auto output
-- compiled random input { [1648][1640]f32 [1640][1550]f32 } auto output
-- compiled random input { [1831][1932]f32 [1932][1823]f32 } auto output
-- compiled random input { [2122][2110]f32 [2110][2124]f32 } auto output
-- compiled random input { [2256][2354]f32 [2354][2289]f32 } auto output
-- compiled random input { [2713][2642]f32 [2642][2627]f32 } auto output
-- compiled random input { [2939][2884]f32 [2884][2777]f32 } auto output
-- compiled random input { [3135][3196]f32 [3196][3141]f32 } auto output
-- compiled random input { [3453][3478]f32 [3478][3457]f32 } auto output
-- compiled random input { [3579][3594]f32 [3594][3759]f32 } auto output
-- compiled random input { [3859][3851]f32 [3851][3789]f32 } auto output
-- compiled random input { [4294][4220]f32 [4220][4229]f32 } auto output
