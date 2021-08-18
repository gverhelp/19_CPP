#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
Form("ShrubberyCreationForm", 145, 137),
_target("GenericTarget")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("ShrubberyCreationForm", 145, 137),
_target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy):
Form(copy),
_target(copy._target)
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
    if (this != &copy)
    {
        Form::operator=(copy);
        _target = copy._target;
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

std::string ShrubberyCreationForm::getTarget() const
{
    return (_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::ofstream ofs(this->getTarget().append("_shrubbery").c_str());
    if (!ofs)
        throw(ErrorFileException());
    ofs << "         v" << std::endl;
    ofs << "        >X<" << std::endl;
    ofs << "         A" << std::endl;
    ofs << "        d$b" << std::endl;
    ofs << "      .d$$$b." << std::endl;
    ofs << "    .d$i$$$$$b." << std::endl;
    ofs << "       d$$@b" << std::endl;
    ofs << "      d$$$$ib" << std::endl;
    ofs << "    .d$$$$$$$b" << std::endl;
    ofs << "  .d$$@$$$$$$$ib." << std::endl;
    ofs << "      d$$i$$b" << std::endl;
    ofs << "     d$$$$$@$b" << std::endl;
    ofs << "  .d$@$$$$$$$$@b." << std::endl;
    ofs << ".d$$$$i$$$$$$$$$$b." << std::endl;
    ofs << "        ###" << std::endl;
    ofs << "        ###" << std::endl;
    ofs << "        ### mh" << std::endl << std::endl;
    ofs << "###################" << std::endl << std::endl;
    ofs << "         v" << std::endl;
    ofs << "        >X<" << std::endl;
    ofs << "         A" << std::endl;
    ofs << "        d$b" << std::endl;
    ofs << "      .d$$$b." << std::endl;
    ofs << "    .d$i$$$$$b." << std::endl;
    ofs << "       d$$@b" << std::endl;
    ofs << "      d$$$$ib" << std::endl;
    ofs << "    .d$$$$$$$b" << std::endl;
    ofs << "  .d$$@$$$$$$$ib." << std::endl;
    ofs << "      d$$i$$b" << std::endl;
    ofs << "     d$$$$$@$b" << std::endl;
    ofs << "  .d$@$$$$$$$$@b." << std::endl;
    ofs << ".d$$$$i$$$$$$$$$$b." << std::endl;
    ofs << "        ###" << std::endl;
    ofs << "        ###" << std::endl;
    ofs << "        ### mh" << std::endl << std::endl;
    ofs.close();
}

const char* ShrubberyCreationForm::ErrorFileException::what() const throw()
{
    return ("Error while opening the file\n");
}