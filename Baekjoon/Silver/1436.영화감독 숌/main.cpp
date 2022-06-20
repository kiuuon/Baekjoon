#include <iostream>

using namespace std;

int main() {
    int N;
    int cnt = 0;
    
    cin >> N;
    
    for (int i = 666;; i++){
        int num = i;
        while(num){
            if (num % 1000 == 666){
                cnt++;
                if (cnt == N){
                    cout << i << endl;
                    return 0;
                }
                break;
            }
            num = num / 10;
        }
    }
}
