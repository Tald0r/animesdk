#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_17B5BB5F8637C123___C_METHOD_1_DD179444BEB1CC5C_OFFSET UNITYSDK_OFFSET(0x8B981C0)
#define CLASS_1_17B5BB5F8637C123___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B98170)
#define CLASS_1_17B5BB5F8637C123___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8B981B0)

inline static constexpr unsigned int Class_1_17B5BB5F8637C123___c_TypeDefinitionIndex = 37133;

class Class_1_17B5BB5F8637C123___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Single>** StaticGet___9__25_0()
	{
		return (::System::Comparison_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17B5BB5F8637C123___c_TypeDefinitionIndex)->GetStaticField(0x2AC00);
	}
	static ::Class_1_17B5BB5F8637C123___c** StaticGet___9()
	{
		return (::Class_1_17B5BB5F8637C123___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17B5BB5F8637C123___c_TypeDefinitionIndex)->GetStaticField(0x2AC08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17B5BB5F8637C123___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17B5BB5F8637C123___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_DD179444BEB1CC5C(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17B5BB5F8637C123___C_METHOD_1_DD179444BEB1CC5C_OFFSET))(this, a1, a2);
	}
};
