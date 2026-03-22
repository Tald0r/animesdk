#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_2BDD92312A1DB6EF_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0xB51C390)
#define CLASS_2_2BDD92312A1DB6EF_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xB51C630)
#define CLASS_2_2BDD92312A1DB6EF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB51C790)
#define CLASS_2_2BDD92312A1DB6EF__CTOR_OFFSET UNITYSDK_OFFSET(0xB51C780)

inline static constexpr unsigned int Class_2_2BDD92312A1DB6EF_TypeDefinitionIndex = 41909;

class Class_2_2BDD92312A1DB6EF : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x18
	::UnityEngine::RectTransform* Field_2_6; // 0x20
	::MonoUITableScrollV2* Field_2_5; // 0x28
	::UnityEngine::Transform* Field_2_3; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x38
	::MoleMole::MonoGamepadModule* Field_2_11; // 0x40
	::UnityEngine::Animation* Field_2_0; // 0x48
	::UnityEngine::RectTransform* Field_2_1; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x60
	::MoleMole::MonoGamepadModule* Field_2_12; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x70
	::UnityEngine::Transform* Field_2_2; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2BDD92312A1DB6EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2BDD92312A1DB6EF_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2BDD92312A1DB6EF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2BDD92312A1DB6EF_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
