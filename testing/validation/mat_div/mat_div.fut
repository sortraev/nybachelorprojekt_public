-- == 
-- compiled input @ ./no_zeroes.dat auto output

-- no_zeroes.dat is generated with:
-- futhark dataset -b --i32-bounds=1:18293 -g [721][891]i32 --i32-bounds=-17485:-1 -g [891][373]i32

let some_program_lets_call_it_mat_div [M][U][N]
                                      (A: [M][U]i32)
                                      (B: [U][N]i32): [M][N]i32 =
  map (\A_row ->
      map (\B_col ->
          map2 (/) A_row B_col |> reduce (+) 0i32 
          ) (transpose B)
      ) A

let main [M][U][N] (A: [M][U]i32)
                   (B: [U][N]i32): [M][N]i32 =
  some_program_lets_call_it_mat_div A B
