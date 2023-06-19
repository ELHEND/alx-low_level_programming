import ctypes

lib = ctypes.CDLL('./100-operations.so')

        a = 10
        b = 5

        # Call the C functions
        print("a + b =", lib.add(a, b))
        print("a - b =", lib.sub(a, b))
        print("a * b =", lib.mul(a, b))
        print("a / b =", lib.div(a, b))
        print("a % b =", lib.mod(a, b))

