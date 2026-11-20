def main():
    n = int(input())
    asum = 0
    for i in range(1, n + 1):
        csum = 1
        for j in range(1, i + 1):
            csum *= j
        asum += csum

    print(asum)

main()