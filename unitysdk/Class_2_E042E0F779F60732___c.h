#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_E042E0F779F60732___C_METHOD_1_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x6787240)
#define CLASS_2_E042E0F779F60732___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x67871F0)
#define CLASS_2_E042E0F779F60732___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6787230)

inline static constexpr unsigned int Class_2_E042E0F779F60732___c_TypeDefinitionIndex = 67452;

class Class_2_E042E0F779F60732___c : public ::System::Object
{
public:
	static ::Class_2_E042E0F779F60732___c** StaticGet___9()
	{
		return (::Class_2_E042E0F779F60732___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E042E0F779F60732___c_TypeDefinitionIndex)->GetStaticField(0x3F9B0);
	}
	static ::System::Action_1<::System::Object*>** StaticGet___9__11_0()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E042E0F779F60732___c_TypeDefinitionIndex)->GetStaticField(0x3F9B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E042E0F779F60732___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E042E0F779F60732___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E042E0F779F60732___C_METHOD_1_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}
};
