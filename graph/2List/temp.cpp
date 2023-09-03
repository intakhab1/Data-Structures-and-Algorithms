//make a visited matrix. Initialize it with elements of grid.
        vector<vector<int>> visited(rows, vector<int>(cols, 0));
        
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                visited[i][j] = grid[i][j];
                
            }
        }