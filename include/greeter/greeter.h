#pragma once

#include <string>

namespace html_server {

  /**  Language codes to be used with the HTMLserver class */
  enum class LanguageCode { EN, DE, ES, FR };

  /**
   * @brief A class for saying hello in multiple languages
   */
  class HTMLserver {
    std::string name;

  public:
    /**
     * @brief Creates a new html_server
     * @param name the name to greet
     */
    HTMLserver(std::string name);

    /**
     * @brief Creates a localized string containing the greeting
     * @param lang the language to greet in
     * @return a string containing the greeting
     */
    std::string greet(LanguageCode lang = LanguageCode::EN) const;
  };

}  // namespace html_server
