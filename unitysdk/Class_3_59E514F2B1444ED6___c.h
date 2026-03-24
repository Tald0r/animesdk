#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07B78E3CD989F5D5;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_59E514F2B1444ED6___C_METHOD_1_E26F7108FE020D45_OFFSET UNITYSDK_OFFSET(0x8916F40)
#define CLASS_3_59E514F2B1444ED6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8916EF0)
#define CLASS_3_59E514F2B1444ED6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8916F30)

inline static constexpr unsigned int Class_3_59E514F2B1444ED6___c_TypeDefinitionIndex = 42602;

class Class_3_59E514F2B1444ED6___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_07B78E3CD989F5D5*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_07B78E3CD989F5D5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_59E514F2B1444ED6___c_TypeDefinitionIndex)->GetStaticField(0x42B80);
	}
	static ::Class_3_59E514F2B1444ED6___c** StaticGet___9()
	{
		return (::Class_3_59E514F2B1444ED6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_59E514F2B1444ED6___c_TypeDefinitionIndex)->GetStaticField(0x42B88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E26F7108FE020D45(::Class_3_07B78E3CD989F5D5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07B78E3CD989F5D5*))((::PBYTE)hIl2Cpp + CLASS_3_59E514F2B1444ED6___C_METHOD_1_E26F7108FE020D45_OFFSET))(this, a1);
	}
};
