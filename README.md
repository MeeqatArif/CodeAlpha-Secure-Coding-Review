# CodeAlpha Internship - Task 3
## Secure Coding Review

### Project Overview

This project demonstrates a simple login system written in C++. It contains two versions:

- Vulnerable Login System
- Secure Login System

The purpose is to identify security flaws in the vulnerable version and implement improvements in the secure version.

---

## Vulnerable Version

Features:
- Hardcoded username and password
- Unlimited login attempts
- Plain text credentials
- Basic authentication

Security Issues:
- Hardcoded credentials
- No protection against brute-force attacks
- No account lock mechanism
- Credentials stored in source code

---

## Secure Version

Improvements:
- Maximum of 3 login attempts
- Account locking after repeated failures
- Improved authentication flow
- Better code organization

---

## Testing

Tested using:

Correct Credentials

Username:
admin

Password:
admin123

Incorrect Credentials

Username:
test

Password:
000
After three failed attempts, the account is locked.

## Language

C++

## Author

Meeqat Arif
