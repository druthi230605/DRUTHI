import java.util.Scanner;

public class linecode{
    static void unipolarNRZ(int[] data) {
        System.out.println("\nUnipolar NRZ Line Coding:\n");

        
        for (int bit : data) {
            if (bit == 1) {
                System.out.print("|-|  "); // Vertical bars for 1
            } else {
                System.out.print("|_| "); // Only one vertical bar for 0
            }
        }
        System.out.println("\n");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // Scanner for input
        System.out.println("Enter the number of bits in data:");
        int n = sc.nextInt(); // Input: number of bits

        int[] data = new int[n]; // Array to hold binary data
        System.out.println("Enter binary data (0s and 1s):");
        for (int i = 0; i < n; i++) {
            data[i] = sc.nextInt(); // Input: binary data
        }

        // Call the function to display Unipolar NRZ line coding
        unipolarNRZ(data);

        sc.close(); // Close the scanner
    }
}
