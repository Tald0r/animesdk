#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_741FF4CEF6E2E89E_METHOD_2_2B52DBEEACA798D8_OFFSET UNITYSDK_OFFSET(0xAA05C70)
#define CLASS_2_741FF4CEF6E2E89E_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xAA05E70)
#define CLASS_2_741FF4CEF6E2E89E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAA05F40)
#define CLASS_2_741FF4CEF6E2E89E__CTOR_OFFSET UNITYSDK_OFFSET(0xAA05F30)

inline static constexpr unsigned int Class_2_741FF4CEF6E2E89E_TypeDefinitionIndex = 50964;

class Class_2_741FF4CEF6E2E89E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38
	::UnityEngine::GameObject* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_741FF4CEF6E2E89E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2B52DBEEACA798D8(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_741FF4CEF6E2E89E_METHOD_2_2B52DBEEACA798D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_741FF4CEF6E2E89E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_741FF4CEF6E2E89E_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
