#include "printer.h"

class FilePrinter : public Printer
{
    public:
        FilePrinter() {m_ifstream = new std::ofstream();};
        void print(std::vector<std::string>& bulk, std::string& time) override;
    private:
        std::string m_filename;
        std::ofstream* m_ifstream;

};