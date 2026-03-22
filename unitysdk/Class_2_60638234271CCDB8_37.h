#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_60638234271CCDB8_37_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x8281C30)
#define CLASS_2_60638234271CCDB8_37_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8281DA0)
#define CLASS_2_60638234271CCDB8_37_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x8281900)
#define CLASS_2_60638234271CCDB8_37__CTOR_OFFSET UNITYSDK_OFFSET(0x8281D90)

inline static constexpr unsigned int Class_2_60638234271CCDB8_37_TypeDefinitionIndex = 40884;

class Class_2_60638234271CCDB8_37 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_12; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_11; // 0x20
	::UnityEngine::RectTransform* Field_2_13; // 0x28
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_8; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x48
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_9; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x60
	::MoleMole::MonoGamepadModule* Field_2_14; // 0x68
	::UnityEngine::RectTransform* Field_2_6; // 0x70
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x78
	::UnityEngine::RectTransform* Field_2_5; // 0x80
	::UnityEngine::RectTransform* Field_2_4; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_37__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_37_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_37_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_37_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
