#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8EB273F140D447F_Class_2_49D427787CEA06AF;
class Class_2_A8EB273F140D447F_Class_2_E788C747FC6E49CE_3;
class Class_2_A8EB273F140D447F_Class_2_E788C747FC6E49CE_4;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFlowerShopTurnOverWidgetController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_A8EB273F140D447F_METHOD_2_44B69BBA3A965CE1_OFFSET UNITYSDK_OFFSET(0x925ED80)
#define CLASS_2_A8EB273F140D447F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x925F280)
#define CLASS_2_A8EB273F140D447F_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x925F0D0)
#define CLASS_2_A8EB273F140D447F__CTOR_OFFSET UNITYSDK_OFFSET(0x925F270)

inline static constexpr unsigned int Class_2_A8EB273F140D447F_TypeDefinitionIndex = 59228;

class Class_2_A8EB273F140D447F : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadgeEx* Field_2_2; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_A8EB273F140D447F_Class_2_49D427787CEA06AF*>* Field_2_3; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_A8EB273F140D447F_Class_2_E788C747FC6E49CE_3*>* Field_2_4; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_A8EB273F140D447F_Class_2_E788C747FC6E49CE_4*>* Field_2_5; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x48
	::MoleMole::MonoGamepadSpaceList* Field_2_7; // 0x50
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIFlowerShopTurnOverWidgetController*>* Field_2_8; // 0x58
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIActivityCompRewardBtnGroupWidgetController*>* Field_2_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EB273F140D447F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_44B69BBA3A965CE1(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8EB273F140D447F_METHOD_2_44B69BBA3A965CE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EB273F140D447F_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8EB273F140D447F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
