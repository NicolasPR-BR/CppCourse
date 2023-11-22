#pragma once
class Mystring
{
private:
	char* str;

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