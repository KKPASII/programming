class Solution {
    public int[][] solution(int[][] arr1, int[][] arr2) {
        // arr1[m][k] x arr2[k][n]
        int[][] answer = new int[arr1.length][arr2[0].length];
        
        // 행렬 곱셈 : arr1의 행 × arr2의 열
        for (int m = 0; m < answer.length; m++) { // m
            for (int n = 0; n < answer[0].length; n++) { // n
                for (int k = 0; k < arr1[0].length; k++) { // k
                    answer[m][n] += arr1[m][k] * arr2[k][n];
                }
            }
        }
        
        return answer;
    }
}