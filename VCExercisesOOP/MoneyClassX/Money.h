#ifndef MONEY_H
#define MONEY_H
class Money
{
public:
	Money();								// default constructor ($ 0.00)
	Money(int d);							// parameterized constructor – dollar amount integer – zero cents
	Money(int d, int c);					// parameterized constructor – dollar and cents (integer values)
	Money(double a);						// parameterized constructor – real number amount (decimal value)

	void	setDollars(int d);				// setters – mutator functions
	void	setCents(int c);
	void	setAmount(double a);

	int		getDollars()		const;		// getters – accessor functions
	int		getCents()			const;
	double	getAmount()			const;

	void	displayAmount()		const;
private:
	int		dollars;
	int		cents;
};
#endif

