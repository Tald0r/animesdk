#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWishlistTargetAvatarPopupWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_BA784AB3E6BD2F2F_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x9E5ADA0)
#define CLASS_2_BA784AB3E6BD2F2F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9E5AF20)
#define CLASS_2_BA784AB3E6BD2F2F_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x9E5AB00)
#define CLASS_2_BA784AB3E6BD2F2F__CTOR_OFFSET UNITYSDK_OFFSET(0x9E5AF10)

inline static constexpr unsigned int Class_2_BA784AB3E6BD2F2F_TypeDefinitionIndex = 38574;

class Class_2_BA784AB3E6BD2F2F : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadge* Field_2_6; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UIWishlistTargetAvatarPopupWidgetController*>* Field_2_9; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48
	::UnityEngine::RectTransform* Field_2_5; // 0x50
	::MonoUITableScrollV2* Field_2_3; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA784AB3E6BD2F2F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BA784AB3E6BD2F2F_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA784AB3E6BD2F2F_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BA784AB3E6BD2F2F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
