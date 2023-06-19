import random
import ctypes

# Load the shared object file
lib = ctypes.CDLL('./100-operations.so')

# Generate random integers for testing
a = random.randint(-111, 111)
b = random.randint(-111, 111)

# Call the C functions and print the results
print("{} + {} = {}".format(a, b, lib.add(a, b)))
print("{} - {} = {}".format(a, b, lib.sub(a, b)))
print("{} x {} = {}".format(a, b, lib.mul(a, b)))
print("{} / {} = {}".format(a, b, lib.div(a, b)))
print("{} % {} = {}".format(a, b, lib.mod(a, b)))

