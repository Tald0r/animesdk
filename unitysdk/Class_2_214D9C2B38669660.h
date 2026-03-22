#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_214D9C2B38669660_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0xDDB4A60)
#define CLASS_2_214D9C2B38669660_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xDDB4C50)
#define CLASS_2_214D9C2B38669660_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xDDB4D60)
#define CLASS_2_214D9C2B38669660__CTOR_OFFSET UNITYSDK_OFFSET(0xDDB4D50)

inline static constexpr unsigned int Class_2_214D9C2B38669660_TypeDefinitionIndex = 36581;

class Class_2_214D9C2B38669660 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_1; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UIButtonEx* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x40
	::UnityEngine::GameObject* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_214D9C2B38669660__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_214D9C2B38669660_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_214D9C2B38669660_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_214D9C2B38669660_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
