import numpy as np
from math import *

def vandermonde(x: list, y: list):
    A = []
    B = y
    n = len(x)
    for xi in x:
        row = [1] + [xi ** k for k in range(1, n)]
        A.append(row)
    coeffs = np.linalg.solve(A, B)
    return coeffs

def build_poly(coeffs):
    def func(x):
        soma = coeffs[0]
        for i, ci in enumerate(coeffs[1:], 1):
            soma += ci * x ** i
        return soma
    return func

def f(x):
    ...

x = []
y = []

coeffs = vandermonde(x, y)
p = build_poly(coeffs)

   