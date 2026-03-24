#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_3_9BFD7911EAD10652___C_METHOD_1_50CCDD1FE0CC143C_OFFSET UNITYSDK_OFFSET(0xE0FE3A0)
#define CLASS_3_9BFD7911EAD10652___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0FE350)
#define CLASS_3_9BFD7911EAD10652___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE0FE390)

inline static constexpr unsigned int Class_3_9BFD7911EAD10652___c_TypeDefinitionIndex = 77023;

class Class_3_9BFD7911EAD10652___c : public ::System::Object
{
public:
	static ::Class_3_9BFD7911EAD10652___c** StaticGet___9()
	{
		return (::Class_3_9BFD7911EAD10652___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9BFD7911EAD10652___c_TypeDefinitionIndex)->GetStaticField(0x423E0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_5()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9BFD7911EAD10652___c_TypeDefinitionIndex)->GetStaticField(0x423E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9BFD7911EAD10652___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BFD7911EAD10652___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_50CCDD1FE0CC143C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BFD7911EAD10652___C_METHOD_1_50CCDD1FE0CC143C_OFFSET))(this);
	}
};
