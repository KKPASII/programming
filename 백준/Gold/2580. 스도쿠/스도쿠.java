import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;
public class Main {
    static int[][] board;
    static int n = 9;
    static List<int[]> blank;
    static int[][] answer;
    public static void saveBoard() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                answer[i][j] = board[i][j];
            }
        }
    }
    public static void printBoard() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(answer[i][j] + " ");
            }
            System.out.println();
        }
    }
    public static boolean checkRange(int curRow, int curCol, int num) {
        for (int col = 0; col < n; col++) {
            if (col != curCol && board[curRow][col] == num) {
                return false;
            }
        }
        for (int row = 0; row < n; row++) {
            if (row != curRow && board[row][curCol] == num) {
                return false;
            }
        }
        int bigRow = curRow / 3 * 3;
        int bigCol = curCol / 3 * 3;
        for (int row = bigRow; row < bigRow+3; row++) {
            for (int col = bigCol; col < bigCol+3; col++) {
                if (curRow != row && curCol != col && board[row][col] == num) {
                    return false;
                }
            }
        }
        return true;
    }
    public static void dfs(int depth) {
        if (depth == blank.size()) {
            saveBoard();
            return;
        }
        int row = blank.get(depth)[0];
        int col = blank.get(depth)[1];
        for (int num = 1; num <= 9; num++) {
            if (checkRange(row, col, num)) {
                board[row][col] = num;
                dfs(depth + 1);
                board[row][col] = 0;
            }
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        board = new int[n][n];
        answer = new int[n][n];
        blank = new ArrayList<int[]>();
        for (int i = 0; i < n; i++) {
            String line = br.readLine();
            st = new StringTokenizer(line);
            for (int j = 0; j < n; j++) {
                board[i][j] = Integer.parseInt(st.nextToken());
                if (board[i][j] == 0) {
                    blank.add(new int[]{i, j});
                }
            }
        }
        dfs(0);
        printBoard();
    }
}