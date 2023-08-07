# Text-to-Speech Program in C++

This is a simple C++ program that utilizes the Microsoft Speech Platform SDK to pronounce words provided by the user.

## Prerequisites

- Visual Studio (or another C++ compiler)
- Windows OS (since the program uses the Microsoft Speech Platform SDK)

## Installation

1. Clone this repository to your local machine.
2. Open the project in Visual Studio (or your preferred C++ IDE).
3. Ensure that you have the `sapi.lib` library included in the project settings.
4. Build and run the program.

## Usage

1. Run the program.
2. Enter words to pronounce, one per line.
3. Press Enter without typing anything to stop entering words.
4. The program will then pronounce each entered word using the Microsoft Speech Platform SDK.

## Explanation

- The program's main function prompts the user to enter words for pronunciation.
- The words are stored in a `std::vector` called `wordsToPronounce`.
- The `PronounceWords` function takes the vector of words and uses the Microsoft Speech Platform SDK to pronounce each word.
- Make sure you have linked against the `sapi.lib` library and included the necessary headers for the Microsoft Speech Platform SDK.

## Notes

- This program currently works on Windows only due to its dependency on the Microsoft Speech Platform SDK.
- Feel free to modify and extend the program as needed.

## License

This project is licensed under the [MIT License](LICENSE).

