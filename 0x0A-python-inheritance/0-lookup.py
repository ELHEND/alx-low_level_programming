#!/usr/bin/python3
"""Defines  object attribute lookup function."""


def lookup(obj):
    """Return  list of an object's available attributes."""
    return (dir(obj))
