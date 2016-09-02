inp = open("input")
out = open("output", "w")
MOD =1000000007
t = int(inp.readline())
t = 1
for line in inp:
	V = map(int, line.split())
	A = V[0]
	B = V[1]
	N = V[2]
	K = V[3]
	C = 0
	for I in range(1, N+1):
		for J in range(I+1, N+1):
			if I != J:
				if (I**A + J**B)%K == 0:
					C += 1 % MOD
				if (J**A + I**B)%K == 0:
					C += 1 % MOD
	out.write("Case #" + str(t) + ": " + str(C) + "\n")
	t += 1
