#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_88;
class Class_0_16E4307DCC419505_89;

#define CLASS_1_8E0E8D982507FF1E_METHOD_1_24591D497EE23262_OFFSET UNITYSDK_OFFSET(0x1A0E11F0)
#define CLASS_1_8E0E8D982507FF1E_METHOD_1_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x1A0ED8B0)
#define CLASS_1_8E0E8D982507FF1E_METHOD_1_B39750ADC1D200E3_OFFSET UNITYSDK_OFFSET(0x1A0EDBC0)
#define CLASS_1_8E0E8D982507FF1E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0ED840)

inline static constexpr unsigned int Class_1_8E0E8D982507FF1E_TypeDefinitionIndex = 31784;

class Class_1_8E0E8D982507FF1E : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_89*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_89*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E0E8D982507FF1E_TypeDefinitionIndex)->GetStaticField(0x250B0);
	}
	static ::Il2CppArray<::Class_0_16E4307DCC419505_88*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_88*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E0E8D982507FF1E_TypeDefinitionIndex)->GetStaticField(0x250B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E0E8D982507FF1E__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_3574512695A597AB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E0E8D982507FF1E_METHOD_1_3574512695A597AB_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_88* Method_1_B39750ADC1D200E3(::Enum_3_63CAB6C405C6C7B1_1 a1)
	{
		return ((::Class_0_16E4307DCC419505_88*(*)(::Enum_3_63CAB6C405C6C7B1_1))((::PBYTE)hIl2Cpp + CLASS_1_8E0E8D982507FF1E_METHOD_1_B39750ADC1D200E3_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_88* Method_1_24591D497EE23262(::Enum_3_63CAB6C405C6C7B1_1 a1)
	{
		return ((::Class_0_16E4307DCC419505_88*(*)(::Enum_3_63CAB6C405C6C7B1_1))((::PBYTE)hIl2Cpp + CLASS_1_8E0E8D982507FF1E_METHOD_1_24591D497EE23262_OFFSET))(a1);
	}
};
