# Converta as rotinas de análise sintática descendente recursiva para <expr>, <term> e <factor> dadas na seção 4.4.1 para Python. 
# Aqui, não precisamos do código executável, pois o próprio livro não apresenta assim. 
# Mas nada impede de você fazer uma versão mais completa. 
# Coloque o resultado no arquivo questao01.py

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

nextToken = ''

def expr():
    print("Enter <expr>\n")
    term()

    while nextToken == tokens['+'] or nextToken == tokens['-']:
        lex()
        term()

    print("Exit <expr>\n")

def term():
    print("Enter <term>\n")
    factor()

    while nextToken == tokens['+'] or nextToken == tokens['-']:
        lex()
        factor()

    print("Exit <term>")

def factor():
    print("Enter <factor>\n")
    if nextToken == tokens['ident'] or nextToken == tokens['INT_LIT']:
        lex()
    else:
        if nextToken == LEFT_PARENT:
            lex()
            expr()
            if nextToken == RIGHT_PARENT:
                lex()
            else:
                error()
        else:
            error()
    print("Exit <factor>\n")
