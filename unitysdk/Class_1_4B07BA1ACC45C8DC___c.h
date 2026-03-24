#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_83DE381565FB61D2;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_4B07BA1ACC45C8DC___C_METHOD_1_8FEF0F372530136D_OFFSET UNITYSDK_OFFSET(0xB00CD30)
#define CLASS_1_4B07BA1ACC45C8DC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB00CCE0)
#define CLASS_1_4B07BA1ACC45C8DC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB00CD20)

inline static constexpr unsigned int Class_1_4B07BA1ACC45C8DC___c_TypeDefinitionIndex = 66412;

class Class_1_4B07BA1ACC45C8DC___c : public ::System::Object
{
public:
	static ::Class_1_4B07BA1ACC45C8DC___c** StaticGet___9()
	{
		return (::Class_1_4B07BA1ACC45C8DC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B07BA1ACC45C8DC___c_TypeDefinitionIndex)->GetStaticField(0x2AAF0);
	}
	static ::System::Predicate_1<::Class_1_83DE381565FB61D2*>** StaticGet___9__36_1()
	{
		return (::System::Predicate_1<::Class_1_83DE381565FB61D2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B07BA1ACC45C8DC___c_TypeDefinitionIndex)->GetStaticField(0x2AAF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B07BA1ACC45C8DC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B07BA1ACC45C8DC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8FEF0F372530136D(::Class_1_83DE381565FB61D2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_83DE381565FB61D2*))((::PBYTE)hIl2Cpp + CLASS_1_4B07BA1ACC45C8DC___C_METHOD_1_8FEF0F372530136D_OFFSET))(this, a1);
	}
};
