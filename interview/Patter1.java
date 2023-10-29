package DSA.interview;

public class Patter1 {
   /*
    5432*
    543*1
    54*21
    5*321
    *4321
    */
    static void pattern1(){
        for(int i=1; i<=5; i++){
            for(int j=5; j>0; j--){
                if(i==j){
                    System.out.print("*");
                }else{
                    System.out.print(j);
                }
            }
            System.out.println();
        }
    }
    static void pattern2(){
        for(int i=1; i<=10; i++){
            for(int j=1; j<=i; j++){
                System.out.print(( i*j)+ "  ");
            }
            System.out.println();
        
        }
    }

    public static void main(String[] args) {
        pattern2();
        
    }
    
}
