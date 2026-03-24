#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_8A52DA0C3264D618_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xA6F5090)
#define CLASS_2_8A52DA0C3264D618_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0xA6F4E50)
#define CLASS_2_8A52DA0C3264D618_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA6F51A0)
#define CLASS_2_8A52DA0C3264D618__CTOR_OFFSET UNITYSDK_OFFSET(0xA6F5190)

inline static constexpr unsigned int Class_2_8A52DA0C3264D618_TypeDefinitionIndex = 43063;

class Class_2_8A52DA0C3264D618 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::UnityEngine::GameObject* Field_2_7; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x30
	::UnityEngine::UI::Text* Field_2_1; // 0x38
	::UnityEngine::CanvasGroup* Field_2_8; // 0x40
	::UnityEngine::UI::Extension::UITabButton* Field_2_0; // 0x48
	::UnityEngine::GameObject* Field_2_5; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A52DA0C3264D618__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8A52DA0C3264D618_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A52DA0C3264D618_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8A52DA0C3264D618_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
