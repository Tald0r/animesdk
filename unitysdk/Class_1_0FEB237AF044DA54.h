#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3DFF974943A619B7.h"
#include "unitysdk/Enum_3_63B88169304F33FD.h"
#include "unitysdk/Enum_3_C2761E57EE0B71AF.h"
#include "unitysdk/Enum_3_D02046A15137AAB0.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/Config/RelayAttackType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0FEB237AF044DA54__CTOR_OFFSET UNITYSDK_OFFSET(0xA097080)

inline static constexpr unsigned int Class_1_0FEB237AF044DA54_TypeDefinitionIndex = 40398;

class Class_1_0FEB237AF044DA54 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x10
	::MoleMole::Battle::Entity* Field_1_11; // 0x18
	::Enum_3_D02046A15137AAB0 Field_1_14; // 0x20
	::Enum_3_63B88169304F33FD Field_1_8; // 0x24
	::Enum_3_C2761E57EE0B71AF Field_1_12; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x2C
	::System::Single Field_1_3; // 0x38
	::System::Int32 Field_1_0; // 0x3C
	::System::Single Field_1_2; // 0x40
	::MoleMole::Config::RelayAttackType Field_1_13; // 0x44
	::System::Single Field_1_5; // 0x48
	::Enum_3_3DFF974943A619B7 Field_1_1; // 0x4C
	::MoleMole::Config::AidAttackType Field_1_6; // 0x50
	::System::Boolean Field_1_10; // 0x54
	::System::Boolean Field_1_7; // 0x55

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEB237AF044DA54__CTOR_OFFSET))(this);
	}
};
