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
    
    public static void main(String[] args) {
        System.out.println(countChar("The best of both worlds"));
        System.out.println(countPunctuations("He said, 'The mailman loves you.' I heard it with my own ears."));
        countVandCon("This is a really simple sentence");
        System.out.println(isAnagram("bat", "abt"));
    }

}
