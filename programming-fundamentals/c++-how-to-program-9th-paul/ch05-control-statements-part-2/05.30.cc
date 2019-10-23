// 5.30 (Global Warming Facts Quiz) The controversial issue of global warming
// has been widely publicized by the film An Inconvenient Truth, featuring
// former Vice President Al Gore. Mr. Gore and a U.N. network of scientists,
// the Intergovernmental Panel on Climate Change, shared the 2007 Nobel Peace
// Prize in recognition of “their efforts to build up and disseminate greater
// knowledge about man-made climate change.” Research both sides of the global
// warming issue online (you might want to search for phrases like “global
// warming skeptics”). Create a five-question multiple- choice quiz on global
// warming, each question having four possible answers (numbered 1–4).
// Be objective and try to fairly represent both sides of the issue. Next,
// write an application that administers the quiz, calculates the number of
// correct answers (zero through five) and returns a message to the user. If
// the user correctly answers five questions, print “Excellent”; if four, print
// “Very good”; if three or fewer, print “Time to brush up on your knowledge of
// global warming,” and include a list of the websites where you found your
// facts.

//******************************************************************************
// Resolved by: The author
//******************************************************************************

#include <iostream>

int main() {
  int answer;
  int score = 0;

  // 1st question
  std::cout << "By how much have average temperatures risen since 1880?\n"
    << "1: 0.4 degrees F\n"
    << "2: 1.4 degrees F\n"
    << "3: 2.4 degrees F\n"
    << "4: 3.4 degrees F\n";

  std::cout << "> "; // Display prompt
  std::cin >> answer;

  if (answer != 2) std::cout << "Incorrect. The correct answer was 2\n\n";
  else {
    ++score;
    std::cout << "Correct!\n\n";
  }

  // 2nd question
  std::cout << "Montana's Glacier National Park had 150 glaciers in 1910.\n"
    << "How many does it have now?\n"
    << "1: 0\n"
    << "2: 7\n"
    << "3: 17\n"
    << "4: 27\n";

  std::cout << "> "; // Display prompt
  std::cin >> answer;

  if (answer != 4) std::cout << "Incorrect. The correct answer was 4\n\n";
  else {
    ++score;
    std::cout << "Correct!\n\n";
  }

  // 3rd question
  std::cout << "What is the most abundant greenhouse gas?\n"
    << "1: water vapor\n"
    << "2: carbon dioxide\n"
    << "3: methane\n"
    << "4: carbon monoxide\n";

  std::cout << "> "; // Display prompt
  std::cin >> answer;

  if (answer != 1) std::cout << "Incorrect. The correct answer was 1\n\n";
  else {
    ++score;
    std::cout << "Correct!\n\n";
  }

  // 4th question
  std::cout << "Which of these should you NOT do to help stop global warming?\n"
    << "1: Use less hot water\n"
    << "2: Reuse your shopping bag\n"
    << "3: Plant a tree\n"
    << "4: Take a bath instead of a shower\n";

  std::cout << "> "; // Display prompt
  std::cin >> answer;

  if (answer != 4) std::cout << "Incorrect. The correct answer was 4\n\n";
  else {
    ++score;
    std::cout << "Correct!\n\n";
  }

  // 5th question
  std::cout << "Which of these should you NOT do to help stop global warming?\n"
    << "1: Buy more frozen foods\n"
    << "2: Fly less\n"
    << "3: Use a clothesline instead of a dryer\n"
    << "4: Cover pots while cooking\n";

  std::cout << "> "; // Display prompt
  std::cin >> answer;

  if (answer != 1) std::cout << "Incorrect. The correct answer was 1\n\n";
  else {
    ++score;
    std::cout << "Correct!\n\n";
  }

  // display message based on number of correct answers
  if (score == 5) std::cout << "Excellent" << std::endl;
  else if (score == 4) std::cout << "Very good" << std::endl;
  else {
  std::cout << "Time to brush up on your knowledge of global warming:\n"
    << "http://news.nationalgeographic.com/news/2004/12/"
    << "1206_041206_global_warming.html\n"
    << "http://lwf.ncdc.noaa.gov/oa/climate/gases.html\n"
    << "http://globalwarming-facts.info/50-tips.html\n";
  }
}
