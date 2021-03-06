//  File implement/oglplus/enums/named_string_type_class.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/named_string_type.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2017 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
template <typename Base, template<NamedStringType> class Transform>
class EnumToClass<Base, NamedStringType, Transform>
 : public Base
{
private:
	Base& _base(void) { return *this; }
public:

#if defined GL_SHADER_INCLUDE_ARB
# if defined ShaderInclude
#  pragma push_macro("ShaderInclude")
#  undef ShaderInclude
	Transform<NamedStringType::ShaderInclude> ShaderInclude;
#  pragma pop_macro("ShaderInclude")
# else
	Transform<NamedStringType::ShaderInclude> ShaderInclude;
# endif
#endif

	EnumToClass(void) { }
	EnumToClass(Base&& base)
	 : Base(std::move(base))
#if defined GL_SHADER_INCLUDE_ARB
# if defined ShaderInclude
#  pragma push_macro("ShaderInclude")
#  undef ShaderInclude
	 , ShaderInclude(_base())
#  pragma pop_macro("ShaderInclude")
# else
	 , ShaderInclude(_base())
# endif
#endif
	{ }
};

} // namespace enums

