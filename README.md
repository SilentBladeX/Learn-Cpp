# Learn-Cpp


📘 Chapter 1 — The Basics
This chapter introduces fundamental C++ programming concepts through simple, practical examples:

🔹 Hello World Program[ex1.1.cpp]
A basic program that prints "Hello, World!" to the console. Demonstrates:

Program structure

main function
Use of iostream

🔹 Return Code -1 Behavior[ex1.2.cpp]
Shows how returning -1 from main() indicates program failure and how it is interpreted as 255 internally due to unsigned conversion in most systems.

🔹 Multiplication Program[ex1.4.cpp]
A simple program that takes two numbers as input and displays their product.

🔹 Sum of Numbers from 50 to 100[ex1.9.cpp]
Uses a loop to calculate and print the sum of all integers in the range [50, 100].

🔹 Countdown from 10 to 0[ex1.10.cpp]
Prints numbers in descending order from 10 to 0 using a loop.

🔹 Print Numbers in User-Specified Range[ex1.11.cpp]
Prompts the user to enter a starting and ending value, then prints all numbers between them.

🔹 Sum of User-Entered Numbers[ex1.16.cpp]
Continuously reads numbers from the user and computes their sum. Ends when input is terminated.

🔹 Count Duplicate Transactions[ex1.17.cpp]
Reads several transactions (ISBN, copies sold, price) and counts how many times each ISBN appears consecutively. Demonstrates:

Input reading
Comparison of data records
Looping and conditional logic

#Berfore moving on Bookstore Sales Transaction Cover this topics

[ex1.20.cpp]
[ex1.21.cpp]
[ex1.22.cpp]
[ex1.23.cpp]
[ex1.24.cpp]



                
    # 📚 Bookstore Sales Transaction Program

This project is based on **C++ Primer, Fifth Edition**, and demonstrates how to process sales transactions for a bookstore. The program reads book sales data, calculates the total number of copies sold, total revenue, and the average selling price for each book using its ISBN. [ex1.25.cpp]

---

## 📝 Problem Description

Each transaction record contains:

- An **ISBN** (International Standard Book Number) — a unique identifier for a book
- The **number of copies sold**
- The **price per copy**

From time to time, the bookstore owner analyzes this data to compute:

- Total number of copies sold per ISBN
- Total revenue generated per ISBN
- Average selling price per ISBN

---

## 📌 Learning Objectives

To complete this program, the following C++ features are required:

- Defining and using **variables**
- Performing **input/output** operations
- Using a **data structure** to hold transaction data (`Sales_item` class)
- Using **conditionals** to compare ISBNs
- Implementing **loops** to process all records

This serves as a great hands-on introduction to basic C++ programming constructs.



---



