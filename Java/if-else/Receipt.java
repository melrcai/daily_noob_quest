public class Receipt {
    public static void main(String[] args) {
        // Compute total owed, assuming 8% tax and 15% tip
        double tax = 0.08;
        double tip = 0.15;
        int subTotal = (38 + 40 + 30);

        System.out.println("Subtotal: " + subTotal);
        System.out.println("Tax: " + subTotal * tax);
        System.out.println("Tip: " + subTotal * tip);
        System.out.println("Total: " + (subTotal + (subTotal * tax) + (subTotal * tip)));
    }
}