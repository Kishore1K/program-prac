package DSA.interview;
import java.lang.Math;
class Basic {

    public  static int  Fibonacci(int n){

        if(n==0 || n==1){
            return n;
        }
        return Fibonacci(n-1)+Fibonacci(n-2);
    }

    public static boolean isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2; i<=Math.sqrt(n); i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

    public static boolean isPalandrome(String str){

        for(int i=0; i<str.length(); i++){
            if(str.charAt(i)!=str.charAt(str.length()-i-1)){
                return false;
            }
        }

        return true;
    }

    public static boolean isPalandrome(int n){

        int temp, rem , rev=0;
        temp = n;
        while(temp!=0){
            rem = temp%10;
            rev = rev*10+rem;
            temp= temp/10;
        }

        return n==rev;

    }
    public static boolean isAmstrongNumber(int n){
        
        int temp, sum=0, rem, digit=0;
        temp = n;
        while(temp !=0){
            digit++;
            temp /=10;
        }
        temp = n;
        while(temp !=0){
            rem = temp%10;
            sum = sum+ (int)Math.pow(rem, digit);
            temp = temp/10;
        }

        return n==sum;
    }
    public static int factorial(int n){
        if(n==0 || n==1){
            return 1;
        }
        return n*factorial(n-1);
    }
    public static double randomNumber(int n){
        if(n==1){
            return Math.random()*(100-0+1);
        }
    }
    public static void main(String[] args){
        System.out.println("Fabinocci "+ Fibonacci(10));
        System.out.println("Prime"+ isPrime(6));
        System.out.println("Palandrome "+isPalandrome("Kishore"));
        System.out.println("Palandrome "+isPalandrome(10));
        System.out.println("Amstrong Number "+isAmstrongNumber(1634));
        System.out.println("Factorail Number "+factorial(5));
        System.out.println("Factorail Number "+factorial(5));
        System.out.println("Random Number "+randomNumber());





    }
}