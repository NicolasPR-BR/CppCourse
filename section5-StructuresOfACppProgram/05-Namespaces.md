# Namespaces
<ul>
    <li>Why <b>std::cout</b> and not just <b>cout</b>?</li>
    <li>What is a naming conflict?</li>
    <li>Names given to parts of code to help reduce naming conflicts</li>
    <li><b>std</b> is the name for the C++ "standard" namespace</li>
    <li>Third-party frameworks will have their own namespaces</li>
    <li>Scope resolution operator ::</li>
    <li>How can we use these namespaces?</li>
</ul>

# Using namespaces
## Explicitly using namespaces
In code we might write:
<br>std::cout<<"Enter your favorite number between 1 and 100";
<br>In this example code we're explicitly using the standard namespace using the scope resolution operator.

## Namespace directive
In code, we can write
<br> using namespace std:
<br> cout<<"Enter your favorite number between 1 and 100";
<br> Now we don't need to use the namespace or the scope resolution operator because the <b>entire</b> std name space is used;
<br><b>Might no be the best solution to big programs, because you might end up with a naming conflict</b>

## Qualified using namespace
In code we might write:
<br>using std::cout;
<br>using std::cin;
<br>using std::endl;
<br>In this code we only use what we need.
