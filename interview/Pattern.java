package DSA.interview;

public class Pattern {
    public static void pattern1(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                System.out.print("*");
            }
        System.out.println("");

        }
    }
    public static void pattern2(int n){
        for(int i=n; i>=0; i--){
            for(int j=0; j<=i; j++){
                System.out.print("*");

            }
        System.out.println("");
        }
    }
    // Square hollow pattern 

        public static void pattern3(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n;j++){
                if(i==0 || j==0|| i==n-1|| j==n-1){
                    System.out.print("*");
                }
                System.out.print(" ");
            }
            System.out.println();
            
        }
    }
        // Number triangle Pattern

    public static void pattern4(int n){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i; j++){
                System.out.print(" ");
            }
            for(int j=1; j<=i; j++){
                System.out.print(i+ " ");
            }
            System.out.println();
        }
    }
    // Number-increasing Pyramid Pattern 
    public static void pattern5(int n){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                System.out.print(j+ " ");
            }
            System.out.println();
        }

    }

    //  Number-increasing reverse Pyramid Pattern
    public static void pattern6(int n){
        for(int i=n; i>=1; i--){
            for(int j=1; j<=i; j++){
                System.out.print(j+ " ");
            }
            System.out.println();
        }
    }

    // Number-changing Pyramid Pattern
    public static void pattern7(int n){
        int count=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                count++;
                System.out.print(count+ " ");
            }
            System.out.println();
        }
    }
// Zero-One Triangle Pattern
    public static void pattern8(int n){
        for(int i =1; i<=n; i++){
            for(int j=1; j<=i; j++){
                if((i+j)%2==0){
                    System.out.print(1+ " ");
                }else{
                    System.out.print(0 + " ");
                }
            }
            System.out.println();
        }
    }
    // Palindrome Triangle Pattern
    public static void pattern9(int n){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=2* (n-i); j++){
                System.out.print(" ");
            }
            for(int j=i; j>=1; j--){
                System.out.print(j+" ");
            }
            for(int j=2; j<=i; j++){
                System.out.print(j + " ");
            }
            System.out.println();
        }

    }
    // Rhombus Pattern
    public static void pattern10(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i;j++ ){
                System.out.print(" ");
            }
            for(int j=0; j<n; j++ ){
                System.out.print("*");

            }
            System.out.println();
        }
    }

    // Diamond Star Pattern
    public static void pattern11(int n){
         int i, j;
         for (i = 1; i <= n; i++) { 
            for (j = 1; j <= n - i; j++) { 
                System.out.print(" "); 
            } 
            for (j = 1; j <= 2 * i - 1; j++) { 
                System.out.print("*"); 
            } 
            System.out.println(); 
        } 
  
        for (i = n-1; i >= 1; i--) { 
            for (j = 1; j <= n - i; j++) { 
                System.out.print(" "); 
            } 
            for (j = 1; j <= 2 * i - 1; j++) { 
                System.out.print("*"); 
            } 
            System.out.println(); 
            } 
    }
    static void pattern12(int n){
        for(int i=n; i>=1; i--){
            for(int j =1; j<=i; j++){
                System.out.print(" * ");
            }
            System.out.println();
        }
    }
    // Left Half Pyramid Pattern
    static void pattern13(int n){
        int i, j; 
  
        // outer loop to handle rows 
        for (i = n; i >= 1; i--) { 
  
            // inner loop to print spaces. 
            for (j = 1; j < i; j++) { 
                System.out.print(" "); 
            } 
  
            // inner loop to print stars. 
            for (j = 0; j <= n - i; j++) { 
                System.out.print("*"); 
            } 
  
            // printing new line for each row 
            System.out.println(); 
        } 
    }
    //  Pascal’s Triangle

    public static void printPascal(int n) 
    { 
        for (int i = 1; i <= n; i++) { 
            for (int j = 0; j <= n - i; j++) { 
  
                System.out.print(" "); 
            } 
  
            int x = 1; 
            for (int k = 1; k <= i; k++) { 
                  System.out.print(x + " "); 
                x = x * (i - k) / k; 
            } 
            System.out.println(); 
        } 
    } 

    public static void main(String[] args) {
        // pattern1(5);
        // pattern2(5);
        printPascal(6);

    }
}
