#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E49938F4BFE74407_Enum_3_0AD4C1E64FEEE01F.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_E49938F4BFE74407_METHOD_1_B180522C64587A55_OFFSET UNITYSDK_OFFSET(0xCBAAFB0)
#define CLASS_1_E49938F4BFE74407__CTOR_OFFSET UNITYSDK_OFFSET(0xCBAAFA0)

inline static constexpr unsigned int Class_1_E49938F4BFE74407_TypeDefinitionIndex = 51400;

class Class_1_E49938F4BFE74407 : public ::System::Object
{
public:
	::MoleMole::FlowCanvas::Nodes::AreaIDTag Field_1_5; // 0x10
	::System::Boolean Field_1_7; // 0x14
	::System::Boolean Field_1_6; // 0x15
	::UnityEngine::Vector2 Field_1_0; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::Class_1_E49938F4BFE74407_Enum_3_0AD4C1E64FEEE01F Field_1_4; // 0x24
	::System::Int32 Field_1_2; // 0x28
	::System::Int32 Field_1_1; // 0x2C

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E49938F4BFE74407__CTOR_OFFSET))(this, a1, a2);
	}

	::MoleMole::Vector2Int Method_1_B180522C64587A55()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E49938F4BFE74407_METHOD_1_B180522C64587A55_OFFSET))(this);
	}
};
