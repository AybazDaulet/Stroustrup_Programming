#include <iostream>
#include <string>
#include <vector>
int main(int argc, char *argv[]) {
  std::vector<std::string> disliked_words = {"tax", "interest", "usury",
                                             "fornication", "injustice"};
  while (true) {
    while (true) {
      std::cout << "Enter a word: ";
      std::string word;
      std::cin >> word;
      bool isBleep = false;
      for (int i = 0; i <= disliked_words.size(); i++) {
        if (word == disliked_words[i]) {
          std::cout << "\nBLEEP\n";
          isBleep = true;
          break;
        }
      }
      if (!isBleep) {
        std::cout << word << '\n';
        break;
      }
      isBleep = false;
    }
  }

  return 0;
}
