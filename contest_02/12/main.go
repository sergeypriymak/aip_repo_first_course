func fill(maze [][]int) {
    rows := len(maze)
    cols := len(maze[0])

    for i := 0; i < rows; i++ {
        for j := 0; j < cols; j++ {
            if maze[i][j] == -1 {
                continue
            }

            count := 0
            for x := -1; x <= 1; x++ {
                for y := -1; y <= 1; y++ {
                    if i+x >= 0 && i+x < rows && j+y >= 0 && j+y < cols && maze[i+x][j+y] == -1 {
                        count++
                    }
                }
            }

            maze[i][j] = count
        }
    }
}
