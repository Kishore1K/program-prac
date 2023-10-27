package DSA.interview;

import java.util.*;

public class Number {

    static int revNumber(int num){
        int rev=0;
        while(num>0){
            rev = rev * 10 + (num%10);
            num = num/10;
        }
        return rev;
    }

    static int countWords(String str){
        int count =0;

        for(int i=0; i<str.length(); i++){
            if(str.charAt(i)==' ' || (str.charAt(i)==' ' && str.charAt(i+1)==' ')){
               count++;
            }
        }

        return count;
    }
    // isAutomorphic 25*25 = 625 in 625 last 2 digit are 25 so its automorphic..
    static boolean isAutomorphic(int num){
        int square = num*num, count=0;
        System.out.println("Num = "+num+ ", Square ="+square);
        int temp= num;
        while(temp>0){
            count++;
            temp/=10;
        }
        int lastDigit = (int) (square%Math.pow(10, count));
        return lastDigit==num;

    }

    static int factorail(int num){
        if(num==0 ||num==1){
            return 1;
        }
        return num*factorail(num-1);
    }


    static boolean isPetersonNumber(int num){
        int temp, sum=0;
        temp = num;
        while(temp>0){
            int digit = temp%10;
            sum = sum + factorail(digit);
            temp/=10;
        }
        return num==sum;

    }

    static int nPrime(int n){
        int count=0, num=1, i;
        while(count < n){
            num+=1;
            for(i=2; i<=num; i++){
                if(num%i==0){
                    break;
                }
            }
            if(num==i){
                count++;
            }


        }
        return num;
    }

    static int[] swap(int a, int b){
        // a = a^b;
        // b = a^b;
        // a = a^b;

        a = a*b;
        b = a/b;
        a = a/b;

        return new int[]{a, b};
    }
    // Find GCD of Two Numbers
    static int gcd(int a, int b){

        while(b!=0){
            if(a>b){
                a=a-b;
            }else{
                b = b-a;
            }
        }
        return a;
    }
    static boolean isPerfectSquare(int num){
        for(int i=1; i*i<=num; i++){
            if((num%i==0) && (num/i==i)){
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        System.out.println(revNumber(102));
        System.out.println(countWords("Hello  Kishore K Reddy Karthick"));
        System.out.println(isAutomorphic(5)); //76 ,23
        System.out.println(isPetersonNumber(145)); //773
        System.out.println(Arrays.toString(swap(10, 20)));
        System.out.println(gcd(12, 8));
        System.out.println(isPerfectSquare(64));
    }
    
}
