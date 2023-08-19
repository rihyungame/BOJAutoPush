def find_continuous_sequence(N, L):
    for length in range(L, 101):
        a = (2 * N - length * (length - 1))
        if a % (2 * length) == 0 and a >= 0:
            start = a // (2 * length)
            sequence = list(range(start, start + length))
            return sequence
    return -1

# 입력 받기
N, L = map(int, input().split())

# 문제 해결 함수 호출
result = find_continuous_sequence(N, L)

# 결과 출력
if result == -1:
    print(-1)
else:
    print(" ".join(map(str, result)))