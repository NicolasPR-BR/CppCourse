# What is a const
<ul>
    <li>Like C++ variables
        <ul>
            <li>Have names</li>
            <li>Occupy storage</li>
            <li>Are usually types</li>
        </ul>
    </li>
</ul>
However, you cannot change their values once declared

# Types of constants in C++
<ul>
    <li>Literal constants</li>
    <li>Declared constants
        <ul>
            <li>
            <b style="font-style: italic">const</b> keyword
            </li>
        </ul>
    </li>
    <li>Constant expressions
        <ul>
            <li>
            <b style="font-style: italic">constexpr</b> keyword
            </li>
        </ul>
    </li>
    <li>Enumerated constans
        <ul>
            <li>
            <b style="font-style: italic">enum</b> keyword
            </li>
        </ul>
    </li>
    <li>Defined constans
        <ul>
            <li>
            <b style="font-style: italic">#define</b>
            </li>
        </ul>
    </li>
</ul>

## Literal constants
<ul>
    <li>The most obvious kind of constant
    <br> x = 12;
    <br> y = 1.56;
    <br> name = "Frank";
    <br> middle_initial = 'j';
    </li>
    <li>Integer Literal Constants
    <br> 12 - An integer
    <br> 12U - An unsigned integer
    <br> 12L - A long integer
    <br> 12LL - A long long integer
    </li>
    <li>Floating-point Literal constants
    <br> 12.1 - A double
    <br> 12.1F - A float
    <br> 12.1L - A long double
    </li>    
    <li>Character Literal Constants (escape codes)
    <br> \n - Newline
    <br> \r - Return
    <br> \t - Tab
    <br> \b - Backspace
    <br> \' - Single quote
    <br> \'' - Double quote
    <br> \\ - backslash
    </li>
</ul>

## Declared constants
<ul>
<li>Constants declared using the <b style="font-style: italic">const</b> keyword</li>
</ul>
<br>const double_pi{3.1415926};
<br>const int months_in_year{12};
<br>pi=2.5; //Compiler error

## Defined Constants
<ul>
    <li>Constants declared using the <b style="font-style: italic">const</b> keyword
    <br>define pi 3.1415926 // <b>Don't use defined constants in Modern C++</b>
    </li>
</ul>