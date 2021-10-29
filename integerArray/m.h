
#include <iostream>
using std::ostream;
using std::istream;

class Array
{
	friend ostream& operator<<(ostream&, Array&);

	friend istream& operator>>(istream&, Array&);
public:
	Array(int = 10);

	Array(const Array&);

	~Array();

	int getSize() const;

	const Array& operator=(const Array&);

	bool operator==(const Array&) const;
private:
	int size; 
	int* ptr;
};



