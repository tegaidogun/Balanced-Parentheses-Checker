<!DOCTYPE html>
<html>
<body>

<h1>Balance Parentheses Checker</h1>
<p>A program developed as a part of COP-4338 Systems Programming at the FIU Knight Foundation School of Computer & Information Sciences at Florida International University. This program verifies if the input string has balanced parentheses, based on user-defined pairs of opening and closing symbols.</p>

<h2>Table of Contents</h2>
<ol>
    <li>Project Overview</li>
    <li>Installation</li>
    <li>Usage</li>
    <li>File Structure</li>
    <li>Contributing</li>
    <li>License</li>
</ol>

<h2>Project Overview</h2>
<p>The project involves writing a C program with functions to check the balance of parentheses in a string and to define pairs of opening and closing symbols for checking the balance. The program consists of three main files: balance_checker.c, check.c, and pair.c, along with a header file balance.h and a makefile to compile the program.</p>

<h2>Installation</h2>
<p>To set up the project on your local machine, follow these steps:</p>
<ol>
    <li>Clone the repository to your local machine.</li>
    <li>Navigate to the project directory in the terminal.</li>
    <li>Run the command <code>make</code> to compile the program and generate the executable file named "balance".</li>
</ol>

<h2>Usage</h2>
<p>After compiling the program, you can run it using the following commands:</p>
<ul>
    <li><code>./balance</code> - To run the program.</li>
    <li>Within the program, you can use the following commands:
        <ul>
            <li><code>quit</code> - to exit the program.</li>
            <li><code>check STR</code> - to check if the string STR has balanced parentheses.</li>
            <li><code>pair o0,c0 o1,c1 ... on,cn</code> - to define pairs of opening and closing symbols.</li>
        </ul>
    </li>
</ul>

<h2>File Structure</h2>
<p>The repository contains the following files:</p>
<ul>
    <li>balance.h - Header file with function declarations.</li>
    <li>balance_checker.c - Contains the main function.</li>
    <li>check.c - Contains the implementation of the check function.</li>
    <li>pair.c - Contains the implementation of the pair function.</li>
    <li>makefile - Used to manage the build process.</li>
</ul>

<h2>Contributing</h2>
<p>If you wish to contribute to this project, please fork the repository and submit a pull request.</p>

<h2>License</h2>
<p>This project is licensed under the MIT License.</p>

</body>
</html>
