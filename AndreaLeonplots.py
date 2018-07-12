import numpy as np
import matplotlib.pyplot as plt

data=np.genfromtxt("data.txt")
x=data[:,0]/40
u=data[:,1]

plt.figure()
plt.plot(x[:80],u[:80])
plt.show()
plt.figure()
plt.plot(x[-80:],u[-80:])
plt.show()
