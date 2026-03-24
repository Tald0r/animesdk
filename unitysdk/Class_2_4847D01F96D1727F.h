#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIActivityWeaponRewardGetWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_4847D01F96D1727F_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0xAEE8BC0)
#define CLASS_2_4847D01F96D1727F_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xAEE8E10)
#define CLASS_2_4847D01F96D1727F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAEE8F00)
#define CLASS_2_4847D01F96D1727F__CTOR_OFFSET UNITYSDK_OFFSET(0xAEE8EF0)

inline static constexpr unsigned int Class_2_4847D01F96D1727F_TypeDefinitionIndex = 41040;

class Class_2_4847D01F96D1727F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* Field_2_6; // 0x18
	::Class_3_647A206587033F4E<::MoleMole::UIActivityWeaponRewardGetWidgetController*>* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::MoleMole::MonoGamepadRegion* Field_2_2; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x38
	::MonoUITableScrollV2* Field_2_4; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4847D01F96D1727F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4847D01F96D1727F_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4847D01F96D1727F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4847D01F96D1727F_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
