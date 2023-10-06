# Simple Shift Substitution and Columnar Transposition Decryption

## Overview

This project involves decrypting a message encoded with a combination of simple shift substitution and columnar transposition. The encrypted message is:

KUHPVIBQKVOSHWHXBPOFUXHRPVLLDDWVOSKWPREDDVVIDWQRBHBGLLBBPKQUNRVOHQEIRLWOKKRDD

## Decryption Process

### Simple Shift Substitution

To decrypt the message, a simple shift substitution was applied. The provided C++ program, `caesar_cipher.cpp`, attempts all possible shifts (0 to 25) and evaluates the likelihood of each shift based on English letter frequency. The program counts occurrences of the most common letters (A, E, T, O, I) and the least common letters (Z, J, Q, X). The shift with twice the number of most common occurrences compared to the least common occurrences is considered a potential match.

The shifts meeting this criterion were further analyzed, resulting in a narrowed set of 6 possible shifts. Luckily, the correct shift was among these, making the process efficient.

### Columnar Transposition

Once the shift was determined, a columnar transposition with a key length of 7 was applied to unveil the original message.

### Solution

The decryption process successfully revealed the original message. The details of the shift and key length were discovered through a combination of frequency analysis and the application of known algorithms.

## Files

- `caesar_cipher.cpp`: C++ program for simple shift substitution decryption.
- `Data_Given.txt`: The decrypted original message.

## Usage

1. Compile and run `caesar_cipher.cpp` to identify the simple shift substitution.
2. Use the identified shift to decrypt the message.
3. Apply columnar transposition with a key length of 7 to reveal the original message.

## Acknowledgments

- The frequency analysis approach was inspired by knowledge of English letter frequencies.
- The columnar transposition was applied using the online tool [dCode Columnar Transposition Cipher](https://www.dcode.fr/columnar-transposition-cipher).

## License

This project is licensed under the [MIT License](LICENSE).
