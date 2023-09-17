# Scope Rules
<ul>
    <li>C++ uses scope rules to determine where an identifier can be used</li>
    <li>C++ uses static or lexical scoping</li>
    <li>Local or block scope</li>
    <li>Global scope</li>
</ul>

### Local or Block Scope

<ul>
    <li>Identifier declared in a block{}</li>
    <li>Function parameters have block space</li>
    <li>Only visible within the block {} where declared</li>
    <li>Function local variables are only active while the function is executing</li>
    <li>Local variables are NOT preserved between function calls</li>
    <li>With nested blocks inner blocks can see but outer blocks cannt see in</li>
</ul>

### Global scope
<ul>
    <li>Identifier declared outside any function or class</li>
    <li>Visible to all parts of the program after the global identifier has been declared</li>
    <li>Global constants are OK</li>
    <li>Best practice - don't use global variables</li>
</ul>