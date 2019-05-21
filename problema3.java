import java.util.Scanner;
public class problema3{
	public static void main(String []args){
		Scanner input = new Scanner(System.in);
		int n, c, a, b;
		double ac, bc;
		
		c=0;
		a = input.nextInt();
		b = input.nextInt();
		ac = input.nextDouble();
		bc = input.nextDouble();
		while (a <= b) { // enquanto a for menor, ele vai realizando os calculos 
			a *= (ac / 100.0) + 1.0;
			b *= (bc / 100.0) + 1.0;
			c++;
			if (c>100) { // se c passar de 100, então vai ser mais de um seculo
				System.out.println("Mais de 1 seculo.");
				break; // para sair do while
			}
		}
		if (c <= 100) {
			System.out.println(c + " anos.");
		}	
	}
}