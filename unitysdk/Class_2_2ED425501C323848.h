#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIActivityWeaponRewardGetWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_2ED425501C323848_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xB8418C0)
#define CLASS_2_2ED425501C323848_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0xB841670)
#define CLASS_2_2ED425501C323848_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB841A00)
#define CLASS_2_2ED425501C323848__CTOR_OFFSET UNITYSDK_OFFSET(0xB8419F0)

inline static constexpr unsigned int Class_2_2ED425501C323848_TypeDefinitionIndex = 71395;

class Class_2_2ED425501C323848 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x20
	::UnityEngine::GameObject* Field_2_6; // 0x28
	::UnityEngine::Transform* Field_2_5; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_2; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x40
	::MonoUITableScrollV2* Field_2_7; // 0x48
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIActivityWeaponRewardGetWidgetController*>* Field_2_8; // 0x50
	::MoleMole::MonoGamepadRegion* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED425501C323848__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2ED425501C323848_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED425501C323848_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2ED425501C323848_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
