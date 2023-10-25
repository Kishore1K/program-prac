package DSA.interview;

public class Matrix {

    static int[][] addMatrix(int a[][], int b[][], int m, int n){
        int c[][]= new int[m][n];
        for(int i=0; i<m; i++){
            for(int j = 0; j<n; j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        return c;
    }

    static void printMatrix(int a[][]){
        for(int i=0; i<a[0].length; i++){
            for(int j=0; j<a[1].length; j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.println();

        }
    }

    // Java Program to Multiply Two Matrices
    static int[][] multiplyMatrix(int a[][], int b[][]){
        int c[][]= new int[a[0].length][b[1].length];
        for(int i=0; i<a[0].length; i++){
            for(int j=0; j<b[1].length;j++){
                c[i][j]=0;
                for(int k=0; k<b[1].length;k++){
                    c[i][j] += a[i][k]*b[k][j];

                }
            }
        }
        return c;
    }

        static int[][] subMatrix(int a[][], int b[][]){
        int c[][]= new int[a[0].length][b[1].length];
        for(int i=0; i<a[0].length; i++){
            for(int j = 0; j<b[1].length; j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        return c;
    }

    public static void main(String[] args) {
        printMatrix(addMatrix(new int[][]{{1,3,4},{2,4,3},{3,4,5}},new int[][]{{1,3,4},{2,4,3},{1,2,4}}, 3, 3));
        printMatrix(multiplyMatrix(new int[][]{{1,1,1},{2,2,2},{3,3,3}},new int[][]{{1,1,1},{2,2,2},{3,3,3}}));

    }
    
}
