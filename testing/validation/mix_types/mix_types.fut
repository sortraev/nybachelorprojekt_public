-- ==
-- compiled random input { [1][1]i16     [1][1]f64        } auto output
-- compiled random input { [2][3]i16     [3][4]f64        } auto output
-- compiled random input { [15][29]i16   [29][27]f64      } auto output
-- compiled random input { [128][32]i16  [32][64]f64      } auto output
-- compiled random input { [128][103]i16 [103][64]f64     } auto output
-- compiled random input { [512][32]i16  [32][1024]f64    } auto output
-- compiled random input { [512][128]i16 [128][1024]f64   } auto output
-- compiled random input { [513][128]i16 [128][1024]f64   } auto output
-- compiled random input { [512][128]i16 [128][1025]f64   } auto output
-- compiled random input { [512][129]i16 [129][1024]f64   } auto output
-- compiled random input { [513][128]i16 [128][1025]f64   } auto output
-- compiled random input { [512][129]i16 [129][1025]f64   } auto output
-- compiled random input { [513][129]i16 [129][1024]f64   } auto output
-- compiled random input { [513][129]i16 [129][1025]f64   } auto output

let main [M][U][N] (A: [M][U]i16)
                   (B: [U][N]f64) : [M][N]bool =
  map (\A_row ->
        map (\B_col ->
              map2 (\a b ->
                     if (a % 2) == 0 || b < 0.0f64 then true
                     else false) A_row B_col
              |> reduce (&&) true
            ) (transpose B)
      ) A
