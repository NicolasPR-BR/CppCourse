#pragma once
class Mystring
{
private:
	char* str;
	friend Mystring operator+(const Mystring &lhs, const Mystring& rhs);
	friend bool operator==(const Mystring &lhs, const Mystring& rhs);
	friend Mystring operator-(const Mystring &rhs);
public:
	Mystring();
	Mystring(const char* s);
	Mystring(const Mystring& source);
	~Mystring();
	Mystring& operator=(const Mystring& rhs);
	Mystring& operator=(Mystring&& rhs) noexcept;
	

	void display() const;
	int get_lenth() const;
	const char* get_str() const;
};