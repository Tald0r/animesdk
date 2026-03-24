#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_382A906A6D92F5A5_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xA891560)
#define CLASS_2_382A906A6D92F5A5_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0xA891340)
#define CLASS_2_382A906A6D92F5A5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA891610)
#define CLASS_2_382A906A6D92F5A5__CTOR_OFFSET UNITYSDK_OFFSET(0xA891600)

inline static constexpr unsigned int Class_2_382A906A6D92F5A5_TypeDefinitionIndex = 79367;

class Class_2_382A906A6D92F5A5 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_4; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_5; // 0x28
	::Class_2_9E3E3CDA608A4F58* Field_2_2; // 0x30
	::MoleMole::MonoInputKey* Field_2_6; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x40
	::UnityEngine::RectTransform* Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_382A906A6D92F5A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_382A906A6D92F5A5_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_382A906A6D92F5A5_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_382A906A6D92F5A5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
