import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.Scanner;

class BankAccount {
    private String accountNumber;
    private String accountHolderName;
    private double balance;
    private String pin;
    private ArrayList<String> transactionHistory = new ArrayList<>();

    // Constructor to initialize account details
    public BankAccount(String accountNumber, String accountHolderName, double initialBalance, String pin) {
        this.accountNumber = accountNumber;
        this.accountHolderName = accountHolderName;
        this.balance = initialBalance;
        this.pin = pin;
        transactionHistory.add("Account created with initial balance: $" + initialBalance);
    }

    // Getter for account number
    public String getAccountNumber() {
        return accountNumber;
    }

    // Method to authenticate user with PIN
    public boolean authenticate(String inputPin) {
        return this.pin.equals(inputPin);
    }

    // Method to deposit money
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            transactionHistory.add("Deposited: $" + amount + ", Balance: $" + balance);
            System.out.println("Deposited: $" + amount);
        } else {
            System.out.println("Invalid deposit amount.");
        }
    }

    // Method to withdraw money
    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            transactionHistory.add("Withdrawn: $" + amount + ", Balance: $" + balance);
            System.out.println("Withdrawn: $" + amount);
        } else {
            System.out.println("Invalid withdrawal amount or insufficient balance.");
        }
    }

    // Method to check balance
    public void checkBalance() {
        System.out.println("Current balance: $" + balance);
    }

    // Method to display account details
    public void displayAccountDetails() {
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Account Holder Name: " + accountHolderName);
        System.out.println("Balance: $" + balance);
    }

    // Method to display transaction history
    public void displayTransactionHistory() {
        System.out.println("Transaction History:");
        for (String transaction : transactionHistory) {
            System.out.println(transaction);
        }
    }
}

public class BankManagementSystem {
    private static ArrayList<BankAccount> accounts = new ArrayList<>();
    private static Scanner scanner = new Scanner(System.in);

    // Method to create a new account
    private static void createAccount() {
        System.out.print("Enter Account Number: ");
        String accountNumber = scanner.nextLine();

        // Check for duplicate account numbers
        if (findAccount(accountNumber) != null) {
            System.out.println("Account number already exists. Please try a different number.");
            return;
        }

        System.out.print("Enter Account Holder Name: ");
        String accountHolderName = scanner.nextLine();

        double initialDeposit = 0;
        while (true) {
            try {
                System.out.print("Enter Initial Deposit Amount: ");
                initialDeposit = scanner.nextDouble();
                if (initialDeposit < 0) {
                    System.out.println("Initial deposit cannot be negative.");
                } else {
                    break;
                }
            } catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter a numeric value.");
                scanner.nextLine(); // Clear invalid input
            }
        }

        scanner.nextLine(); // Consume newline

        String pin;
        while (true) {
            System.out.print("Set a 4-digit PIN: ");
            pin = scanner.nextLine();
            if (pin.matches("\\d{4}")) {
                break;
            } else {
                System.out.println("Invalid PIN. Please enter a 4-digit number.");
            }
        }

        BankAccount account = new BankAccount(accountNumber, accountHolderName, initialDeposit, pin);
        accounts.add(account);
        System.out.println("Account created successfully!");
    }

    // Method to find an account by account number
    private static BankAccount findAccount(String accountNumber) {
        for (BankAccount account : accounts) {
            if (accountNumber.equals(account.getAccountNumber())) {
                return account;
            }
        }
        return null;
    }

    // Method to authenticate and log into an account
    private static void login() {
        System.out.print("Enter Account Number: ");
        String accountNumber = scanner.nextLine();

        BankAccount account = findAccount(accountNumber);

        if (account == null) {
            System.out.println("Account not found.");
            return;
        }

        System.out.print("Enter 4-digit PIN: ");
        String pin = scanner.nextLine();

        if (!account.authenticate(pin)) {
            System.out.println("Incorrect PIN. Access denied.");
            return;
        }

        System.out.println("Login successful!");

        boolean exit = false;
        while (!exit) {
            System.out.println("\nBank Account Management System");
            System.out.println("1. Deposit");
            System.out.println("2. Withdraw");
            System.out.println("3. Check Balance");
            System.out.println("4. Display Account Details");
            System.out.println("5. View Transaction History");
            System.out.println("6. Logout");
            System.out.print("Choose an option: ");

            try {
                int choice = scanner.nextInt();
                switch (choice) {
                    case 1:
                        System.out.print("Enter deposit amount: ");
                        double depositAmount = scanner.nextDouble();
                        account.deposit(depositAmount);
                        break;
                    case 2:
                        System.out.print("Enter withdrawal amount: ");
                        double withdrawAmount = scanner.nextDouble();
                        account.withdraw(withdrawAmount);
                        break;
                    case 3:
                        account.checkBalance();
                        break;
                    case 4:
                        account.displayAccountDetails();
                        break;
                    case 5:
                        account.displayTransactionHistory();
                        break;
                    case 6:
                        System.out.println("Are you sure you want to logout? (yes/no)");
                        scanner.nextLine(); // Consume newline
                        String confirmation = scanner.nextLine();
                        if (confirmation.equalsIgnoreCase("yes")) {
                            System.out.println("Logging out...");
                            exit = true;
                        }
                        break;
                    default:
                        System.out.println("Invalid option. Please try again.");
                }
            } catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter a number between 1 and 6.");
                scanner.nextLine(); // Clear invalid input
            }
        }
    }

    public static void main(String[] args) {
        boolean exit = false;
        while (!exit) {
            System.out.println("\nWelcome to the Bank Management System");
            System.out.println("1. Create New Account");
            System.out.println("2. Login to Existing Account");
            System.out.println("3. Exit");
            System.out.print("Choose an option: ");

            try {
                int choice = scanner.nextInt();
                scanner.nextLine(); // Consume newline

                switch (choice) {
                    case 1:
                        createAccount();
                        break;
                    case 2:
                        login();
                        break;
                    case 3:
                        System.out.println("Exiting the system...");
                        exit = true;
                        break;
                    default:
                        System.out.println("Invalid option. Please try again.");
                }
            } catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter a number between 1 and 3.");
                scanner.nextLine(); // Clear invalid input
            }
        }

        scanner.close();
    }
}
