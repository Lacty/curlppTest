
#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>


// same as test00

int main() {
  curlpp::Cleanup cleanup;
  
  std::cout << curlpp::options::Url("http://example.com");
}