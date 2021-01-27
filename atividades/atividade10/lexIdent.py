tokens = {
    'EOF': -1,
    'INT': 10,
    'IDENT': 11,
    '=': 20,
    '+': 21,
    '-': 22,
    '*': 23,
    '/': 24,
    '(': 25,
    ')': 26
}

arquivo = open("front.in", "r")
linha = arquivo.readline()

while linha:
    valores = linha.split()
    for char in range(len(valores)):

        if valores[char].isdigit():
            print(f"Next token is: {tokens['INT']}, Next lexeme is {valores[char]}")
        elif valores[char].isalpha():
            print(f"Next token is: {tokens['IDENT']}, Next lexeme is {valores[char]}")
        else:
            print(f"Next token is: {tokens[valores[char]]}, Next lexeme is: {valores[char]}")

                
    linha = arquivo.readline()
    print(f"Next token is: {tokens['EOF']}, Next lexeme is EOF")