package DSA.DataStructures.java;
public class Interview{
    // Java program to check whether a given number is prime or composite (non-prime)
    static void primeOrNO(int num){
        boolean flag=true;

        for(int i=2; i<=(num/2); i++){
            if(num%2==0){
                flag=false;
                break;
            }
        }
        if(flag){
            System.out.println("Prime Number");
        }else{
            System.out.println("Not a prime");
        }

    }
    // Given an Integer (Decimal) number and we have to convert it into Octal using java program.
    static void dec2oct(int num){
        int octNum=0;
        int i=1;
        while(num!=0){
            octNum+=num%8*i;
            num/=8;
            i*=10;
        }
        System.out.println("Octal:"+octNum);
    }
    static void dec2bin(int num){
        String bin= "";
        while (num!=0) {
            bin = num%2+bin;
            num/=2;
        }
        System.out.println("Bin:"+bin);
    }
    // Add all digits of a number in java
    static void sumOfDigits(int num){
        int sum = 0;
        while (num!=0) {
            sum+=num%10;
            num/=10;
        
            
        }
        System.out.println(sum);
    }

    static void printNum(){
        for(int i=0; i<10;i++){
            System.out.print(i+" ");

        }
        System.out.println();
    }    
    static void printNumRev(){
        for(int i=10; i>=0;i--){
            System.out.print(i+" ");

        }
        System.out.println();
    }

    static void generateOTP(){
        int randNum = (int)(Math.random()*9000)+1000;
        String otp= String.valueOf(randNum);
        System.out.println(otp);
    }
    static void details(){
        System.out.println("Java Version     : "+System.getProperty("java.version"));
        System.out.println("Java VM Version  : "+System.getProperty("java.vm.version"));
        System.out.println("Java VM Vendor   : "+System.getProperty("java.vm.vendor"));
        System.out.println("Java VM Name     : "+System.getProperty("java.vm.name"));
        System.out.println("Java VM specification Version : "+System.getProperty("java.vm.specification.version"));
        System.out.println("Java VM specification Vendor  : "+System.getProperty("java.vm.specification.vendor"));
        System.out.println("Java VM specification Name    : "+System.getProperty("java.vm.specification.name"));
        System.out.println("Java Runtime specification Version : "+System.getProperty("java.specification.version"));
        System.out.println("Java Runtime specification Vendor  : "+System.getProperty("java.specification.vendor"));
        System.out.println("Java Runtime specification Name    : "+System.getProperty("java.specification.name"));
    }

    public static void main(String[] args) {
        primeOrNO(6);
        dec2oct(222);
        dec2bin(10);
        sumOfDigits(121);

        // Thread t1 = new Thread(Interview::generateOTP);
        // Thread t2 = new Thread(Interview::printNumRev);
        // t1.start();
        // t2.start();
        generateOTP();
        details();

    }
}