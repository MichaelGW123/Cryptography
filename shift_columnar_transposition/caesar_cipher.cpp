//Michael Williamson
//Computer Science 424 Computer Security
//2-23-2019

#include <string>
#include <iostream>
#include <cstdlib>
#include<stdio.h>

using namespace std;

int main()
{
	char ch;
	char message[78] = "KUHPVIBQKVOSHWHXBPOFUXHRPVLLDDWVOSKWPREDDVVIDWQRBHBGLLBBPKQUNRVOHQEIRLWOKKRDD";
	char decrypt[78] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
	int i;
	int count = 0;
	int badcount = 0;
	printf("Decrypting: \n%s", message);

	for (int key = 0; key < 26; key++) {
		count = 0;
		badcount = 0;
		for (i = 0; message[i] != '\0'; ++i) {
			ch = message[i];
			if (ch >= 'A' && ch <= 'Z') {
				ch = ch - key;
				if (ch < 'A') {
					ch = ch + 'Z' - 'A' + 1;
				}
				decrypt[i] = ch;
				if (decrypt[i] == 'A' || decrypt[i] == 'E' || decrypt[i] == 'T' || decrypt[i] == 'O' || decrypt[i] == 'I') {
					count++;
				}
				if (decrypt[i] == 'Z' || decrypt[i] == 'J' || decrypt[i] == 'Q' || decrypt[i] == 'X') {
					badcount++;
				}
			}
		}
		if (count > 2 * badcount) {
			printf("\n\nDecrypted message: Shift %d Count = %d Bad Count = %d \n%s", key, count, badcount, decrypt);

		}
	}
	return 0;
}