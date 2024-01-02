#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

// Ham nhan 2 ma tran
vector<vector<long long>> multiply(vector<vector<long long>> &A, vector<vector<long long>> &B){
    int rowsA = A.size();
    int colsA = A[0].size();
    int colsB = B[0].size();
    vector<vector<long long>> res(rowsA, vector<long long>(colsB, 0));
    for(int i = 0; i < rowsA; i++){
        for(int j = 0; j < colsB; j++){
            for(int k = 0; k < colsA; k++){
                res[i][j] = (res[i][j] + (A[i][k] * B[k][j]) % MOD) % MOD;
            }
        }
    }
    return res;
}

// Ham tinh luy thua ma tran
vector<vector<long long>> matrix(vector<vector<long long>> &matrix, int power){
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<long long>> res(rows, vector<long long>(cols, 0));
    vector<vector<long long>> temp = matrix;
    for(int i = 0; i < rows; i++){
        res[i][i] = 1;						//Ma tran chuyen vi
    }
    while(power > 0){
        if(power % 2 == 1){
            res = multiply(res, temp);		//Neu so mu le thi nhan ma tran don vi voi tmp
        }
        temp = multiply(temp, temp);		//Neu so mu chan thi nhan ma tran tmp voi tmp
        power /= 2;
    }
    return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
	    cin >> n >> k;
	    vector<vector<long long>> A(n, vector<long long>(n));
	    for(int i = 0; i < n; i++) {
	        for(int j = 0; j < n; j++) {
	            cin >> A[i][j];
	        }
	    }
	    vector<vector<long long>> res = matrix(A, k);
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            cout << res[i][j] << " ";
	        }
	        cout << endl;
	    }
	}
    return 0;
}