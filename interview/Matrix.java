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
                c[i][j]=a[i][j]-b[i][j];
            }
        }
        return c;
    }
    // Java Program to determine whether two matrices are equal

    static boolean isMatrixEqual(int a[][], int b[][]){
        if(a[0].length!=b[0].length && a[1].length!=b[1].length){
            return false;
        }

        for(int i=0; i<a[0].length;i++){

            for(int j=0; j<a[1].length; j++){
                if(a[i][j]!=b[i][j]){
                    return false;
                }
            }
        }
        return true;
    }   
    // Java Program to display the lower triangular matrix
    static int[][] lowerTriangularMatrix(int a[][]){
        if(a[0].length!=a[1].length){
            return a;
        }
        for(int i=0; i<a[0].length;i++){
            for(int j=0; j<a[0].length; j++){
                if(i>j || i==j){
                    continue;
                }else{
                    a[i][j]=0;
                }
            }
        }
        return a;
    }
    // Java Program to display the upper triangular matrix
        static int[][] upperTriangularMatrix(int a[][]){
        if(a[0].length!=a[1].length){
            return a;
        }
        for(int i=0; i<a[0].length;i++){
            for(int j=0; j<a[0].length; j++){
                if(i<j || i==j){
                    continue;
                }else{
                    a[i][j]=0;
                }
            }
        }
        return a;
    }
    // Java Program to find the frequency of odd & even numbers in the given matrix
    static void frequencyOfElem(int a[][]){
        int odd=0, even=0;
        for(int i=0; i<a[0].length; i++){
            for(int j=0; j<a[1].length; j++){
                if(a[i][j]%2==0){
                    even++;
                }else{odd++;}
            }
        }
        System.out.println("Odd = "+odd+" Even = "+even);
    }
    //  Java Program to find the sum of each row and each column of a matrix
    static void compMatrix(int a[][]){
        int rowSum=0, colSum=0;
        for(int i=0; i<a.length; i++){
            rowSum=0;
            for(int j=0;j<a[0].length; j++){
                rowSum+=a[i][j];
                
            }
            System.out.format("Sum of %d row is = %d\n",i, rowSum);
        }

        for(int i=0; i<a[0].length;i++){
            colSum=0;
            for(int j=0; j<a.length; j++){
                colSum+=a[i][j];
            }
            System.out.format("Sum of %d col is = %d\n",i, colSum);
        }
    }
    //  Java Program to find the transpose of a given matrix
    static int[][] transpose(int a[][]){
        int t[][]=new int[a.length][a[0].length];
        for(int i=0; i<a[0].length;i++){
            for(int j=0; j<a.length; j++){
                t[i][j]=a[j][i];
            }
        }
        return t;
    }
    //  Java Program to determine whether a given matrix is an identity matrix
    //  Java Program to determine whether a given matrix is a sparse matrix
    // Java Program to Transpose matrix
    public static void main(String[] args) {
        /*printMatrix(addMatrix(new int[][]{{1,3,4},{2,4,3},{3,4,5}},new int[][]{{1,3,4},{2,4,3},{1,2,4}}, 3, 3));
        printMatrix(multiplyMatrix(new int[][]{{1,1,1},{2,2,2},{3,3,3}},new int[][]{{1,1,1},{2,2,2},{3,3,3}}));
        printMatrix(subMatrix(new int[][]{ {4, 5, 6},{3, 4, 1},{1, 2, 3}},new int[][]{{2, 0, 3}, {2, 3, 1},{1, 1, 1}  }));
        System.out.println(isMatrixEqual(new int[][]{{1,3,4},{2,4,3},{1,2,4}},new int[][]{{1,3,4},{2,4,3},{1,2,4}}));
        printMatrix(lowerTriangularMatrix(new int[][]{{1,2,3},{8, 6, 4}, {4, 5, 6}}));
        printMatrix(upperTriangularMatrix(new int[][]{{1,2,3},{8, 6, 4}, {4, 5, 6}}));
        frequencyOfElem(new int[][]{{4, 1, 3},{3, 5, 7}, {8, 2, 6}});
        compMatrix(new int[][]{{4, 1, 3},{3, 5, 7}, {8, 2, 6}});*/
        printMatrix(new int[][]{{4, 1, 3},{3, 5, 7}, {8, 2, 6}});
        printMatrix(transpose(new int[][]{{4, 1, 3},{3, 5, 7}, {8, 2, 6}}));
        

    }
    
}
