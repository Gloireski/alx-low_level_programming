#!/usr/bin/python3
# 5-island_perimeter.py
# Belem Gloire BEKOUTOU
"""define island_perimeter function"""


def island_perimeter(grid):
    """
        returns the perimeter of the island described in grid
        Args:
            grid is a list of list of integers:
            . 0 represents a water zone
            . 1 represents a land zone
            . One cell is a square with side length 1
            . Grid cells are connected horizontally/vertically (not diagonally). 
            . Grid is rectangular, width and height don’t exceed 100
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
