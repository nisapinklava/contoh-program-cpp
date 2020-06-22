#include <iostream>

#include "Game.hpp"

using namespace std;

int main() {
  Game ularFadil;
  ularFadil.setup();
  while (ularFadil.getGameState()) {
    ularFadil.move();
  }
  // for (int i = 0; i < ularFadil.getListPemain().size(); i++) {
  //   cout << ularFadil.getPemain(i).getNama() << " : " << ularFadil.getPemain(i).getPosisi() << 
  //   "\n";
  // }
}