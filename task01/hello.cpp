#include "hello.hpp"
#include "Language.hpp"

void hello(std::string name) { std::cout << "Hello " << name << "!\n"; }

void hello(Language lang) {
  if (lang == Language::French) {

    std::cout << "Bonjour etranger "
                 "!\n";
  }
  if (lang == Language::English) {
    std::cout << "Hello stranger "
                 "!\n";
  }
  if (lang == Language::Spanish) {
    std::cout << "¡Hola extranjero "
                 "!\n";
  }
}

void hello(std::string name, Language lang) {
  if (lang == Language::French) {

    std::cout << "Bonjour " << name << "!\n";
  }
  if (lang == Language::English) {
    std::cout << "Hello " << name << "!\n";
  }
  if (lang == Language::Spanish) {
    std::cout << "¡Hola " << name << "!\n";
  }
}