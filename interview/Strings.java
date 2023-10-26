package DSA.interview;

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
            if(str.charAt(i)!=' '){
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        System.out.println(countChar("The best of both worlds"));
    }
}
