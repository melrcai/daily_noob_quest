import java.util.Scanner;

public class ShoppingCart {
    public static void main(String[] args) {
        Scanner console = new Scanner(System.in);

        String item;
        int quantity;
        double price;
        double total;
        char currency = '$';

        System.out.print("\nWhat item would you like to buy?: ");
        item = console.nextLine();

        System.out.print("What is the price for each?: ");
        price = console.nextDouble();

        System.out.print("How many would you like?: ");
        quantity = console.nextInt();

        console.close();        

        total = quantity * price;

        System.out.println("\nYou have bought " + quantity + " " + item +"/s");
        System.out.println("Your total is " + currency + total + "\n");
    }
}