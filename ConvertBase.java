import java.util.Scanner;
import java.math.BigInteger;

class ConvertBase {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int x = sc.nextInt();
        int y = sc.nextInt();

        System.out.println(new BigInteger(str, x).toString(y));
    }

}
