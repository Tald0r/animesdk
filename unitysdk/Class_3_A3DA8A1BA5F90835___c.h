#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_22E2E0842E5C55A9;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_A3DA8A1BA5F90835___C_METHOD_1_3E0CF88A50D88B11_OFFSET UNITYSDK_OFFSET(0xA211270)
#define CLASS_3_A3DA8A1BA5F90835___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA211220)
#define CLASS_3_A3DA8A1BA5F90835___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA211260)

inline static constexpr unsigned int Class_3_A3DA8A1BA5F90835___c_TypeDefinitionIndex = 75413;

class Class_3_A3DA8A1BA5F90835___c : public ::System::Object
{
public:
	static ::Class_3_A3DA8A1BA5F90835___c** StaticGet___9()
	{
		return (::Class_3_A3DA8A1BA5F90835___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A3DA8A1BA5F90835___c_TypeDefinitionIndex)->GetStaticField(0x3F620);
	}
	static ::System::Action_1<::Class_3_22E2E0842E5C55A9*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_22E2E0842E5C55A9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A3DA8A1BA5F90835___c_TypeDefinitionIndex)->GetStaticField(0x3F628);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3E0CF88A50D88B11(::Class_3_22E2E0842E5C55A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_22E2E0842E5C55A9*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835___C_METHOD_1_3E0CF88A50D88B11_OFFSET))(this, a1);
	}
};
