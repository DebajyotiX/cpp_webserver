#include <doctest/doctest.h>
#include <html_server/html_server.h>
#include <html_server/version.h>

#include <string>

TEST_CASE("HTMLserver") {
  using namespace html_server;

  HTMLserver html_server("Tests");

  CHECK(html_server.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(html_server.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(html_server.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(html_server.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("HTMLserver version") {
  static_assert(std::string_view(GREETER_VERSION) == std::string_view("1.0"));
  CHECK(std::string(GREETER_VERSION) == std::string("1.0"));
}
