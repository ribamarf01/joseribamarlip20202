import sys

def inverterString(str):
    return ''.join(reversed(str))

def estaContido(str1, str2):

    contem = False
    if len(str1) > len(str2):
        for x in range(len(str1)):
            if str1[x] == str2[0]:
                check = 0
                for y in range(len(str2)):
                    if str1[x + y] == str2[y]:
                        check = check + 1
                if check == len(str2):
                    contem = True
                    break
    
    if contem:
        print(f"{str1} contém {str2}")
    else:
        print(f"{str1} não contém {str2}")

def main():
    print(f"{sys.argv[1]}: {len(sys.argv[1])}")
    print(f"{sys.argv[2]}: {len(sys.argv[2])}")

    estaContido(sys.argv[1], sys.argv[2])
    estaContido(sys.argv[2], sys.argv[1])

    print(inverterString(sys.argv[1]))
    print(inverterString(sys.argv[2]))

if __name__ == '__main__':
    main()