import java.util.Scanner;
class math
{  
       public static int add(int a,int b)
       {
         int x= a+b;
         return x;
       }
       public static int substract(int a,int b)
       {
           int y = a-b;
           return y;
       }
       public static int multiply(int a, int b)
       {
            int z =a*b;
            return z;
       }
       public static float divide(int a,int b)
       {
           float d = (float)a/(float)b;
           return d;
       }
       
}

public class Main 
{
    public static void main (String args[])
    {
        int x1, y1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 2 numbers");
        x1 = sc.nextInt();
        y1 =sc.nextInt();
        System.out.println("Addition="+mathematics.add (x1,y1));
        System.out.println("Substraction="+mathematics.substract (x1,y1));
        System.out.println("Mutliplication="+mathematics.multiply(x1,y1));
        System.out.println("Division="+mathematics.divide (x1,y1));
    }
}