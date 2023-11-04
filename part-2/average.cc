// Dylan Ruiz
// dylan_r@csu.fullerton.edu
// @dedruiz33
// Partners: @k3ithtan

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one argument\n";
    return 1;
  }

  double sum{};
  for (auto const& arg : arguments) {
    if (arg == arguments[0]) {
      continue;
    }
    sum += std::stod(arg);
  }

  double average = sum / static_cast<double>((arguments.size() - 1));

  std::cout << "average = " << average << '\n';

  return 0;
}
