package DSA.interview;

import java.util.Arrays;

public class Strings {
    // Java Program to count the total number of characters in a string
    static int countChar(String str){
        int count=0;
        for(int i= 0;i<str.length(); i++){
            if(str.charAt(i)!=' '){
                count++;
            }
        }
        return count;
    }
    //  Java Program to count the total number of punctuation characters exists in a String
        static int countPunctuations(String str){
        int count=0;
        for(int i= 0;i<str.length(); i++){
            if(str.charAt(i) == '!' || str.charAt(i) == ',' || str.charAt(i) == '.' ||str.charAt(i) ==  '-' ||str.charAt(i) == '\'' ||str.charAt(i) ==  '?' ||str.charAt(i) ==  ';'){
                count++;
            }
        }
        return count;
    }
    static void countVandCon(String str){
        int vowels=0, cons=0;
        for(int i=0; i<str.length(); i++){
            if(str.charAt(i)=='a'|| str.charAt(i)== 'e' ||str.charAt(i)=='i'||str.charAt(i)=='o'||str.charAt(i)=='u'){
                vowels++;
            }else if(str.charAt(i)!=' '){
                cons++;
            }
        }
        System.out.format("The No of Vowles = %d \n The Number of Consunats = %d \n", vowels, cons);

    }
    //  Java Program to determine whether two strings are the anagram
    static boolean isAnagram(String str1, String str2){
        if(str1.length()!=str2.length()){
            return false;
        }
        char []ch1 = str1.toLowerCase().toCharArray();
        char []ch2 = str2.toLowerCase().toCharArray();
        Arrays.sort(ch1);
        Arrays.sort(ch2);

        return Arrays.equals(ch1,ch2);
        
    }

    //  Java Program to divide a string in 'N' equal parts.
    static void divideString(String str, int n){
        String eqString[] = new String[n];
        int temp=0,chars = str.length()/n;

        if(str.length()%n!=0){
            System.out.println("Not divisble");
        }
        for(int i=0; i<str.length(); i+=chars){
            String part = str.substring(i, i+chars);
            eqString[temp]=part;
            temp++;
        }

        System.out.println(Arrays.toString(eqString));

    }
    // Java Program to find all subsets of a string
    static void subsetsString(String str){
        int len = str.length();
        String s1[] = new String[len*(len+1)/2];
        int temp=0;

        for(int i=0; i<len; i++){
            for(int j=i; j<len; j++){
                s1[temp]=str.substring(i, j+1);
                temp++;
            }
        }
        System.out.println(Arrays.toString(s1));
    }
    // Java Program to find the longest repeating sequence in a string
        //Checks for the largest common prefix  
        static String lcp(String s, String t){
            int n = Math.min(s.length(), t.length());
            for(int i=0; i<n; i++){
                if(s.charAt(i)!=t.charAt(i)){
                    return s.substring(0, i);
                }
            }
            return s.substring(0, n);
        }
    static String longestRespatString(String str){
        String lrs="";
        int length = str.length();

        for(int i=0; i<length; i++){
            for(int j=i+1; j<length; j++){
                String x = lcp(str.substring(i, length), str.substring(j, length));
                if(x.length()>lrs.length())
                    lrs=x;
                

            }
        }

        return lrs;
    }

    public static void main(String[] args) {
        System.out.println(countChar("The best of both worlds"));
        System.out.println(countPunctuations("He said, 'The mailman loves you.' I heard it with my own ears."));
        countVandCon("This is a really simple sentence");
        System.out.println(isAnagram("bat", "abt"));
        divideString("aaaabbbbcccc", 3);
        subsetsString("KISHORE");
        System.out.println(longestRespatString("acbdfghybdf"));
    }

}
