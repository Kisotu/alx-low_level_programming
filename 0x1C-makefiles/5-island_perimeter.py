#!/usr/bin/python3
"""Task 5 - A task that returns the perimeter of the island
described in grid"""


def number_wtr_neighb(grid, k, m):
    """no of water neighbors a cell has"""

    numb = 0

    if k <= 0 or not grid[k - 1][m]:
        numb += 1

    if m <= 0 or not grid[k][m - 1]:
        numb += 1

    if m >= len(grid[k]) - 1 or not grid[k][m + 1]:
        numb += 1

    if k >= len(grid) - 1 or not grid[k + 1][m]:
        numb += 1

    return numb


def island_perimeter(grid):
    """returns perimeter of island in grid"""

    perim = 0
    for k in range(len(grid)):
        for m in range(len(grid[k])):
            if grid[k][m]:
                perim += number_wtr_neighb(grid, k, m)

    return perim
