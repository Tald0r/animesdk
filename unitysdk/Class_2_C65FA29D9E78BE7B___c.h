#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_C65FA29D9E78BE7B___C_METHOD_1_0F802B6C684CC61E_OFFSET UNITYSDK_OFFSET(0x80F5C70)
#define CLASS_2_C65FA29D9E78BE7B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x80F5C20)
#define CLASS_2_C65FA29D9E78BE7B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x80F5C60)

inline static constexpr unsigned int Class_2_C65FA29D9E78BE7B___c_TypeDefinitionIndex = 69445;

class Class_2_C65FA29D9E78BE7B___c : public ::System::Object
{
public:
	static ::Class_2_C65FA29D9E78BE7B___c** StaticGet___9()
	{
		return (::Class_2_C65FA29D9E78BE7B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C65FA29D9E78BE7B___c_TypeDefinitionIndex)->GetStaticField(0x36250);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C65FA29D9E78BE7B___c_TypeDefinitionIndex)->GetStaticField(0x36258);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C65FA29D9E78BE7B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C65FA29D9E78BE7B___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_0F802B6C684CC61E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C65FA29D9E78BE7B___C_METHOD_1_0F802B6C684CC61E_OFFSET))(this);
	}
};
