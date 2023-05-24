#!/usr/bin/python3
"""Defines an island perimeter described in grid."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    height, width = len(grid), len(grid[0])
    perimeter = 0

    for x in range(height):
        for y in range(width):
            if grid[x][y] == 1:
                perimeter += 4
                if x > 0 and grid[x - 1][y] == 1:
                    perimeter -= 2
                if y > 0 and grid[x][y - 1] == 1:
                    perimeter -= 2

    return perimeter
