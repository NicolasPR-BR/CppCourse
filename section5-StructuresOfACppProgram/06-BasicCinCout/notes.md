# Basic I/O using <b>cin</b> and <b>cout</b>
cout, cin, cerr, and clog are objects representing streams
## cout
standard output stream
<br>console
### Cout and <<

#### Insert data into the cout stream

cout<<data;

#### Can be chained

cout<<"data 1 is "<<data1;

#### Does not automatically add line breaks

cout<<"data 1 is "<<data1<<endl;
<br>cout<<"data 1 is " <<data1<<"\n";

## cin
Standard input stream
<br>keyboard

### cin and >>

#### Extract data from the cin stream based on data's type
cin>>data;

#### Can be chained
cin>>data1>>data2;

#### Can fail if the entered data cannot be interpreted
data could have an undetermined value

## <<
Insertion operator
<br>Output streams

## >> 
Extraction operator
<br>Input stream