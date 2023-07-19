# Preprocessor directives
In this lesson we'll see
<ul>
<li>What is a preprocessor?</li>
<li>What does it do?</li>
<li>directives start with "#"</li>
<li>Commands to the preprocessor</li>
</ul>

The commands are:
<br>\#include\<iostream>
<br>\#include "myfile.h"
<br>\#if
<br>\#elif
<br>\#else
<br>\#endif
<br>\#ifdef
<br>\#ifndef
<br>\#define
<br>\#undef
<br>\#line
<br>\#error
<br>\#pragma

# What is the preprocessor used for?
The preprocessor is commonly used to conditionaly compile code, let's say, for windows we don't need some of the include in our code, by using the preprocessor, we can choose to not include that code into the Win build.

## Does the preprocessor understand C++?
The C++ preprocessor does not understand C++.