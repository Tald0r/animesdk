#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0FED320E7A82FE89;
class Class_1_D276261F488D3DEB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0FED320E7A82FE89_CLASS_1_7DF6BFF6F9CE77C9_METHOD_1_83C0AA0CB53DD6FE_OFFSET UNITYSDK_OFFSET(0x9B26C50)
#define CLASS_1_0FED320E7A82FE89_CLASS_1_7DF6BFF6F9CE77C9__CTOR_OFFSET UNITYSDK_OFFSET(0x9B26C40)

inline static constexpr unsigned int Class_1_0FED320E7A82FE89_Class_1_7DF6BFF6F9CE77C9_TypeDefinitionIndex = 43808;

class Class_1_0FED320E7A82FE89_Class_1_7DF6BFF6F9CE77C9 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0FED320E7A82FE89_CLASS_1_7DF6BFF6F9CE77C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_D276261F488D3DEB*>* Method_1_83C0AA0CB53DD6FE(::Class_1_0FED320E7A82FE89* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D276261F488D3DEB*>*(*)(::PVOID, ::Class_1_0FED320E7A82FE89*))((::PBYTE)hIl2Cpp + CLASS_1_0FED320E7A82FE89_CLASS_1_7DF6BFF6F9CE77C9_METHOD_1_83C0AA0CB53DD6FE_OFFSET))(this, a1);
	}
};
