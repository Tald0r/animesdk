#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A5C63A7A740BFBD0.h"
#include "unitysdk/MoleMole/Battle/MonsterAlertInitParams.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_07AAFA6F7F79BEB3;

#define CLASS_2_87F3094A902AEED5_METHOD_2_03967815CA9E9FAE_OFFSET UNITYSDK_OFFSET(0x9A4D4D0)
#define CLASS_2_87F3094A902AEED5_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9A4DD70)
#define CLASS_2_87F3094A902AEED5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9A4DE50)
#define CLASS_2_87F3094A902AEED5__CTOR_OFFSET UNITYSDK_OFFSET(0x9A4DE40)

inline static constexpr unsigned int Class_2_87F3094A902AEED5_TypeDefinitionIndex = 81047;

class Class_2_87F3094A902AEED5 : public ::Class_1_A5C63A7A740BFBD0
{
public:
	::Class_3_07AAFA6F7F79BEB3* Field_2_8; // 0x20
	::MoleMole::Battle::MonsterAlertInitParams Field_2_7; // 0x28
	::System::Boolean Field_2_5; // 0x48
	::System::Boolean Field_2_4; // 0x49
	::System::Boolean Field_2_3; // 0x4A
	::System::Int32 Field_2_2; // 0x4C
	::System::UInt32 Field_2_0; // 0x50
	::UnityEngine::Vector3 Field_2_6; // 0x54
	::System::Single Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87F3094A902AEED5__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_2_03967815CA9E9FAE()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87F3094A902AEED5_METHOD_2_03967815CA9E9FAE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87F3094A902AEED5_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87F3094A902AEED5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
