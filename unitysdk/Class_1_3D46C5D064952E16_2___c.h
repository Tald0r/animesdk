#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_3D46C5D064952E16_2___C_METHOD_1_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x929F5F0)
#define CLASS_1_3D46C5D064952E16_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x929F5A0)
#define CLASS_1_3D46C5D064952E16_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x929F5E0)

inline static constexpr unsigned int Class_1_3D46C5D064952E16_2___c_TypeDefinitionIndex = 64920;

class Class_1_3D46C5D064952E16_2___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__22_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D46C5D064952E16_2___c_TypeDefinitionIndex)->GetStaticField(0x2D110);
	}
	static ::Class_1_3D46C5D064952E16_2___c** StaticGet___9()
	{
		return (::Class_1_3D46C5D064952E16_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D46C5D064952E16_2___c_TypeDefinitionIndex)->GetStaticField(0x2D118);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_2___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_2___C_METHOD_1_7F29568EA964E563_OFFSET))(this);
	}
};
