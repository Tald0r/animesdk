#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8EB273F140D447F_Class_2_49D427787CEA06AF;
class Class_2_A8EB273F140D447F_Class_2_E788C747FC6E49CE_6;
class Class_2_A8EB273F140D447F_Class_2_E788C747FC6E49CE_7;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFlowerShopTurnOverWidgetController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_A8EB273F140D447F_METHOD_2_44B69BBA3A965CE1_OFFSET UNITYSDK_OFFSET(0x8D2B250)
#define CLASS_2_A8EB273F140D447F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8D2B750)
#define CLASS_2_A8EB273F140D447F_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x8D2B5A0)
#define CLASS_2_A8EB273F140D447F__CTOR_OFFSET UNITYSDK_OFFSET(0x8D2B740)

inline static constexpr unsigned int Class_2_A8EB273F140D447F_TypeDefinitionIndex = 80439;

class Class_2_A8EB273F140D447F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_A8EB273F140D447F_Class_2_49D427787CEA06AF*>* Field_2_3; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UIFlowerShopTurnOverWidgetController*>* Field_2_8; // 0x28
	::Class_3_647A206587033F4E<::MoleMole::UIActivityCompRewardBtnGroupWidgetController*>* Field_2_6; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_A8EB273F140D447F_Class_2_E788C747FC6E49CE_6*>* Field_2_4; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_A8EB273F140D447F_Class_2_E788C747FC6E49CE_7*>* Field_2_5; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x50
	::MoleMole::NotificationBadgeEx* Field_2_2; // 0x58
	::MoleMole::MonoGamepadSpaceList* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EB273F140D447F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_44B69BBA3A965CE1(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8EB273F140D447F_METHOD_2_44B69BBA3A965CE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8EB273F140D447F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EB273F140D447F_METHOD_2_DD784213055292FB_OFFSET))(this);
	}
};
