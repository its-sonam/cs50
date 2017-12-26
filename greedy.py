import cs50

def main():
    while True:
        print("owed ? : ")
        dollar= cs50.get_float()
        if dollar >= 0:
            break

    n = 0
    cents = int(round(dollar * 100))

    n += cents // 25
    cents %= 25

    n+= cents // 10
    cents %= 10

    n += cents // 5
    cents %= 5

    n += cents

    print("{}".format(n))

if __name__ == "__main__":
    main()