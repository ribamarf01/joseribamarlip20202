package atividades.atividade13;

public class TiposPrimitivos {

    public static void main(String [] args) {
        int mod = Integer.parseInt(args[0]);
        int inteiro = 2;

        for (int j = 0; j < 29; j++) { inteiro *= 2; } 
        inteiro = inteiro + (inteiro - 1);
        for(;;) {
            if (inteiro % mod == 0) break;
            else inteiro--;
        }
        System.out.println("Maior Multiplo: " + inteiro);
    }
    
}