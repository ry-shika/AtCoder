#include <iostream>
#include <string>
#include <array>
#include <vector>

#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> hitblow;

/* 重複のないことを確認
        std::vector<int> number(4) ;

        for(i = 0;i =< 9;i++){
        countresult = std::count(number.begin(), number.end(), i);
            if(2 =< countresult){
            cout << "同じ数字を入力しないでください" << endl;
            }
        } */

class CPU{
    public:
    array<int, 4> actual;
    //コンストラクタ
    CPU(){
        int r;
        srand((unsigned)time(NULL));
        for ( int i = 0; i < 4 ; i++ ){
            actual[i] = 10;
        }
        
        for ( int i = 0; i < 4 ; i++ ){
            while(actual[i] > 9){
                r = rand() %10;
                if ((r != actual[0]) && (r != actual[1]) && (r != actual[2]) && (r != actual[3])){
                    actual[i] = r;
                }
            }
        }
    }

    // hit/blowのカウント
    hitblow hitnblow (int num){
        vector<int> guess;
        vector<int> actual; 
        string s;
    
        guess.insert(guess.begin() + 0, num / 1000);
        guess.insert(guess.begin() + 1, (num % 1000) / 100);
        guess.insert(guess.begin() + 2, (num % 100) / 10);
        guess.insert(guess.begin() + 3, num / 10;



    int hit = 0;
    int blow = 0;
    for ( int i = 0; i < 4 ; i++ ) {
        for ( int j = 0; j < 4; j++ ) {
            if ( actual[i] == guess[j] ) {
                if ( i == j ) {
                    hit++;
                } 
                else blow++;
            }
        }
    }

    hitblow hb(hit,blow);
    return hb;
    }
};

int main(){

    CPU c ;
    int num2;
    cout << "4桁の数字を重複せず入力してください" << endl;
    do {
        cin >> num2;
        hitblow hb = c.hitnblow(num2);
        cout << "現在のヒット/ブロー数は" << hb.first + "," + hb.second << "です。" << endl;
        if (hb.first == 4){
            cout << "正解!" << endl;
            break;
        }
    } while (true);

}