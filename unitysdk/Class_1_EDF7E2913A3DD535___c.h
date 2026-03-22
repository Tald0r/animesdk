#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_48B80789D8B0BB85;
namespace System { template <typename T> class Func_1; }

#define CLASS_1_EDF7E2913A3DD535___C_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x6C96A50)
#define CLASS_1_EDF7E2913A3DD535___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6C96A00)
#define CLASS_1_EDF7E2913A3DD535___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6C96A40)

inline static constexpr unsigned int Class_1_EDF7E2913A3DD535___c_TypeDefinitionIndex = 41572;

class Class_1_EDF7E2913A3DD535___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_1_48B80789D8B0BB85*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Class_1_48B80789D8B0BB85*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDF7E2913A3DD535___c_TypeDefinitionIndex)->GetStaticField(0x33AE0);
	}
	static ::Class_1_EDF7E2913A3DD535___c** StaticGet___9()
	{
		return (::Class_1_EDF7E2913A3DD535___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDF7E2913A3DD535___c_TypeDefinitionIndex)->GetStaticField(0x33AE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDF7E2913A3DD535___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF7E2913A3DD535___C__CTOR_OFFSET))(this);
	}

	::Class_1_48B80789D8B0BB85* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_48B80789D8B0BB85*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF7E2913A3DD535___C_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
