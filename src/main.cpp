#include "../libs/lib_interpret.h" 
#include "../libs/ConsolePrinter.h" 
#include "../libs/FilePrinter.h" 


int main(/*int argc, char** argv*/){

    /*if (argc < 2)
    {
        std::cerr << "Number of arguments < 2.\n";
        return 1;
    }
    interpreter inter1{std::atoi(argv[1])};*/
    interpreter inter1{3};

    //inter1.appendOutput(std::shared_ptr<ConsolePrinter>{});
    //inter1.appendOutput(std::shared_ptr<FilePrinter>{});
    inter1.processStream(std::cin);

    return 0;
}
