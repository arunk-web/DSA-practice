import java.util.*;
public class cellIn2D {
    public static boolean Search(int matrix[][] , int key){
        // int rows = sc.nextInt();
        // int colm = sc.nextInt();
        int rows = matrix.length;
        int colm = matrix[0].length;
        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < colm ; j++){
                if(matrix[i][j] == key){
                    System.out.print("key found at cell : ("+ i + "," + j + ")");
                    return true;
                }
            }
        }
        System.out.println("key not find");
        return false;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        int colm = sc.nextInt();

        int matrix[][] = new int[rows][colm];
        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < colm ; j++){
                matrix[i][j] = sc.nextInt();
            }
        }
        
        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < colm ; j++){
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    Search(matrix,5);
}
// Search(matrix,5);
