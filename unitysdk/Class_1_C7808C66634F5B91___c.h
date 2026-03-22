#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B19769B3B0092EA9_1;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_C7808C66634F5B91___C_METHOD_1_3623D16279E93090_OFFSET UNITYSDK_OFFSET(0x16AFC1E0)
#define CLASS_1_C7808C66634F5B91___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AFC190)
#define CLASS_1_C7808C66634F5B91___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16AFC1D0)

inline static constexpr unsigned int Class_1_C7808C66634F5B91___c_TypeDefinitionIndex = 15296;

class Class_1_C7808C66634F5B91___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_B19769B3B0092EA9_1*>** StaticGet___9__22_0()
	{
		return (::System::Comparison_1<::Class_2_B19769B3B0092EA9_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7808C66634F5B91___c_TypeDefinitionIndex)->GetStaticField(0x8C80);
	}
	static ::Class_1_C7808C66634F5B91___c** StaticGet___9()
	{
		return (::Class_1_C7808C66634F5B91___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7808C66634F5B91___c_TypeDefinitionIndex)->GetStaticField(0x8C88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C7808C66634F5B91___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7808C66634F5B91___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_3623D16279E93090(::Class_2_B19769B3B0092EA9_1* a1, ::Class_2_B19769B3B0092EA9_1* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B19769B3B0092EA9_1*, ::Class_2_B19769B3B0092EA9_1*))((::PBYTE)hIl2Cpp + CLASS_1_C7808C66634F5B91___C_METHOD_1_3623D16279E93090_OFFSET))(this, a1, a2);
	}
};
