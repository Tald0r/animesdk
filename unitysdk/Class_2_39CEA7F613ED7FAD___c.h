#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoNPCCrowdPlatModelComponent;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_39CEA7F613ED7FAD___C_METHOD_1_92A68E2EA239578D_1_OFFSET UNITYSDK_OFFSET(0xB3456B0)
#define CLASS_2_39CEA7F613ED7FAD___C_METHOD_1_92A68E2EA239578D_OFFSET UNITYSDK_OFFSET(0xB345630)
#define CLASS_2_39CEA7F613ED7FAD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3455E0)
#define CLASS_2_39CEA7F613ED7FAD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB345620)

inline static constexpr unsigned int Class_2_39CEA7F613ED7FAD___c_TypeDefinitionIndex = 38928;

class Class_2_39CEA7F613ED7FAD___c : public ::System::Object
{
public:
	static ::System::Action_1<::MonoNPCCrowdPlatModelComponent*>** StaticGet___9__10_2()
	{
		return (::System::Action_1<::MonoNPCCrowdPlatModelComponent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_39CEA7F613ED7FAD___c_TypeDefinitionIndex)->GetStaticField(0x413E0);
	}
	static ::System::Action_1<::MonoNPCCrowdPlatModelComponent*>** StaticGet___9__10_0()
	{
		return (::System::Action_1<::MonoNPCCrowdPlatModelComponent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_39CEA7F613ED7FAD___c_TypeDefinitionIndex)->GetStaticField(0x413E8);
	}
	static ::Class_2_39CEA7F613ED7FAD___c** StaticGet___9()
	{
		return (::Class_2_39CEA7F613ED7FAD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_39CEA7F613ED7FAD___c_TypeDefinitionIndex)->GetStaticField(0x413F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_92A68E2EA239578D(::MonoNPCCrowdPlatModelComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoNPCCrowdPlatModelComponent*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD___C_METHOD_1_92A68E2EA239578D_OFFSET))(this, a1);
	}

	::System::Void Method_1_92A68E2EA239578D_1(::MonoNPCCrowdPlatModelComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoNPCCrowdPlatModelComponent*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD___C_METHOD_1_92A68E2EA239578D_1_OFFSET))(this, a1);
	}
};
