package atividades.atividade13;

import java.util.Scanner;

enum Dia {Seg, Ter, Qua, Qui, Sex, Sab, Dom};
enum Mes {Jan, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez};
enum Compra {Farinha, Ovo, Sal, Acucar, Queijo, Calabresa, Oregano, Cebola, Tomate, Fermento};

public class Enumeracoes {

    public static void diaSw(int n) {
        switch(n) {
            case 0:
                System.out.print(Dia.Seg);
                break;
            case 1:
                System.out.print(Dia.Ter);
                break;
            case 2:
                System.out.println(Dia.Qua);
                break;
            case 3:
                System.out.println(Dia.Qui);
                break;
            case 4:
                System.out.println(Dia.Sex);
                break;
            case 5:
                System.out.println(Dia.Sab);
                break;
            case 6:
                System.out.println(Dia.Dom);
                break;
            default:
                System.out.println("Fora da faixa");
                break;
        }
    }

    public static void mesesSw(int n) {
        switch (n) {
            case 0:
                System.out.println(Mes.Jan);
                break;
            case 1: 
                System.out.println(Mes.Fev);
                break;
            case 2:
                System.out.println(Mes.Mar);
                break;
            case 3:
                System.out.println(Mes.Abr); 
                break;
            case 4:
                System.out.println(Mes.Mai); 
                break;
            case 5:
                System.out.println(Mes.Jun);
                break;
            case 6:
                System.out.println(Mes.Jul);
                break;
            case 7:
                System.out.println(Mes.Ago);
                break;
            case 8:
                System.out.println(Mes.Set);
                break;
            case 9:
                System.out.println(Mes.Out);
                break;
            case 10:
                System.out.println(Mes.Nov); 
                break;
            case 11:
                System.out.println(Mes.Dez); 
                break;
            default:
                System.out.println("Fora da faixa");
                break;
        }
    }

    public static void comprasSw(int n) {
        switch (n) {
        case 0:
            System.out.print(Compra.Farinha);
            break;
        case 1:
            System.out.print(Compra.Ovo);
            break;
        case 2:
            System.out.print(Compra.Sal);
            break;
        case 3:
            System.out.print(Compra.Acucar);
            break;
        case 4:
            System.out.print(Compra.Queijo);
            break;
        case 5:
            System.out.print(Compra.Calabresa);
            break;
        case 6:   
            System.out.print(Compra.Oregano);
            break;
        case 7:
            System.out.print(Compra.Cebola);
            break;
        case 8:
            System.out.print(Compra.Tomate);
            break;
        case 9:
            System.out.print(Compra.Fermento);
            break;
        default:
            System.out.println("Fora da faixa");;
            break;
        }
    }

    public static void main(String [] args) {
        Scanner ler = new Scanner(System.in);
        int n = ler.nextInt();

        System.out.print("Dia: "); diaSw(n);
        System.out.print("Mês: "); mesesSw(n); 
        System.out.print("Compra: "); comprasSw(n);
        
        ler.close();
    }

}