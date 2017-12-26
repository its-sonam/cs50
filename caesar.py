import cs50
import sys

def main():
    if len(sys.argv) != 2:
        exit(1)

    cmd = int(sys.argv[1])
    code = []
    msg = cs50.get_string()
    for symbol in msg:
        if symbol.isalpha():
            code.append(caesar(symbol, cmd))
        else:
            code.append(symbol)

    print("".join(code))
    exit(0)

def caesar(char, cmd):
    if char.isupper():
        return chr(((ord(char) - 65 + cmd) % 26) + 65)
    else:
        return chr(((ord(char) - 97 + cmd) % 26) + 97)

if __name__ == "__main__":
    main()