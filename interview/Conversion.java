package DSA.interview;
import java.text.SimpleDateFormat;
import java.util.Date;  

public class Conversion {
    //  How to convert String to int in Java
    static void String2Integer(String str){
        System.out.println(Integer.parseInt(str));
        System.out.println(Integer.valueOf(str));
        System.out.println(Long.parseLong(str));
        System.out.println(Double.parseDouble(str));
        System.out.println(Float.parseFloat(str));
    }
    // Java Convert int to String
    static void int2String(int num){
        System.out.println(String.valueOf(num));
        System.out.println(Integer.toString(num));
        System.out.println(String.format("%d", num));
    }
    // Java String to Date
    static void string2Date(String str) throws Exception{
        SimpleDateFormat format1 = new SimpleDateFormat("dd/MM/yyyy");
        Date d = format1.parse(str);
        System.out.println(str+" = "+d);


    }
    static void bin2dec(int  bin){
        // System.out.println(Integer.parseInt(str, 2));
        int decimal=0, n=0;
        while(true){
            if(bin==0){
                break;
            }else{
                int temp=bin%10;
                decimal+=temp*Math.pow(2,n);
                bin /=10;
                n++;
            }
        }
        System.out.println(decimal);

    }
    // Java Convert Decimal to Binary


    public static void main(String[] args)  throws Exception{
        String2Integer( "200");
        int2String(100);
        string2Date("10/09/2001");
        bin2dec(1111);
    }
}
