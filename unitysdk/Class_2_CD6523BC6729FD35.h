#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIActgivityMasterCoffeeItemWidgetController; }
namespace MoleMole { class UIActgivityMasterHollowItemWidgetController; }
namespace MoleMole { class UIActgivityMasterRamenItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_CD6523BC6729FD35_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x88B67D0)
#define CLASS_2_CD6523BC6729FD35_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x88B6AE0)
#define CLASS_2_CD6523BC6729FD35_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x88B6C60)
#define CLASS_2_CD6523BC6729FD35__CTOR_OFFSET UNITYSDK_OFFSET(0x88B6C50)

inline static constexpr unsigned int Class_2_CD6523BC6729FD35_TypeDefinitionIndex = 74875;

class Class_2_CD6523BC6729FD35 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UIActgivityMasterHollowItemWidgetController*>* Field_2_10; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x30
	::UnityEngine::GameObject* Field_2_8; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x48
	::UnityEngine::GameObject* Field_2_3; // 0x50
	::UnityEngine::Transform* Field_2_6; // 0x58
	::UnityEngine::GameObject* Field_2_7; // 0x60
	::Class_3_647A206587033F4E<::MoleMole::UIActgivityMasterCoffeeItemWidgetController*>* Field_2_12; // 0x68
	::MoleMole::MonoGamepadRegion* Field_2_4; // 0x70
	::Class_3_647A206587033F4E<::MoleMole::UIActgivityMasterRamenItemWidgetController*>* Field_2_11; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD6523BC6729FD35__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CD6523BC6729FD35_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CD6523BC6729FD35_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD6523BC6729FD35_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
