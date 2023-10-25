#!/usr/bin/python3

#!/usr/bin/python3

def island_perimeter(grid):
    """
    Function that calculate the perimeter of an island described in the grid

    Args:
    grid (List[List[int]]): A list of lists representing the grid

    Returns:
    int: The perimeter of the island

    Example:
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    island_perimeter(grid)
    """
    grid_width = len(grid[0])
    grid_height = len(grid)
    land_edges = 0
    land_cells = 0

    for i in range(grid_height):
        for j in range(grid_width):
            if grid[i][j] == 1:
                land_cells += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    land_edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    land_edges += 1
    return land_cells * 4 - land_edges * 2
