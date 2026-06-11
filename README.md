# Buffer Overflow Demonstration in C

## Overview

This project demonstrates a classic **Buffer Overflow Vulnerability** in the C programming language using a fixed-size character buffer. The purpose of this project is to help students and cybersecurity enthusiasts understand how improper input validation can lead to memory corruption and unpredictable program behavior.

The repository contains both a vulnerable implementation and a secure implementation to illustrate the importance of safe coding practices.

## Features

* Demonstrates a buffer overflow vulnerability
* Shows the risks of unsafe user input handling
* Includes a secure alternative implementation
* Simple and beginner-friendly code
* Useful for learning memory safety concepts

## Project Structure

```text
bufferoverflow/
├── overflow.c      # Vulnerable implementation
├── safeflow.c      # Secure implementation
├── overflow        # Compiled vulnerable binary
└── safeflow        # Compiled secure binary
```

## Vulnerable Program

The vulnerable program uses a fixed-size character buffer and accepts user input without proper length validation.

Example:

```c
char buffer[10];
scanf("%s", buffer);
```

When the user enters more characters than the buffer can hold, memory outside the buffer may be overwritten, resulting in undefined behavior.

## Secure Program

The secure version uses safer input handling methods to prevent writing beyond the allocated buffer size.

Example:

```c
fgets(buffer, sizeof(buffer), stdin);
```

This ensures that user input remains within the buffer boundaries.

## Compilation

Compile the vulnerable program:

```bash
gcc overflow.c -o overflow -fno-stack-protector
```

Compile the secure program:

```bash
gcc safeflow.c -o safeflow
```

## Running

Run the vulnerable version:

```bash
./overflow
```

Run the secure version:

```bash
./safeflow
```

## Learning Outcomes

* Understanding stack-based memory allocation
* Understanding buffer overflow vulnerabilities
* Secure input validation techniques
* Memory safety in C programming
* Introduction to secure software development

## Disclaimer

This project is intended solely for educational and research purposes. The code is provided to demonstrate common programming mistakes and secure coding practices. Do not use these techniques against systems without proper authorization.

## Author

**Harsha S N A**

