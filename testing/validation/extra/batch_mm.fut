-- ==
-- compiled random input { [7][3][749][473]f32 [7][3][473][1010]f32 } auto output

let main [a][b][m][n][q] (A0: [a][b][m][q]f32)
                         (B0: [a][b][q][n]f32): [a][b][m][n]f32 =
  map2 (\A1 B1 ->
     map2 (\A B ->
        map (\Arow ->
          map (\Bcol ->
               map2 (*) Arow Bcol |> reduce (+) 0.0f32
              ) (transpose B)
            ) A
          ) A1 B1
       ) A0 B0
