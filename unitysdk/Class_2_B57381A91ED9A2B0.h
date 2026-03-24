#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_B57381A91ED9A2B0_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0xA0578B0)
#define CLASS_2_B57381A91ED9A2B0_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xA057AF0)
#define CLASS_2_B57381A91ED9A2B0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA057C50)
#define CLASS_2_B57381A91ED9A2B0__CTOR_OFFSET UNITYSDK_OFFSET(0xA057C40)

inline static constexpr unsigned int Class_2_B57381A91ED9A2B0_TypeDefinitionIndex = 69810;

class Class_2_B57381A91ED9A2B0 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x28
	::UnityEngine::Animation* Field_2_0; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x38
	::UnityEngine::UI::Text* Field_2_2; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x48
	::UnityEngine::UI::Text* Field_2_1; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B57381A91ED9A2B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B57381A91ED9A2B0_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B57381A91ED9A2B0_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B57381A91ED9A2B0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
