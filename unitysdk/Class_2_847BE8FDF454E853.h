#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_847BE8FDF454E853_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x6252AC0)
#define CLASS_2_847BE8FDF454E853_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6252F60)
#define CLASS_2_847BE8FDF454E853_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x6252DA0)
#define CLASS_2_847BE8FDF454E853__CTOR_OFFSET UNITYSDK_OFFSET(0x6252F50)

inline static constexpr unsigned int Class_2_847BE8FDF454E853_TypeDefinitionIndex = 46976;

class Class_2_847BE8FDF454E853 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::UnityEngine::Animation* Field_2_0; // 0x20
	::MoleMole::MonoInputKey* Field_2_10; // 0x28
	::UnityEngine::RectTransform* Field_2_6; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x38
	::Class_2_CA67A9CEB871FFD3* Field_2_9; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_5; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x58
	::Class_3_647A206587033F4E<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_1; // 0x60
	::MoleMole::MonoInputKey* Field_2_11; // 0x68
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_847BE8FDF454E853__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_847BE8FDF454E853_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_847BE8FDF454E853_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_847BE8FDF454E853_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
