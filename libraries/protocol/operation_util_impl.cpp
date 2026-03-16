#include <string>

namespace fc {

   std::string name_from_type(const std::string &type_name)
   {
      size_t start_pos = type_name.find_last_of(':');
      size_t start;
      if (start_pos == std::string::npos)
      {
         start = 0;
      }
      else
      {
         start = start_pos + 1;
      }

      size_t end = type_name.find_last_of('_');
      if (end == std::string::npos)
      {
         end = type_name.length();
      }

      if (end < start)
      {
         return "";
      }

      return type_name.substr(start, end - start);
   }

} // fc
