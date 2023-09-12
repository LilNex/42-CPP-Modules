
#include "main.hpp"


sed::sed(char **av)
{
    if (av[1])
        this->_filename = av[1];
    if (av[2])
        this->to_find = av[2];
    if (av[3])
        this->replace = av[3];

    std::string outfileName = this->_filename;
    outfileName.append(".replace");
    
    this->fileStream.open(this->_filename, std::ifstream::in);
    if (!this->fileStream.is_open())
    {
        std::cout << "Error: Can't open input file" << std::endl;
        std::exit(1);
    }
    this->outfileStream.open(outfileName, std::ifstream::out);
    if (!this->outfileStream.is_open())
    {
        std::cout << "Error: Can't open file" << std::endl;
        std::exit(1);
    }

}


int sed::calculate_lenght(std::string line)
{
    int occurences = 0;
    size_t i = 0;
    do
    {
        i = line.find(this->to_find, i);
        if (i != std::string::npos)
            occurences++; 
    } while (i != std::string::npos);

    return line.length()
        - (this->to_find.length() * occurences)
        + (this->replace.length() * occurences);
}

void sed::replace_inline(std::string line)
{
    
    for (size_t i = 0; i < line.length(); i++)
    {
        size_t pos = line.find(this->to_find, i);
        if (pos != std::string::npos && i == pos)
        {
            this->outfileStream.write(this->replace.c_str(), this->replace.length());
            i += this->to_find.length() - 1;
        }
        else
            this->outfileStream.write(&line[i], 1);       
    }
    this->outfileStream.write("\n", 1);
    
}

void sed::openfile()
{
    std::string line;
    while (getline(fileStream, line))
        this->replace_inline(line);
}




int main(int ac, char **av)
{
    if (ac >= 4)
    {
        sed ulti(av);
        ulti.openfile();
    }
    else
    {
        std::cout << "Usage :" << std::endl;
        std::cout << "./sed [filename] [s1] [s2]" << std::endl;
    }
    return (0);
}
