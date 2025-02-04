import java.util.Locale;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner ler = new Scanner(System.in);

        int cod1 = ler.nextInt();
        int peca1 = ler.nextInt();
        double valorPeca1 = ler.nextDouble();

        int cod2 = ler.nextInt();
        int peca2 = ler.nextInt();
        double valorPeca2 = ler.nextDouble();

        double total = peca1 * valorPeca1 + peca2 * valorPeca2;

        System.out.printf("VALOR A PAGAR: R$ %.2f%n", total);

        ler.close();
    }
}