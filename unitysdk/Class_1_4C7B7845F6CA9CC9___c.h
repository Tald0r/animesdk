#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_4C7B7845F6CA9CC9___C_METHOD_1_61676C795523BFAD_OFFSET UNITYSDK_OFFSET(0xB618B60)
#define CLASS_1_4C7B7845F6CA9CC9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB618B10)
#define CLASS_1_4C7B7845F6CA9CC9___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB618B50)

inline static constexpr unsigned int Class_1_4C7B7845F6CA9CC9___c_TypeDefinitionIndex = 62758;

class Class_1_4C7B7845F6CA9CC9___c : public ::System::Object
{
public:
	static ::Class_1_4C7B7845F6CA9CC9___c** StaticGet___9()
	{
		return (::Class_1_4C7B7845F6CA9CC9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C7B7845F6CA9CC9___c_TypeDefinitionIndex)->GetStaticField(0x42190);
	}
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__26_0()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C7B7845F6CA9CC9___c_TypeDefinitionIndex)->GetStaticField(0x42198);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C7B7845F6CA9CC9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C7B7845F6CA9CC9___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_61676C795523BFAD(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C7B7845F6CA9CC9___C_METHOD_1_61676C795523BFAD_OFFSET))(this, a1);
	}
};
