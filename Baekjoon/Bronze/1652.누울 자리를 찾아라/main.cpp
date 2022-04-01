#include <iostream>

using namespace std;

int main() {
    int N, cnt;
    char room[100][100];
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> room[i][j];
        }
    }
    
    int widthCNT = 0;
    cnt = 0;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cnt++;
            if (room[i][j] == 'X' || j == N - 1){
                if (room[i][j] == 'X'){
                    cnt--;
                }
                
                if (cnt >= 2){
                    widthCNT++;
                }
                cnt = 0;
            }
        }
    }
    
    int verticalCNT = 0;
    cnt = 0;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cnt++;
            if (room[j][i] == 'X' || j == N - 1){
                if (room[j][i] == 'X'){
                    cnt--;
                }
                
                if (cnt >= 2){
                    verticalCNT++;
                }
                cnt = 0;
            }
        }
    }
    
    cout << widthCNT << " " << verticalCNT << endl;
    
    return 0;
}
