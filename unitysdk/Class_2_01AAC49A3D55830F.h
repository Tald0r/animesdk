#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_01AAC49A3D55830F_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x8FF5A00)
#define CLASS_2_01AAC49A3D55830F_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x8FF5C30)
#define CLASS_2_01AAC49A3D55830F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8FF5D40)
#define CLASS_2_01AAC49A3D55830F__CTOR_OFFSET UNITYSDK_OFFSET(0x8FF5D30)

inline static constexpr unsigned int Class_2_01AAC49A3D55830F_TypeDefinitionIndex = 67999;

class Class_2_01AAC49A3D55830F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x28
	::MoleMole::UIGeneralButtonController* Field_2_7; // 0x30
	::UnityEngine::GameObject* Field_2_3; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::Class_3_647A206587033F4E<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_0; // 0x48
	::UnityEngine::RectTransform* Field_2_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01AAC49A3D55830F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_01AAC49A3D55830F_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01AAC49A3D55830F_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_01AAC49A3D55830F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
