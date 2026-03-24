#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_A1B2038E1630367D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x94C3ED0)
#define CLASS_2_A1B2038E1630367D_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x94C3D40)
#define CLASS_2_A1B2038E1630367D__CTOR_OFFSET UNITYSDK_OFFSET(0x94C3EC0)

inline static constexpr unsigned int Class_2_A1B2038E1630367D_TypeDefinitionIndex = 54148;

class Class_2_A1B2038E1630367D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_4; // 0x18
	::UnityEngine::UI::VerticalLayoutGroup* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::UnityEngine::Transform* Field_2_8; // 0x30
	::UnityEngine::UI::ContentSizeFitter* Field_2_7; // 0x38
	::UnityEngine::Animation* Field_2_0; // 0x40
	::UnityEngine::RectTransform* Field_2_3; // 0x48
	::UnityEngine::UI::GridLayoutGroup* Field_2_5; // 0x50
	::MonoUITableScrollV2* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1B2038E1630367D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A1B2038E1630367D_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A1B2038E1630367D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
