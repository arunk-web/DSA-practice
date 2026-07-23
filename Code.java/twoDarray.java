// import java.util.*;

// public class twoDarray{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int rows = sc.nextInt();
//         int columns = sc.nextInt();

//         int[][] marks = new int[rows][columns];

//         for(int i = 0 ; i < rows ; i++){
//             for(int j = 0 ; j < columns ; j++){
//                 marks[i][j] = sc.nextInt();
//             }
//             // System.out.print(i);
//         }

//         // output
//         for(int i = 0 ; i < rows ; i++){
//             for(int j = 0 ; j < columns ; j++){
//                 System.out.print(marks[i][j] + " ");
//             }
//             System.out.println();
//         }

//     }
// }



// Search an element in 2D array.....

import java.util.*;

public class twoDarray{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        int columns = sc.nextInt();

        int[][] marks = new int[rows][columns];

        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < columns ; j++){
                marks[i][j] = sc.nextInt();
            }
            // System.out.print(i);
        }


        int x = sc.nextInt();

        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < columns ; j++){
                if(marks[i][j] == x){
                    System.out.print("x is present at location :  (" + i +", " + j +")");
                }
            }
        }

    }

}
