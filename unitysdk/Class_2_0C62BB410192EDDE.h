#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }

#define CLASS_2_0C62BB410192EDDE_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x16EAB3D0)
#define CLASS_2_0C62BB410192EDDE_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x16EAB0E0)
#define CLASS_2_0C62BB410192EDDE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16EAB5E0)
#define CLASS_2_0C62BB410192EDDE__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAB5D0)

inline static constexpr unsigned int Class_2_0C62BB410192EDDE_TypeDefinitionIndex = 38316;

class Class_2_0C62BB410192EDDE : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x20
	::UnityEngine::GameObject* Field_2_1; // 0x28
	::UnityEngine::GameObject* Field_2_2; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_12; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x58
	::UnityEngine::UI::Extension::UIImgEventTrigger* Field_2_8; // 0x60
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x68
	::Class_2_60DDD9C206686F44* Field_2_11; // 0x70
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C62BB410192EDDE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C62BB410192EDDE_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C62BB410192EDDE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C62BB410192EDDE_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}
};
