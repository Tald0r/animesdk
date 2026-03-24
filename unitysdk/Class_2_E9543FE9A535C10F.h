#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIBabeltowerMenuBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_E9543FE9A535C10F_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0xBCCF120)
#define CLASS_2_E9543FE9A535C10F_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xBCCF350)
#define CLASS_2_E9543FE9A535C10F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBCCF440)
#define CLASS_2_E9543FE9A535C10F__CTOR_OFFSET UNITYSDK_OFFSET(0xBCCF430)

inline static constexpr unsigned int Class_2_E9543FE9A535C10F_TypeDefinitionIndex = 39911;

class Class_2_E9543FE9A535C10F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIBabeltowerMenuBtnWidgetController*>* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_5; // 0x20
	::MoleMole::NotificationBadge* Field_2_4; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x30
	::MoleMole::NotificationBadge* Field_2_3; // 0x38
	::Class_3_647A206587033F4E<::MoleMole::UIBabeltowerMenuBtnWidgetController*>* Field_2_1; // 0x40
	::UnityEngine::RectTransform* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9543FE9A535C10F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E9543FE9A535C10F_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E9543FE9A535C10F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9543FE9A535C10F_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
