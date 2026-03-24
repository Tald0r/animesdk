#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_3FA43C71A3D27BCE___C_METHOD_1_EC00644AF39B5DED_OFFSET UNITYSDK_OFFSET(0x75BCA70)
#define CLASS_1_3FA43C71A3D27BCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x75BCA20)
#define CLASS_1_3FA43C71A3D27BCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x75BCA60)

inline static constexpr unsigned int Class_1_3FA43C71A3D27BCE___c_TypeDefinitionIndex = 63030;

class Class_1_3FA43C71A3D27BCE___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__16_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FA43C71A3D27BCE___c_TypeDefinitionIndex)->GetStaticField(0x43640);
	}
	static ::Class_1_3FA43C71A3D27BCE___c** StaticGet___9()
	{
		return (::Class_1_3FA43C71A3D27BCE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FA43C71A3D27BCE___c_TypeDefinitionIndex)->GetStaticField(0x43648);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FA43C71A3D27BCE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FA43C71A3D27BCE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EC00644AF39B5DED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FA43C71A3D27BCE___C_METHOD_1_EC00644AF39B5DED_OFFSET))(this);
	}
};
