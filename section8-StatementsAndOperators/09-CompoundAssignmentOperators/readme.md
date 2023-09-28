# Compound Assignment
op=
<table>
    <tr>
        <th>
        Operator
        </th>
        <th>
        Example
        </th>
        <th>
        Meaning
        </th>
    </tr>
    <tr>
        <td>
        +=
        </td>
        <td>
        lhs += rhs;
        </td>
        <td>
        lhs = lhs + (rhs);
        </td>
    </tr>
    <tr>
        <td>
        -=
        </td>
        <td>
        lhs -= rhs;
        </td>
        <td>
        lhs = lhs - (rhs);
        </td>
    </tr>
    <tr>
        <td>
        *=
        </td>
        <td>
        lhs *= rhs;
        </td>
        <td>
        lhs = lhs * (rhs);
        </td>
    </tr>
    <tr>
        <td>
        /=
        </td>
        <td>
        lhs /= rhs;
        </td>
        <td>
        lhs = lhs / (rhs);
        </td>
    </tr>
    <tr>
        <td>
        %=
        </td>
        <td>
        lhs %= rhs;
        </td>
        <td>
        lhs = lhs % (rhs);
        </td>
    </tr>
    <tr>
        <td>
        >>=
        </td>
        <td>
        lhs >>= rhs;
        </td>
        <td>
        lhs = lhs >> (rhs);
        </td>
    </tr>
    <tr>
        <td>
        <<=
        </td>
        <td>
        lhs <<= rhs;
        </td>
        <td>
        lhs = lhs << (rhs);
        </td>
    </tr>
    <tr>
        <td>
        &=
        </td>
        <td>
        lhs &= rhs;
        </td>
        <td>
        lhs = lhs & (rhs);
        </td>
    </tr>
    <tr>
        <td>
        ^=
        </td>
        <td>
        lhs ^= rhs;
        </td>
        <td>
        lhs = lhs ^ (rhs);
        </td>
    </tr>
    <tr>
        <td>
        |=
        </td>
        <td>
        lhs |= rhs;
        </td>
        <td>
        lhs = lhs | (rhs);
        </td>
    </tr>
</table>

## Examples
```
lhs op=rhs;
a += 1;
a /= 5;
a *= b + c;
cost += items * tax;
```