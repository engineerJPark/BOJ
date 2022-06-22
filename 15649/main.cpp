#include <iostream>
#define MAX 9
using namespace std;

int N, M;
int arr[MAX] = {0,};
bool visited[MAX] = {0,};


void backtracking(int count){ // count = 0부터 시작한다.
  if(count == M){
    for (int i = 0; i < M; i++){
      cout << arr[i] << ' ';
    }
    cout << '\n';
    return ;
  }
  
  for(int i = 1; i <= N; i++){ // 여기에 Stack으로써 쌓아둔다.
    if(!visited[i]){
      visited[i] = true;
      arr[count] = i; // i 저장
      backtracking(count + 1);
      visited[i] = false;
    }
  }
}

int main(){
  cin >> N >> M;
  backtracking(0);
  return 0;
}

// DFS를 이용해서 순열을 구할 수 있다.