#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// User authentication credentials
#define USERNAME "admin"
#define PASSWORD "password"

// Function to check user authentication
int authenticate() {
    char username[20];
    char password[20];

    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    if (strcmp(username, USERNAME) == 0 && strcmp(password, PASSWORD) == 0) {
        printf("Authentication successful.\n");
        return 1;
    } else {
        printf("Authentication failed.\n");
        return 0;
    }
}

// Function to log encryption/decryption operations
void logOperation(const char *operation, const char *fileName) {
    FILE *logFile = fopen("history.log", "a");
    if (logFile == NULL) {
        printf("Error opening history.log\n");
        return;
    }

    time_t currentTime;
    time(&currentTime);
    char *timestamp = ctime(&currentTime);
    timestamp[strlen(timestamp) - 1] = '\0'; // Removing newline character from timestamp

    fprintf(logFile, "[%s] %s: %s\n", timestamp, operation, fileName);
    fclose(logFile);
}


// Function to encrypt a string using the Caesar cipher
void encryptString(char *str, int key) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'a' + (str[i] - 'a' + key) % 26;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + (str[i] - 'A' + key) % 26;
        }
    }
}

// Function to decrypt a string using the Caesar cipher
void decryptString(char *str, int key) {
    encryptString(str, 26 - key); // Decryption is the same as encryption with the reverse key
}

// Function to encrypt a file using the Caesar cipher
void encryptFile(const char *inputFileName, const char *outputFileName, int key) {
    FILE *inputFile = fopen(inputFileName, "r");
    FILE *outputFile = fopen(outputFileName, "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening files!\n");
        return;
    }

    char ch;
    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = 'a' + (ch - 'a' + key) % 26;
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = 'A' + (ch - 'A' + key) % 26;
        }
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);
}

// Function to decrypt a file using the Caesar cipher
void decryptFile(const char *inputFileName, const char *outputFileName, int key) {
    encryptFile(inputFileName, outputFileName, 26 - key); // Decryption is the same as encryption with the reverse key
}

int main() {

    printf("\n\nWelcome to Encryption-Decryption:\n");
	printf("\n********************************\n");

    printf("\n\nEnter Username and Password:\n");
	printf("\n*****************************\n");

    if (!authenticate()) {
        printf("Authentication failed. Exiting.\n");
        return 0;
    }

    int choice, key;
    char text[1000];
    char inputFileName[100], outputFileName[100];
    char fileList[10][100];
    int numFiles;

    do {
        printf("\n*****************************\n");
        printf("\nChoose an option:\n");
        printf("1. Encrypt String\n");
        printf("2. Decrypt String\n");
        printf("3. Encrypt File\n");
        printf("4. Decrypt File\n");
        printf("5. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the string to encrypt: ");
                scanf(" %[^\n]s", text);
                printf("Enter the encryption key: ");
                scanf("%d", &key);
                encryptString(text, key);
                printf("Encrypted String: %s\n", text);
                logOperation("Encryption", "String");
                break;

            case 2:
                printf("Enter the string to decrypt: ");
                scanf(" %[^\n]s", text);
                printf("Enter the decryption key: ");
                scanf("%d", &key);
                decryptString(text, key);
                printf("Decrypted String: %s\n", text);
                logOperation("Decryption", "String");
                break;

            case 3:
                printf("Enter the input file name: ");
                scanf("%s", inputFileName);
                printf("Enter the output file name: ");
                scanf("%s", outputFileName);
                printf("Enter the encryption key: ");
                scanf("%d", &key);
                encryptFile(inputFileName, outputFileName, key);
                printf("File encrypted successfully!\n");
                logOperation("Encryption", inputFileName);
                break;

            case 4:
                printf("Enter the input file name: ");
                scanf("%s", inputFileName);
                printf("Enter the output file name: ");
                scanf("%s", outputFileName);
                printf("Enter the decryption key: ");
                scanf("%d", &key);
                decryptFile(inputFileName, outputFileName, key);
                printf("File decrypted successfully!\n");
                logOperation("Decryption", inputFileName);
                break;

            case 5:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    } while (1);

    return 0;
}
