#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    std::string content;
    std::string line;
    while (std::getline(inputFile, line))
    {
        content += line + "\n";
    }
    inputFile.close();

    // Sostituiamo tutte le occorrenze usando solo find() e substr()
    std::string result = "";
    size_t pos = 0;
    size_t found = 0;
    
    while ((found = content.find(s1, pos)) != std::string::npos) {
        // Aggiungi la parte prima di s1
        result += content.substr(pos, found - pos);
        // Aggiungi s2 al posto di s1
        result += s2;
        // Sposta la posizione dopo s1
        pos = found + s1.length();
    }
    // Aggiungi il resto della stringa
    result += content.substr(pos);
    content = result;

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Could not create output file" << std::endl;
        return 1;
    }

    outputFile << content;
    outputFile.close();

    return 0;
}
