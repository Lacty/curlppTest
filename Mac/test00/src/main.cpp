
#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>


int main() {
  curlpp::Cleanup cleanup;
  
  curlpp::Easy request;
  
  request.setOpt<curlpp::options::Url>("http://example.com");
  
  request.perform();
}