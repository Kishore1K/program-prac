package DSA.interview;

public class Conversion {
    //  How to convert String to int in Java
    static void String2Integer(String str){
        System.out.println(Integer.parseInt(str));
        System.out.println(Integer.valueOf(str));
    }
    public static void main(String[] args) {
        String2Integer( "200");
    }
}
