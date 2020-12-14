#include "FilePrinter.h"

void FilePrinter::print(std::vector<std::string>& bulk, std::string& time){
    std::string separator;
    
    m_ifstream.open(time + ".log");
    m_ifstream << "bulk: ";
    for (auto &str : bulk){
        m_ifstream << separator << str << std::endl;
        separator = ",";
    }

}