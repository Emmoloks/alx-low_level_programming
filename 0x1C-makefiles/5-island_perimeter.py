#!/usr/bin/python3

def island_perimeter(grid):
    """
    Returns the perimeter of an island described in grid:
    grid is a list of list of integers:
    *0 represents a water zone
    *1 represents a land zone
    *One cell is a square with side length 1
    *Grid cells are connected horizontally/vertically (not diagonally)
    *Grid is rectangular, width and height don’t exceed 100
    *Grid is completely surrounded by water, and there is
    one island (or nothing)
    *The island doesn’t have “lakes” (water inside that isn’t
    connected to the water around the island)
    Args(grid):
                given list of a double array of 0s and 1s
    Returns:
            the preimeter of the island
    """
    perimeter = 0


for i in range(len(grid)):
    for j in range(len(grid[0])):
        if grid[i][j] == 1:
            if i == 0 or grid[i-1][j] == 0:
                perimeter += 1
            if i == len(grid) - 1 or grid[i+1][j] == 0:
                perimeter += 1
            if j == 0 or grid[i][j-1] == 0:
                perimeter += 1
            if j == len(grid[0]) - 1 or grid[i][j+1] == 0:
                perimeter += 1
return perimeter
