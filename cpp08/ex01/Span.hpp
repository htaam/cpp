#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iterator>
# include <vector>
# include <algorithm>

class Span;

class Span{
    private:
        unsigned int _max_values;
        std::vector<int> _values;
    public:

    Span( unsigned int const & N);
    Span(const Span &og);
    virtual ~Span();
    Span &operator=(const Span &op);

    void addNumber(int);
    long shortestSpan(void);
    long longestSpan(void);

    template <class Iterator>
    void addNumber(Iterator begin, Iterator end){
        if (end - begin <= _max_values)
            std::copy(begin, end, std::back_inserter(this->_values));
        else{
            throw(NoSpace());}
        std::sort(this->_values.begin(), this->_values.end());
    }

        class NoSpace : public std::exception
        {
            virtual const char * what() const throw(){
                return("Not enoth sace in the Span to add the range");
            }
        };
         class Full : public std::exception
        {
            virtual const char * what() const throw(){
                return("Spanm is full");
            }
        };
         class CantSpan : public std::exception
        {
            virtual const char * what() const throw(){
                return("Not enoth values to do a Span");
            }
        };
};
    



#endif