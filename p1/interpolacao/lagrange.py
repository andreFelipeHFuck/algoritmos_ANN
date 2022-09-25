import numpy
from math import *

def lagrange(x: list, y: list) ->list:
    """
    Retorna os yi's divididos pelo
    denominador do polinômio da base 
    de lagrande Li

    ci = yi / denom(Li)
    """

    c_list = []
    n = len(x)

    for i in range(n):
        ci = y[i] 
        denom = 1
        for j in range(n):
            if j != i:
                denom *= (x[i] - x[j])
        ci /= denom
        c_list.append(ci)
    return c_list

def build_func(x_coords, c_list):
    n = len(x_coords)
    def func(x):
        for i in range(n):

            numer: float = 1
            for j in range(n):
                if j != i:
                    numer *= (x - x_coords[j])
            soma += c_list[i] * numer
        return soma 
    return func

def f(x):
    ... 

x = []
y = [f(i) for i in x]

c_list = lagrange(x, y)
