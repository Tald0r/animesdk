#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_7D5DE5682E00706F_Class_2_0D5D8405826EE6F8_16;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace MoleMole { class UIWishlistTargetAvatarPopupWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_7D5DE5682E00706F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA5A1D20)
#define CLASS_2_7D5DE5682E00706F_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xA5A1B90)
#define CLASS_2_7D5DE5682E00706F_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0xA5A1860)
#define CLASS_2_7D5DE5682E00706F__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A1D10)

inline static constexpr unsigned int Class_2_7D5DE5682E00706F_TypeDefinitionIndex = 54449;

class Class_2_7D5DE5682E00706F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_7D5DE5682E00706F_Class_2_0D5D8405826EE6F8_16*>* Field_2_0; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_4; // 0x38
	::Class_3_647A206587033F4E<::MoleMole::UIDoubleTipsInfoWidgetController*>* Field_2_7; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x48
	::Class_2_0D31A1661D004892<::Class_2_7D5DE5682E00706F_Class_2_0D5D8405826EE6F8_16*>* Field_2_1; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x58
	::Class_3_647A206587033F4E<::MoleMole::UIWishlistTargetAvatarPopupWidgetController*>* Field_2_8; // 0x60
	::UnityEngine::GameObject* Field_2_5; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D5DE5682E00706F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7D5DE5682E00706F_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D5DE5682E00706F_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7D5DE5682E00706F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
