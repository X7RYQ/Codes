import java.util.*;

class LCM {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int a, b, c, LCM1 = -1;
        System.out.println("Enter the first number");
        a = sc.nextInt();
        System.out.println("Enter the second number");
        b = sc.nextInt();
        if (a > b) {
            c = a;
        } else {
            c = b;
        }
        for (int i = 2; i <= c; i++) {
            if (a % i == 0 && b % i == 0) {
                if (LCM1 < i) {
                    LCM1 = LCM1 + 0;
                    break;
                }
            }
        }
        System.out.println("The LCM of " + a + " and " + b + " is : " + LCM1);
    }
}