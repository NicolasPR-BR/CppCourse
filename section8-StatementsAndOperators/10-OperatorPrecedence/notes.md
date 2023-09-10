# Operator Precedence (not a complete list)
Higher to lower
<br/>Not complete
<table>
<tr>
    <th>
        Operator
    </th>
    <th>
        Associativity
    </th>
</tr>
<tr>
    <td>[] -> . ()</td>
    <td>Left to right</td>
</tr>
<tr>
    <td>++ 00 not -(unary) *(de-ref) & sizeof</td>
    <td>right to left</td>
</tr>
<tr>
    <td>* / %</td>
    <td>Left to right</td>
</tr>
<tr>
    <td>+ -</td>
    <td>Left to right</td>
</tr>
<tr>
    <td><< >></td>
    <td>Left to right</td>
</tr>
<tr>
    <td>< <= > >=</td>
    <td>Left to right</td>
</tr>
<tr>
    <td>== !=</td>
    <td>Left to right</td>
</tr>
<tr>
    <td>&</td>
    <td>Left to right</td>
</tr>
<tr>
    <td>^</td>
    <td>Left to right</td>
</tr>
<tr>
    <td>|</td>
    <td>Left to right</td>
</tr>
<tr>
    <td>&&</td>
    <td>Left to right</td>
</tr>
<tr>
    <td>||</td>
    <td>Left to right</td>
</tr>
<tr>
    <td>= op ?:</td>
    <td>Right to left</td>
</tr>

</table>

## What is associativity
<ul>
    <li>Use precedence rules when adjacent operators are different</li>
</ul>
expr1 op1 expr2 op2 expr3 //Precedence
<ul>
    <li>Use associativity rules when adjacent operators have the same precedence</li>
</ul>
expr1 op1 expr2 op1 expr3 //Associativity
<ul>
    <li>Use parenthesis to absolutely remove any doubt</li>
</ul>
Example:

```
    result = num1 + num2 * num3;
    result = (num1 + (num2 * num3) );

    result1 = num1 + num2 - num3;
    result1 = ((num1 + num2) - num3);
```