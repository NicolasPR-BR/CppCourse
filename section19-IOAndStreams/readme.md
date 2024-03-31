# I/O and Streams

<ul>
    <li>Streams and I/O</li>
    <li>Stream manipulators</li>
    <li>Reading and writing to a text file</li>
    <li>Using string streams</li>
</ul>

# Files, streams and I/O

<ul>
    <li>C++ usdes streams as an interface between the program and input and output devices</li>
    <li>Independent of the actual device</li>
    <li>Sequence of bytes</li>
    <li>Input stream provides data to the program</li>
    <li>Output stream receives data from the program</li>
</ul>

Common header files:

<table>
    <tr>
        <th>Header file</th>
        <th>Description</th>
    </tr>
    <tr>
        <td>iostream</td>
        <td>Provides definitions for formatted input and output from/to streams</td>
    </tr>
    <tr>
        <td>fstream</td>
        <td>Provides definitions for formatted input and output from/to file streams</td>
    </tr>
    <tr>
        <td>iomanip</td>
        <td>Provides definitions for manipulators used to format stream I/O</td>
    </tr>
</table>

Commonly used stream classes

<table>
    <tr>
        <th>Class</th>
        <th>Description</th>
    </tr>
    <tr>
        <td>ios</td>
        <td>Provides basic support for formatted and unformatted I/O operations. Base class most of other classes</td>
    </tr>
    <tr>
        <td>ifstream</td>
        <td>Provides high-level input operations on file based streams</td>
    </tr>
    <tr>
        <td>ofstream</td>
        <td>Provides high-level output operations on file based streams</td>
    </tr>
    <tr>
        <td>fstream</td>
        <td>Provides for high-level I/O operations on file based streams. Derived from ofstream and ifstream</td>
    </tr>
    <tr>
        <td>stringstream</td>
        <td>Provides for high-level I/O operations on memory based strings. Derived from istringstream and ostringstream</td>
    </tr>
</table>

Global stream objects

<table>
    <tr>
        <th>Object</th>
        <th>Description</th>
    </tr>
    <tr>
        <td>cin</td>
        <td>Standard input stream - by default "connected" to the standard input device (keyboard) instance of ifstream</td>
    </tr>
    <tr>
        <td>cout</td>
        <td>Standard output strema - by default "coonected" to the standard output device (console) instance of ofstream</td>
    </tr>
    <tr>
        <td>cerr</td>
        <td>Standard error stream - by default "connected" to the standard error device (console)</td>
    </tr>
    <tr>
        <td>clog</td>
        <td>Standard log stream - By default's "connected" to the standard log device (console) instance of ostream (unbuffered)</td>
    </tr>
</table>

<ul>
    <li>Global objects - initialized before main executes</li>
    <li>Best practice is to use cerr for erro messages and clog for log messages</li>
</ul>