#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_7;
namespace System { class Action; }

#define CLASS_1_C5BF10F8B23DC990_CLASS_1_0A1454C04EE22EBD_METHOD_1_1E0B9A631CB15707_OFFSET UNITYSDK_OFFSET(0x96B5780)
#define CLASS_1_C5BF10F8B23DC990_CLASS_1_0A1454C04EE22EBD_METHOD_1_30CD0D6D917A917A_OFFSET UNITYSDK_OFFSET(0x96B5870)
#define CLASS_1_C5BF10F8B23DC990_CLASS_1_0A1454C04EE22EBD__CTOR_OFFSET UNITYSDK_OFFSET(0x96B5770)

inline static constexpr unsigned int Class_1_C5BF10F8B23DC990_Class_1_0A1454C04EE22EBD_TypeDefinitionIndex = 61343;

class Class_1_C5BF10F8B23DC990_Class_1_0A1454C04EE22EBD : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::System::Action* Field_1_6; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Boolean Field_1_7; // 0x28
	::System::Boolean Field_1_0; // 0x29
	::UnityEngine::Vector3 Field_1_1; // 0x2C
	::System::Single Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5BF10F8B23DC990_CLASS_1_0A1454C04EE22EBD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1E0B9A631CB15707(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C5BF10F8B23DC990_CLASS_1_0A1454C04EE22EBD_METHOD_1_1E0B9A631CB15707_OFFSET))(this, a1);
	}

	::System::Void Method_1_30CD0D6D917A917A(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C5BF10F8B23DC990_CLASS_1_0A1454C04EE22EBD_METHOD_1_30CD0D6D917A917A_OFFSET))(this, a1);
	}
};
