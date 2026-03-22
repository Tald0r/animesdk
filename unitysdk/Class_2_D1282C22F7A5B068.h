#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UICommonRewardItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_95EF0285C16C5E7C;

#define CLASS_2_D1282C22F7A5B068_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xE6E9400)
#define CLASS_2_D1282C22F7A5B068_METHOD_2_7B352AB79EC4AAF7_OFFSET UNITYSDK_OFFSET(0xE6E9660)
#define CLASS_2_D1282C22F7A5B068_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xE6E9860)
#define CLASS_2_D1282C22F7A5B068_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xE6E9930)
#define CLASS_2_D1282C22F7A5B068__CTOR_OFFSET UNITYSDK_OFFSET(0xE6E9920)

inline static constexpr unsigned int Class_2_D1282C22F7A5B068_TypeDefinitionIndex = 71384;

class Class_2_D1282C22F7A5B068 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_4; // 0x18
	::System::Collections::Generic::List_1<::Class_3_95EF0285C16C5E7C<::MoleMole::UICommonRewardItemWidgetController*>*>* Field_2_6; // 0x20
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::Class_3_95EF0285C16C5E7C<::MoleMole::UICommonRewardItemWidgetController*>*>* Field_2_5; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x38
	::MoleMole::MonoGamepadCustomList* Field_2_7; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x48
	::UnityEngine::RectTransform* Field_2_3; // 0x50
	::MoleMole::MonoGamepadSelectable* Field_2_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_95EF0285C16C5E7C<::MoleMole::UICommonRewardItemWidgetController*>*>* Method_2_7B352AB79EC4AAF7(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_95EF0285C16C5E7C<::MoleMole::UICommonRewardItemWidgetController*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068_METHOD_2_7B352AB79EC4AAF7_OFFSET))(this, a1, a2);
	}
};
