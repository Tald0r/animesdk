#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_02112F4096DC1B39_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0xCB16F30)
#define CLASS_2_02112F4096DC1B39_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xCB17130)
#define CLASS_2_02112F4096DC1B39_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xCB17220)
#define CLASS_2_02112F4096DC1B39__CTOR_OFFSET UNITYSDK_OFFSET(0xCB17210)

inline static constexpr unsigned int Class_2_02112F4096DC1B39_TypeDefinitionIndex = 51995;

class Class_2_02112F4096DC1B39 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x20
	::UnityEngine::RectTransform* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_1; // 0x30
	::UnityEngine::RectTransform* Field_2_5; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02112F4096DC1B39__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_02112F4096DC1B39_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_02112F4096DC1B39_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02112F4096DC1B39_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
