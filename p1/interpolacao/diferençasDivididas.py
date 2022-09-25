import numpy
from math import *

def dif_div(x, y):
    Y = [yi for yi in y]
    A = [y[0]]
    n = len(x)

    for i in range(n):
        for j in range(n - i - 1):
            numer = Y[j + 1] - Y[j]
            demom = x[j + i + 1] - x[j]
            y = numer / demom
            Y[j] = y
        A.append(Y[0])
    return A

def build_func(coeffs):
    n = len(coeffs)
    def func(x):
        soma = coeffs[0]
        for i, ci in enumerate(coeffs[1:], 1):
            prod = ci
            for j in range(i):
                soma *= (x - x[j])
            soma += prod
        return soma
    return func

def f(x):
    ...

x = []
y = []

coeffs = dif_div(x, y)

coeffs