#include <string>
#include <vector>
template<typename STR> inline constexpr bool is_string_class_decayed = false;
template<typename... STR> inline constexpr bool is_string_class_decayed<std::basic_string<STR...>> = true;
// decay_t will remove const, & and volatile from the type
template<typename STR>
inline constexpr bool is_string_class =
    is_string_class_decayed<std::decay_t<STR>> template<typename TChar, typename TString>
    inline constexpr bool is_string = is_string_class<TString> && std::is_same_v<TChar, typename TString::value_type>;
static_assert(is_string_class<std::string>);
static_assert(is_string_class<std::wstring const &>); // that's why decay_t is needed
static_assert(!is_string_class<int>);
static_assert(!is_string_class<double const>);
static_assert(!is_string_class<char const *>);
static_assert(!is_string_class << std::vector < char >>);
