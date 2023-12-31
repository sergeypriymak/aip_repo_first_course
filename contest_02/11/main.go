func isValidSudoku(bord [rows][cols]int) bool {
 for row := 0; row < rows; row++ {
  visited := make(map[int]bool)
  for col := 0; col < cols; col++ {
   num := bord[row][col]
   if num != 0 {
    if visited[num] {
     return false
    }
    visited[num] = true
   }
  }
 }

 for col := 0; col < cols; col++ {
  visited := make(map[int]bool) 
  for row := 0; row < rows; row++ {
   num := bord[row][col]
   if num != 0 {
    if visited[num] {
     return false
    }
    visited[num] = true
   }
  }
 }

 for startRow := 0; startRow < rows; startRow += 3 {
  for startCol := 0; startCol < cols; startCol += 3 {
   visited := make(map[int]bool)
   for row := startRow; row < startRow+3; row++ {
    for col := startCol; col < startCol+3; col++ {
     num := bord[row][col]
     if num != 0 {
      if visited[num] {
       return false
      }
      visited[num] = true
     }
    }
   }
  }
 }

 return true
}
