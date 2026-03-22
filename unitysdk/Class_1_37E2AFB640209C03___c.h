#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FC589D4BC0069EAD;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_37E2AFB640209C03___C_METHOD_1_B237E7A09EA29A83_OFFSET UNITYSDK_OFFSET(0x12F7EF70)
#define CLASS_1_37E2AFB640209C03___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F7EF20)
#define CLASS_1_37E2AFB640209C03___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12F7EF60)

inline static constexpr unsigned int Class_1_37E2AFB640209C03___c_TypeDefinitionIndex = 15627;

class Class_1_37E2AFB640209C03___c : public ::System::Object
{
public:
	static ::Class_1_37E2AFB640209C03___c** StaticGet___9()
	{
		return (::Class_1_37E2AFB640209C03___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37E2AFB640209C03___c_TypeDefinitionIndex)->GetStaticField(0x8B70);
	}
	static ::System::Predicate_1<::Class_2_FC589D4BC0069EAD*>** StaticGet___9__21_0()
	{
		return (::System::Predicate_1<::Class_2_FC589D4BC0069EAD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37E2AFB640209C03___c_TypeDefinitionIndex)->GetStaticField(0x8B78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_37E2AFB640209C03___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37E2AFB640209C03___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B237E7A09EA29A83(::Class_2_FC589D4BC0069EAD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FC589D4BC0069EAD*))((::PBYTE)hIl2Cpp + CLASS_1_37E2AFB640209C03___C_METHOD_1_B237E7A09EA29A83_OFFSET))(this, a1);
	}
};
