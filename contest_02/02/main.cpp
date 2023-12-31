#include <queue>

bool is_can_exit_from_maze(std::vector<std::string>& maze, int row, int col) {
    int rows = maze.size();
    int cols = maze[0].size();
    
    std::vector<std::vector<bool>> visited(rows, std::vector<bool>(cols, false));
    
    std::queue<std::pair<int, int>> q;
    q.push({row, col});
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (maze[x][y] == 'E') {
            return true;
        }
        
        if (x > 0 && maze[x-1][y] != '#' && !visited[x-1][y]) {
            q.push({x-1, y});
            visited[x-1][y] = true;
        }
        if (x < rows-1 && maze[x+1][y] != '#' && !visited[x+1][y]) {
            q.push({x+1, y});
            visited[x+1][y] = true;
        }
        if (y > 0 && maze[x][y-1] != '#' && !visited[x][y-1]) {
            q.push({x, y-1});
            visited[x][y-1] = true;
        }
        if (y < cols-1 && maze[x][y+1] != '#' && !visited[x][y+1]) {
            q.push({x, y+1});
            visited[x][y+1] = true;
        }
    }
    
    return false;
}
