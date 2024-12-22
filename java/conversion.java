import java.util.Scanner;

public class conversion {
    public static void main(String[] args) {
        // Variable declaration
        byte b;
        
        // Creating scanner object to get user input
        Scanner sc = new Scanner(System.in);

        // Taking integer input
        System.out.println("Enter the value of integer (i):");
        int i = sc.nextInt();

        // Taking double input
        System.out.println("Enter the value of decimal (d):");
        double d = sc.nextDouble();

        // Conversion from int to byte
        System.out.println("Conversion of int to byte:");
        b = (byte) i;
        System.out.println("Integer i: " + i + " converted to Byte b: " + b);

        // Conversion from double to int
        System.out.println("Conversion of double to int:");
        i = (int) d;
        System.out.println("Double d: " + d + " converted to Integer i: " + i);

        // Conversion from double to byte
        System.out.println("Conversion of double to byte:");
        b = (byte) d;
        System.out.println("Double d: " + d + " converted to Byte b: " + b);

        // Closing scanner to avoid resource leak
        sc.close();
    }
}

