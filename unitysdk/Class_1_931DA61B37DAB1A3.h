#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_88;
class Class_0_16E4307DCC419505_93;

#define CLASS_1_931DA61B37DAB1A3_METHOD_1_24591D497EE23262_OFFSET UNITYSDK_OFFSET(0x19B11BB0)
#define CLASS_1_931DA61B37DAB1A3_METHOD_1_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x19B19D80)
#define CLASS_1_931DA61B37DAB1A3_METHOD_1_B39750ADC1D200E3_OFFSET UNITYSDK_OFFSET(0x19B1A080)
#define CLASS_1_931DA61B37DAB1A3__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B19D10)

inline static constexpr unsigned int Class_1_931DA61B37DAB1A3_TypeDefinitionIndex = 30892;

class Class_1_931DA61B37DAB1A3 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_88*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_88*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_931DA61B37DAB1A3_TypeDefinitionIndex)->GetStaticField(0x23790);
	}
	static ::Il2CppArray<::Class_0_16E4307DCC419505_93*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_93*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_931DA61B37DAB1A3_TypeDefinitionIndex)->GetStaticField(0x23798);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_931DA61B37DAB1A3__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_88* Method_1_24591D497EE23262(::Enum_3_63CAB6C405C6C7B1_1 a1)
	{
		return ((::Class_0_16E4307DCC419505_88*(*)(::Enum_3_63CAB6C405C6C7B1_1))((::PBYTE)hIl2Cpp + CLASS_1_931DA61B37DAB1A3_METHOD_1_24591D497EE23262_OFFSET))(a1);
	}

	static ::System::Void Method_1_3574512695A597AB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_931DA61B37DAB1A3_METHOD_1_3574512695A597AB_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_88* Method_1_B39750ADC1D200E3(::Enum_3_63CAB6C405C6C7B1_1 a1)
	{
		return ((::Class_0_16E4307DCC419505_88*(*)(::Enum_3_63CAB6C405C6C7B1_1))((::PBYTE)hIl2Cpp + CLASS_1_931DA61B37DAB1A3_METHOD_1_B39750ADC1D200E3_OFFSET))(a1);
	}
};
