#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_623938995AB79E10_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x6C3A010)
#define CLASS_2_623938995AB79E10_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x6C39D60)
#define CLASS_2_623938995AB79E10_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6C3A130)
#define CLASS_2_623938995AB79E10__CTOR_OFFSET UNITYSDK_OFFSET(0x6C3A120)

inline static constexpr unsigned int Class_2_623938995AB79E10_TypeDefinitionIndex = 49869;

class Class_2_623938995AB79E10 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::MoleMole::UIGeneralButtonController* Field_2_4; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x40
	::Class_2_9E3E3CDA608A4F58* Field_2_3; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x50
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* Field_2_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_623938995AB79E10__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_623938995AB79E10_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_623938995AB79E10_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_623938995AB79E10_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
