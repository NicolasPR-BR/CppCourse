# Logical Operators
<table>
<tr>
    <th>
    Operator
    </th>
    <th>Meaning</th>
</tr>

<tr>
    <td>
    not !
    </td>
    <td>negation</td>
</tr>

<tr>
    <td>
    and &&
    </td>
    <td>Logical and</td>
</tr>

<tr>
    <td>
    or ||
    </td>
    <td>Logical or</td>
</tr>

</table>

# Precedence
<ul>
    <li>not has a higher precende than and</li>
    <li>and has a higher precedence than or</li>
    <li>not is a unary operator</li>
    <li>and and or are binary operators</li>
</ul>

Examples:
```
num1 >= 10 && num1 < 20
num1 <= 10 || num1 >= 20

!is_raining && temperature > 32.0
is_raining || is_snowing

temperature > 100 && is_humid || is_raining
```
# Short-circuit Evaluation
<ul>
    <li>When evaluating a logical expression C++ stops as soon as the result is known</li>
</ul>
```
expr1 && expr2 && expr3
expr1 || expr2 || expr3
```