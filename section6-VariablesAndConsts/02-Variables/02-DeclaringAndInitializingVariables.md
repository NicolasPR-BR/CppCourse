# Declaring and Initializing Variables
## Declaring Variables

<b>VariableType VariableName;</b>
<br>int age;
<br>double rate;
<br>string name;
<br>Account franks_account;
<br>Person james;

### Naming rules
<ul>
<li>Can contain letter, numbers, and underscores</li>
<li>Must begin with a letter or underscore
<ul>
    <li>cannot begin with a number</li>
</ul>
</li>
<li>Cannot use C++ reserved keywords</li>
<li>Cannot redeclare a name in the same scope
<ul>
    <li>Remember that C++ is case sensitive</li>
</ul>
</li>
</ul>

### Style and Best Practices
<ul>
<li>Be consistent with your naming conventions
<ul>
    <li>myVariableName vs my_variable_name</li>
    <li>Avoid begnning names with underscores</li>
</ul>
</li>

<li>Use meaningful names
<ul>
    <li>Not too long and not too short</li>
</ul>
</li>

<li>Never use variables before initializing them</li>
<li>Declare variables close to when you need them in your code</li>
</ul>

### Initializing variables
int age; Uninitialized
<br>int age = 21; C-like initialization
<br>int age(21); Constructor initialization
<br>int age{21}; C++11 list initialization syntax