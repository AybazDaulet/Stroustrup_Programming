#include <iostream>
#include <vector>
int main(int argc, char *argv[]) {
  std::vector<int> moves;
  std::cout << "Enter moves for your opponent (1 for rock, 2 for paper, 3 for "
               "scissors, 0 to end entering): ";
  int move;
  while (std::cin >> move && move != 0) {
    moves.push_back(move);
  }
  for (size_t i = 0; i < moves.size(); i++) {
    std::cout << "Enter moves for yourself (1 for rock, 2 for paper, 3 for "
                 "scissors): ";
    int player_move;
    std::cin >> player_move;
    switch (player_move) {
    case 1:
      std::cout
          << (moves[i] == 1
                  ? "Your opponent also has dropped rock. That is a draw!\n"
              : moves[i] == 2 ? "Your opponent dropped paper. He wins!\n"
                              : "Your opponent dropped scissors. You win!\n");
      break;
    case 2:
      std::cout
          << (moves[i] == 1 ? "Your opponent dropped rock. You win!\n"
              : moves[i] == 2
                  ? "Your opponent also has dropped paper. That is a draw!\n"
                  : "Your opponent dropped scissors. He wins!\n");
      break;
    case 3:
      std::cout
          << (moves[i] == 1 ? "Your opponent dropped rock. He wins!\n"
              : moves[i] == 2
                  ? "Your opponent dropped paper. You win!\n"
                  : "Your opponent also dropped scissors. That is a draw!\n");
      break;
    default:
      std::cout << "You dropped something illegal!\n";
    }
  }
  return 0;
}
