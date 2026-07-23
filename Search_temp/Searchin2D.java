
import java.lang.annotation.Retention;

public class Searchin2D {
    public static int Search(int matrix[][],int key) {
        for(int i = 0 ; i <= matrix.length ; i++) {
            for(int j = 0 ; j <= matrix[0].length ; j++ ) {
                if( key == matrix[i][j]) {
                    return "(" + i + "," + j+ ")";
                }
            }
        }
        return -1;
    }
    
    public static void main(String[] args) {
        
    }
}
