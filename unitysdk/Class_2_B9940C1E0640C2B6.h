#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F76884FC39FD584;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_B9940C1E0640C2B6_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x835CB10)
#define CLASS_2_B9940C1E0640C2B6_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x835CDA0)
#define CLASS_2_B9940C1E0640C2B6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x835CE90)
#define CLASS_2_B9940C1E0640C2B6__CTOR_OFFSET UNITYSDK_OFFSET(0x835CE80)

inline static constexpr unsigned int Class_2_B9940C1E0640C2B6_TypeDefinitionIndex = 49636;

class Class_2_B9940C1E0640C2B6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_7; // 0x18
	::UnityEngine::GameObject* Field_2_6; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_2; // 0x30
	::MonoUITableScrollV2* Field_2_0; // 0x38
	::Class_3_647A206587033F4E<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_1; // 0x40
	::Class_2_9E3E3CDA608A4F58* Field_2_4; // 0x48
	::Class_2_1F76884FC39FD584* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9940C1E0640C2B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B9940C1E0640C2B6_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9940C1E0640C2B6_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B9940C1E0640C2B6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
