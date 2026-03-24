#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_16ED3E56DBB3A120_Class_2_7B2CDA92FC1BF5B5;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDisplayCaseEditWidgetController; }
namespace MoleMole { class UIDisplayCasePreviewWidgetController; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_16ED3E56DBB3A120_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x6FDA400)
#define CLASS_2_16ED3E56DBB3A120_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6FDA890)
#define CLASS_2_16ED3E56DBB3A120_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x6FDA6D0)
#define CLASS_2_16ED3E56DBB3A120__CTOR_OFFSET UNITYSDK_OFFSET(0x6FDA880)

inline static constexpr unsigned int Class_2_16ED3E56DBB3A120_TypeDefinitionIndex = 67165;

class Class_2_16ED3E56DBB3A120 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIImgEventTrigger* Field_2_0; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UIDisplayCasePreviewWidgetController*>* Field_2_5; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_16ED3E56DBB3A120_Class_2_7B2CDA92FC1BF5B5*>* Field_2_2; // 0x30
	::Class_3_647A206587033F4E<::MoleMole::UIDisplayCaseEditWidgetController*>* Field_2_4; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x50
	::MoleMole::MonoGamepadVirtualCursor* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16ED3E56DBB3A120__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16ED3E56DBB3A120_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16ED3E56DBB3A120_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16ED3E56DBB3A120_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
