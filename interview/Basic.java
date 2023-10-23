package DSA.interview;
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

    public static void main(String[] args){
        System.out.println("Fabinocci "+ Fibonacci(10));
        System.out.println("Prime"+ isPrime(6));
    }
}