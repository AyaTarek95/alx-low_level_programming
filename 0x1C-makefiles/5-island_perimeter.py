#!/usr/bin/python3
"""
island_perimeter
"""


def island_perimeter(grid):
    """return perimeter of  island in grid

    """
    count = 0

    for row in grid:
        for column in row:
            if column == 1:
                count += 1
    p = (count * 2) + 2
    return p
