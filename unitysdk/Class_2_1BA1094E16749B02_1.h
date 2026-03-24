#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_1BA1094E16749B02_1_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0xC2DBAE0)
#define CLASS_2_1BA1094E16749B02_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xC2DBC20)
#define CLASS_2_1BA1094E16749B02_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC2DBC10)

inline static constexpr unsigned int Class_2_1BA1094E16749B02_1_TypeDefinitionIndex = 80559;

class Class_2_1BA1094E16749B02_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::MonoUITableScrollV2* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::UnityEngine::Transform* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BA1094E16749B02_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1BA1094E16749B02_1_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1BA1094E16749B02_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
