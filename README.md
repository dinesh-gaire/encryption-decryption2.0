# 🔐 Encryption-Decryption Project

## 📝 Overview

A powerful C-programming mini-project that provides robust encryption and decryption capabilities using the Caesar cipher technique. This tool allows users to secure and protect their sensitive string and file data through a user-friendly interface.

## ✨ Key Features

### 🛡️ Security
- **User Authentication**: Secure access with username and password
- **Caesar Cipher Encryption**: Robust encryption technique for strings and files

### 🔒 Encryption Capabilities
- String encryption and decryption
- File encryption and decryption
- Customizable encryption key

### 📊 Advanced Logging
- Comprehensive operation logging
- Timestamp tracking
- Detailed history of all encryption/decryption activities

## 🛠 Technical Specifications

### Requirements
- **Language**: C
- **Compiler**: GCC or compatible C compiler
- **Libraries**: 
  - `stdio.h`
  - `stdlib.h`
  - `string.h`
  - `time.h`

### 💻 Supported Operations
1. Encrypt String
2. Decrypt String
3. Encrypt File
4. Decrypt File

## 🚀 Quick Start Guide

### 1. Clone the Repository
```bash
git clone https://github.com/dinesh-gaire/encryption-decryption2.0.git
cd encryption-decryption-project
```

### 2. Compile the Program
```bash
gcc cminipj.c -o encryption_decryption
```

### 3. Run the Application
```bash
./encryption_decryption
```

## 🔑 Authentication

### Default Credentials
- **Username**: `admin`
- **Password**: `password`

> **Note**: Authentication is mandatory to access encryption features

## 🖥️ User Interface

### Main Menu Options
```
1. Encrypt String
2. Decrypt String
3. Encrypt File
4. Decrypt File
5. Exit
```

## 🧠 How Caesar Cipher Works

### Encryption Process
- Shifts characters forward by a specified key value
- Provides simple yet effective encryption

### Decryption Process
- Reverses the shift using the inverse key
- Recovers original text or file contents

## 📋 Logging Mechanism

### `history.log` Features
- Records all encryption/decryption operations
- Captures operation type
- Logs timestamp
- Tracks file-based operations

## 📦 Example Workflow

```
Welcome to Encryption-Decryption
------------------------------
Enter Username: admin
Enter Password: password

Select Operation:
1. Encrypt String
> 1

Enter text to encrypt: Hello, World!
Enter encryption key: 3

Encrypted Text: Khoor, Zruog!
```

## 🛡️ Security Considerations
- Use strong, unique encryption keys
- Avoid sharing keys
- Protect the `history.log` file

## 🤝 Contributing
1. Fork the repository
2. Create a feature branch
3. Commit your changes
4. Push to the branch
5. Create a pull request

## 📜 License
MIT License - Free to use, modify, and distribute

## 🆘 Troubleshooting
- Ensure correct compilation flags
- Check file permissions
- Verify input file existence
- Use valid encryption keys

## 📞 Support
- Open GitHub issues
- Email project maintainers
- Consult documentation

## 🌟 Disclaimer
This is an educational project demonstrating basic encryption techniques. Not recommended for high-security applications.
