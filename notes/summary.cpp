/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   summary.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahlsweh <lahlsweh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:23:50 by lahlsweh          #+#    #+#             */
/*   Updated: 2025/04/16 10:45:07 by lahlsweh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <set>
#include <list>

#define WORDS_FILEPATH "words.txt"
#define WORD_LENGTH 5

class AView;
class Checker;
class Dictionary;
class Orchestror;
class Player;
class Word;

class AView
{
public :
	AView();
	virtual ~AView();

	int	present(void);		
};

class Checker
{
private:
	Checker();

public:
	static bool	is_answer_found(Word* word1, Word word2);
	static bool	is_word_valid(std::string curr_word);
	static void	find_colours(Word* word1, Word word2);
	static bool	find_char(int position, std::string s1, std::string s2);
};

class Dictionary
{
private :
	// For now, we use an list as it is the simplest container
	std::set<Word>		_dict;
	std::list<Word *>	_dict; // <- lsaiti
	std::string			_filename;

public :
	Dictionary();
	Dictionary(std::string filename);
	~Dictionary(void);

	Word				getWord(unsigned int pos);
	unsigned int		getSize(void) const;

	// Returns true if the word is in the dictionary
	bool				doesWordExists(Word x);
	int					parse(std::ifstream &file);
	int					parse(void);
};

class Orchestror
{
private:
	Player		_p;
	Dictionary	_d;

public:
	Orchestror(void);
	~Orchestror(void);
	
	int			init(std::string filepath);
	int			generate_number(void);
	int			generate_number(std::string filepath);  // <- lahlsweh
	std::string	generate_word(std::string filepath, int num_line);
	void		play(void);
	void		parse(void); // <- lahlsweh
};

class Player
{
private:
	Word*					_current_word;
	std::list <std::string>	_tested_words;
	std::list <Word*>		_tested_words; // <- lsaiti
	std::list <std::string>	_found_words;

public:
	Player();
	virtual ~Player();
	
	int						read_input(void);
	static bool				is_word_valid(std::string curr_word);
	Word*					getCurrentWord(void);
	std::list <Word*>		getTestedWords(void);
};

enum	Color {EMPTY = 0, GREEN, YELLOW, GREY};

class Word
{
private:
	std::string const	_word;
	enum Color			_colors[5] = {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY};
		
public:
	Word(void);
	Word(std::string);
	~Word(void);

	bool				operator==(const Word &rhs);
	//bool				operator<(const Word &rhs);

	std::string const	&getWord(void) const;
	enum Color			getColor(unsigned int pos) const; // read-only, as setColor should be used in this case
	enum Color*			getColors(void);
	void				setColor(unsigned int pos, enum Color colors);
};

bool	operator<(const Word &lhs, const Word &rhs);

class TerminalView
{
public:
	TerminalView();

	void	print_table(std::list<Word*> l);
	void	print_word(Word *w);
};
