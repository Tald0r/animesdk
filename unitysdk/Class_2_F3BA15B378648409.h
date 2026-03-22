#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_F3BA15B378648409_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0xA218890)
#define CLASS_2_F3BA15B378648409_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xA218A90)
#define CLASS_2_F3BA15B378648409_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA218B80)
#define CLASS_2_F3BA15B378648409__CTOR_OFFSET UNITYSDK_OFFSET(0xA218B70)

inline static constexpr unsigned int Class_2_F3BA15B378648409_TypeDefinitionIndex = 53244;

class Class_2_F3BA15B378648409 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_0; // 0x20
	::UnityEngine::Animation* Field_2_2; // 0x28
	::UIControllerExtensionData* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::UnityEngine::RectTransform* Field_2_7; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3BA15B378648409__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F3BA15B378648409_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F3BA15B378648409_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3BA15B378648409_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
