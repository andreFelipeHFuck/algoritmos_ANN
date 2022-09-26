import numpy as np

"""
    E[1, :] = (7/5.0) * E[2, :] + E[1, :]
    E[2, :] *= (-5/ 8.0)

"""

def trocaLinha(E, l1, l2): # l1 <-> l2
    aux = np.copy(E[l2,:])  
    E[l2,:] = np.copy(E[l1,:])  
    E[l1,:] = np.copy(aux)  
    return E

E = np.array([], dtype='double')  
print(E)  

