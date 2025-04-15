#include <iostream>
#include <string>

class ClassName
{
private:
	std::string	_name;
	int			_value;

public:
	ClassName(void);
	ClassName(const std::string name, int value);
	ClassName(const ClassName& class_name);
	~ClassName(void);
	
	ClassName&			operator=(const ClassName& class_name);

	const std::string&	getName(void) const;
	int					getValue(void) const;
	
	void				setName(const std::string& name);
	void				setValue(const int& value);
};

ClassName::ClassName(void) : _name(""), _value(0)
{
	std::cout << "1) Default constructor called" << std::endl;
	return ;
}

ClassName::ClassName(const std::string name, int value) : _name(name), _value(value)
{
	std::cout << "2) Initializer constructor called" << std::endl;
	return ;
}

ClassName::ClassName(const ClassName& class_name) : _name(class_name.getName()), _value(class_name.getValue())
{
	std::cout << "3) Copy constructor called" << std::endl;
	return ;
}

ClassName::~ClassName(void)
{
	std::cout << "4) Destructor called" << std::endl;
	return ;
}

ClassName&			ClassName::operator=(const ClassName& class_name)
{
	std::cout << "5) Copy assignment operator called" << std::endl;
	if (this != &class_name)
		this->_name = class_name.getName();
	return (*this);
}

const std::string&	ClassName::getName(void) const
{
	std::cout << "6) getName member function called" << std::endl;
	return (this->_name);
}

int					ClassName::getValue(void) const
{
	std::cout << "7) getValue member function called" << std::endl;
	return (this->_value);
}

void				ClassName::setName(const std::string& name)
{
	std::cout << "8) setName member function called" << std::endl;
	this->_name = name;
	return ;
}

void				ClassName::setValue(const int& value)
{
	std::cout << "9) setValue member function called" << std::endl;
	this->_value = value;
	return ;
}

int	main(void)
{
	std::cout << std::endl;
	
	ClassName	empty_class;
	ClassName	class_one("MyFirstClass", 0);
	ClassName	clone_class(class_one);

	empty_class = class_one;
	empty_class.setName("NewName");
	empty_class.setValue(42);

	std::cout << std::endl;

	return (0);
}
