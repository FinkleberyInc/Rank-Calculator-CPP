#include <iostream>
using namespace std;
char RankCalc(char i, int j);
int main() {
    char oldrank;
    int latestScore;
    cout<<"enter old rank and new score"<<endl;
    cin>>oldrank;
    cin>>latestScore;
    cout<<":"<<RankCalc(oldrank, latestScore);}
char RankCalc(char i, int j){
 //bronze rank
    if (i == 'b' && j <= 100){
        cout<<" your'e a bronze star."<<endl;
        return 'b';}
    else if (i == 'b'){
      cout<<"congrats, your level is silver"<<endl;
      return 's';}
//silver rank
    if (i == 's' && j <= 250){
        cout<<" your'e level is still silver."<<endl;
        return 's';}
    else if (i == 's'){
      cout<<"congrats, your level is GOLDIIII"<<endl;
      return 'G';}
//gold rank checkkkk
    if (i == 'g' && j <= 750){
        cout<<" your'e level is strong gold!."<<endl;
        return 'G'; }
    else if (i == 'g'){
      cout<<"congrats, you have ascended to diamondhood"<<endl;
      return 'd';}
//diamond gangggggggg
    if (i == 'd' && j <= 1750){
        cout<<"you are diamond."<<endl;
        return 'd';}
    else if (i == 'd'){
      cout<<"congrats, you're still diamond but you're better"<<endl;
      return 'd';}}
