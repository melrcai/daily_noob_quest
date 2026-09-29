import java.util.Scanner;

public class CirArVolCircle {
    public static void main(String[] args) {
/*
        circumference = 2 * Math. PI * radius;
        area = Math. PI * Math. pow(radius, 2);
        volume =  (4.0 / 3.0) * Math. PI Math. pow(radius, 3)
*/
        Scanner console = new Scanner(System.in);

        double radius;
        double area;
        double volume;
        double circumference;

        System.out.print("\nEnter the radius: ");
        radius = console.nextDouble();

        circumference = 2 * Math.PI * radius;
        area = Math. PI * Math.pow(radius, 2);
        volume =  (4.0 / 3.0) * Math.PI * Math.pow(radius, 3);

        console.close();

        System.out.printf("The circumference of the circle is: %.1fcm\n", circumference);
        System.out.printf("The area of the circle is: %.1fcm²\n", area);
        System.out.printf("The volume of the circle is: %.1fcm³\n", volume);
        
    }
}