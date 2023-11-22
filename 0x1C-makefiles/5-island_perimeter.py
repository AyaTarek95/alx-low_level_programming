#!/usr/bin/python3
"""
Define island_perimeter method
"""


def island_perimeter(grid):
    """return perimeter of  island in grid
    1 reprsents land and 0 is the water in grid

    Args:
        grid (list): List of list of ints represents an island.
    Returns:
        Perimeter of the the island
    """
    count = 0

    for row in grid:
        for column in row:
            if column == 1:
                count += 1
    p = (count * 2) + 2
    return p
