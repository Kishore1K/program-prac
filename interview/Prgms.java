package DSA.interview;

public class Prgms {
    // Write a program in Java to generate the Nth Fibonacci Number using Iteration and Constant Space.
    static void Fibonacci(int num){
        int a=0, b=1;
        if(num==0)System.out.println(a);
        else if (num==1) System.out.println(b);
        else{
            int c=0;
            for(int i=2; i<=num; i++){
                c=a+b;
                a=b;
                b =c;

            }
            System.out.println(c);
        }
    }
    // 2. Write a program in Java to count the digits in a number.

    static void countDigits(int nums){
        int count=0;
        while (nums!=0) {
            count++;
            nums/=10;
        }
        System.out.println(count);
    }
    // Write a program in Java to calculate the number of times a digit ‘D’ appears in a number N. You have to take N and D as inputs from the user.
    static void countDigits(int nums, int val){
        int count=0;
        while (nums!=0) {
            if(nums%10==val)count++;
            nums/=10;
        }
        System.out.println(count);
    }
    //  Write a Java Program to calculate xn (x to the power n) using Recursion. 
    //  You can use O(N) time but can’t use any extra space apart from the Recursion Call Stack Space.
    public static void main(String[] args) {
        Fibonacci(7);
        countDigits(12345);
        countDigits(142311, 1);
    }
}
