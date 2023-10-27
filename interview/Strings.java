package DSA.interview;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.util.*;

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
    // Java Program to find all the permutations of a string
    static void permutations(String str, String ans){
        int len = str.length();
        if(len==0){
            System.out.println(ans+ " ");
            return;
        }
        for(int i=0; i<len; i++){
            char ch = str.charAt(i);
            String ros = str.substring(0, i)+str.substring(i+1);
            permutations(ros, ans+ch);
        }

    }
    // Java Program to determine whether a given string is palindrome

    static boolean isPalandrome(String str){
        for(int i=0;i<str.length(); i++){
            if(str.charAt(i)!=str.charAt(str.length()-i-1)){
                return false;
            }

        }
        return true;
    }

    // Java Program to determine whether one string is a rotation of another

    static boolean isRotational(String str1, String str2){
        if(str1.length()!=str2.length()){
            return false;
        }else{
            str1=str1.concat(str2);
            
            return str1.indexOf(str2)!=-1;
        }
    }
    // Java Program to find maximum and minimum occurring character in a string
    static void ocChar(String str){
        Map<Character, Integer> map = new HashMap<>();

        for(int i=0; i<str.length(); i++){
            if(!map.containsKey(str.charAt(i))){
                map.put(str.charAt(i), 1);
            }else{
                map.put(str.charAt(i), map.get(str.charAt(i))+1);
            }
        }
        System.out.println(map.values());
    }
    // Java Program to find Reverse of the string
    static String revString(String str){
        // char []ch = str.toCharArray();
        // char temp;
        // for(int i=0;i<ch.length/2; i++ ){
        //     temp = ch[i];
        //     ch[i]= ch[ch.length-i-1];
        //     ch[ch.length-i-1]=temp;
        // }
        // return String.valueOf(ch);
        // or
        // StringBuilder sb = new StringBuilder();
        String revString = "";
        for(int i=str.length()-1; i>=0;i--){
            // sb.append(str.charAt(i));
            revString += str.charAt(i);
        }
        return revString;
    }
    //  Java program to find the duplicate characters in a string
    static void findDuplicateChar(String str){
        // for(int i=0;i<str.length(); i++){
        //     for(int j=i+1; j<str.length(); j++){
        //         if(str.charAt(i)==str.charAt(j) && str.charAt(i)!=' ' ){
        //             System.out.println(str.charAt(i));
        //         }
        //     }
        // }

        Map<Character , Integer> map = new  HashMap<>();
        for(int i=0; i<str.length()-1; i++){
            if(!map.containsKey(str.charAt(i)) && str.charAt(i)!=' '){
                map.put(str.charAt(i), 1);
            }else if(str.charAt(i)!=' '){
                map.put(str.charAt(i), map.get(str.charAt(i))+1);
            }
        }
        System.out.println(map);
        // Iterator<Map.Entry<Character , Integer>> itr = map.entrySet().iterator();
        // while(itr.hasNext()){
        //     Map.Entry<Character, Integer> entry = itr.next();
        //     if(entry.getValue()>1){
        //         System.out.println(entry.getKey());
        //     }
        // }
        // map.forEach((k, v)-> System.out.println(k+" = "+v));
        for(Map.Entry<Character, Integer> entry: map.entrySet()){
            if(entry.getValue()>1){
                System.out.println(entry.getKey());
            }
        }
    }
    // Java Program to find the largest and smallest word in a string.
    static void largAndSmallest(String str){
        String largest, smallest;
        int len=0;
        String word=" ";
        String []s = new String[str.length()];
        for(int i=0; i<str.length(); i++){ 
            if(str.charAt(i)!=' '){
                word+=str.charAt(i);
            }else{
                s[len]=word;
                len++;
                word="";
            }
        }
        largest=smallest=s[0];
        for(int k=0; k<len; k++){
            if(s[k].length()<smallest.length()){
                smallest=s[k];
            }
            if(s[k].length()>largest.length()){
                largest=s[k];
            }
        }
        System.out.println("Smalles Word is = "+smallest+ ", Largest Word is ="+largest);

    }
    // Java Program to find the most repeated word in a text file
    static void mostRepeated() throws IOException{
        String line, word="";
        int count=0, maxCount=0;

        ArrayList<String> words = new ArrayList<>();

        FileReader fileReader = new FileReader("DSA\\interview\\data.txt");
        BufferedReader bufferedReader = new BufferedReader(fileReader);

        // Read Line
        while((line=bufferedReader.readLine())!=null){
            String []strings = line.toLowerCase().split("[,.\\s]+");
            for(String s: strings){
                words.add(s);
            }
        }

        // Determine Most repated
        for(int i=0; i<words.size(); i++){
            count=1;
            for(int j=i+1; j<words.size(); j++){
                if(words.get(i).equals(words.get(j))){
                    count++;
                }
            }
            
            if(count > maxCount){
                maxCount=count;
                word= words.get(i);
            }
        }
        System.out.println("Most repated Word is = "+word);
        bufferedReader.close();


    }
    //  Java Program to find the number of the words in the given text file
    static void coutWords() throws IOException{
        int count=0;
        String line;
        FileReader fileReader = new FileReader("DSA\\interview\\data.txt");
        BufferedReader br = new BufferedReader(fileReader);
        while((line =br.readLine())!=null){
            String strings[] = line.split("[,.\\s]+"); 
            for(String s : strings){
                count++;

            }

        }
        System.out.println("The number of words are = "+count);
        br.close();
        fileReader.close();

    }
    // Java Program to separate the Individual Characters from a String
    static void countCharacters(String str){
        for(int i=0; i<str.length(); i++){
            if(str.charAt(i)!=' '){
                System.out.print(str.charAt(i)+" ");
            }

        }
        System.out.println();
    }

    //  Java Program to swap two string variables without using third or temp variable.
    static void swap2Strings(String str1, String str2){
        System.out.println("String 1 = "+str1+" String 2 = "+str2);
        str1 = str1+str2;
        str2= str1.substring(0, (str1.length()-str2.length()));
        str1=str1.substring(str2.length());
        System.out.println("String 1 = "+str1+" String 2 = "+str2);
    }
    public static void main(String[] args) throws IOException{
/*      System.out.println(countChar("The best of both worlds"));
        System.out.println(countPunctuations("He said, 'The mailman loves you.' I heard it with my own ears."));
        countVandCon("This is a really simple sentence");
        System.out.println(isAnagram("bat", "abt"));
        divideString("aaaabbbbcccc", 3);
        subsetsString("KISHORE");
        System.out.println(longestRespatString("acbdfghybdf"));
        permutations("ABC", "");
        System.out.println(isPalandrome("EYE"));
        System.out.println(isRotational("abcde", "deabc"));
        ocChar("grass is greener on the other side");*/  
        System.out.println(revString("Kishore"));
        findDuplicateChar("Great responsibility");
        largAndSmallest("Hardships often prepare ordinary people for an extraordinary destiny");
        mostRepeated();
        coutWords();
        countCharacters("KISHORE K REDDY");
        swap2Strings("Hello", "World");
    }


}
