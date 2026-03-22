#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_79AE422BA06F6D26_6;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_938422ACC5F2A616_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x7FF4A80)
#define CLASS_2_938422ACC5F2A616_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x7FF47F0)
#define CLASS_2_938422ACC5F2A616_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7FF4B90)
#define CLASS_2_938422ACC5F2A616__CTOR_OFFSET UNITYSDK_OFFSET(0x7FF4B80)

inline static constexpr unsigned int Class_2_938422ACC5F2A616_TypeDefinitionIndex = 42932;

class Class_2_938422ACC5F2A616 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::UnityEngine::RectTransform* Field_2_10; // 0x20
	::MonoUITableScrollV2* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_2; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_6*>* Field_2_6; // 0x38
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_5; // 0x40
	::UnityEngine::RectTransform* Field_2_11; // 0x48
	::UnityEngine::GameObject* Field_2_8; // 0x50
	::UnityEngine::Transform* Field_2_0; // 0x58
	::UnityEngine::RectTransform* Field_2_7; // 0x60
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_938422ACC5F2A616__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_938422ACC5F2A616_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_938422ACC5F2A616_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_938422ACC5F2A616_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
