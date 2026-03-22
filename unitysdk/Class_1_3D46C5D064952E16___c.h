#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_3D46C5D064952E16___C_METHOD_1_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x16C5AF90)
#define CLASS_1_3D46C5D064952E16___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C5AF40)
#define CLASS_1_3D46C5D064952E16___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5AF80)

inline static constexpr unsigned int Class_1_3D46C5D064952E16___c_TypeDefinitionIndex = 39333;

class Class_1_3D46C5D064952E16___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__22_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D46C5D064952E16___c_TypeDefinitionIndex)->GetStaticField(0x330C0);
	}
	static ::Class_1_3D46C5D064952E16___c** StaticGet___9()
	{
		return (::Class_1_3D46C5D064952E16___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D46C5D064952E16___c_TypeDefinitionIndex)->GetStaticField(0x330C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16___C_METHOD_1_7F29568EA964E563_OFFSET))(this);
	}
};
