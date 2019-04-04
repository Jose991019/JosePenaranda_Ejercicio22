import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ JosePenaranda_Ejercicio22.cpp -o codigo.x")
os.system("./codigo.x > numeros.dat")

data = np.loadtxt("numeros.dat")

plt.figure()
_= plt.hist(data, bins = 50)
plt.savefig("histograma.png")