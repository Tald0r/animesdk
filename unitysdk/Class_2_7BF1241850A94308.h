#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_7BF1241850A94308_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x927F710)
#define CLASS_2_7BF1241850A94308_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0x927F4D0)
#define CLASS_2_7BF1241850A94308_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x927F830)
#define CLASS_2_7BF1241850A94308__CTOR_OFFSET UNITYSDK_OFFSET(0x927F820)

inline static constexpr unsigned int Class_2_7BF1241850A94308_TypeDefinitionIndex = 39101;

class Class_2_7BF1241850A94308 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_3; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::UnityEngine::Transform* Field_2_4; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x40
	::UnityEngine::RectTransform* Field_2_7; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF1241850A94308__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7BF1241850A94308_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF1241850A94308_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7BF1241850A94308_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
