#include <iostream>

enum dias {Seg, Ter, Qua, Qui, Sex, Sab, Dom};
enum meses {Jan, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez};
enum compras {Farinha, Ovo, Sal, Acucar, Queijo, Calabresa, Oregano, Cebola, Tomate, Fermento};

void diasSw(int n);
void mesesSw(int n);
void comprasSw(int n);

int main(int argc, char *argv[]) {

    int numero;

    std::cin >> numero;

    std::cout << "Dia: ";
    diasSw(numero);
    std::cout << std::endl;

    std::cout << "Mes: ";
    mesesSw(numero);
    std::cout << std::endl;

    std::cout << "Compra: ";
    comprasSw(numero);
    std::cout << std::endl;

    return 0;
}

void diasSw(int n) {
    switch (n){
    case Seg:
        printf("Segunda");
        break;
    case Ter:
        printf("Terca");
        break;
    case Qua:
        printf("Quarta");
        break;
    case Qui:
        printf("Quinta");
        break;
    case Sex:
        printf("Sexta");
        break;
    case Sab:
        printf("Sabado");
        break;
    case Dom:
        printf("Domingo");
        break;
    default:
        std::cout << "Fora da faixa";
        break;
    }
}

void mesesSw(int n) {
    switch (n) {
        case Jan:
            printf("Janeiro");
            break;
        case Fev: 
            printf("Fevereiro");
            break;
        case Mar:
            printf("Março");
            break;
        case Abr:
            printf("Abril");
            break;
        case Mai:
            printf("Maio");
            break;
        case Jun:
            printf("Junho");
            break;
        case Jul:
            printf("Julho");
            break;
        case Ago:
            printf("Agosto");
            break;
        case Set:
            printf("Setembro");
            break;
        case Out:
            printf("Outubro");
            break;
        case Nov:
            printf("Novembro");
            break;
        case Dez:
            printf("Dezembro");
            break;
        default:
            std::cout << "Fora da faixa";
            break;
    }
}

void comprasSw(int n) {
    switch (n)
    {
    case Farinha:
        printf("Farinha");
        break;
    case Ovo:
        printf("Ovo");
        break;
    case Sal:
        printf("Sal");
        break;
    case Acucar:
        printf("Acucar");
        break;
    case Queijo:
        printf("Queijo");
        break;
    case Calabresa:
        printf("Calabresa");
        break;
    case Oregano:   
        printf("Oregano");
        break;
    case Cebola:
        printf("Cebola");
        break;
    case Tomate:
        printf("Tomate");
        break;
    case Fermento:
        printf("Fermento");
        break;
    default:
        std::cout << "Fora da faixa";
        break;
    }
}