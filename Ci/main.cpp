#include <iostream>
#include <string>

std::string encryptCaesar (std::string str, int shift){
    std::string sTmp = "";
    int tmpShift = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
        tmpShift = (int)(str[i]);
        tmpShift -= 65;
        tmpShift += shift;
        tmpShift %= 26;
        tmpShift += 65;
        sTmp += (char)tmpShift;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            tmpShift = (int)(str[i]);
            tmpShift -= 97;
            tmpShift += shift;
            tmpShift %= 26;
            tmpShift += 97;
            sTmp += (char)tmpShift;
        } else sTmp += str[i];
    }
    return sTmp;
}

int main() {
    std::cout << "================Caesar's cipher================" << std::endl;
    std::string str;
    std::cout << "Enter the encryption string:";
    std::getline(std::cin, str);
    std::cout << "\n" << str << "\n";

    std::cout << encryptCaesar(str,5) << "\n";
    return 0;
}
