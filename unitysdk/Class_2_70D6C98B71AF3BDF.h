#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_70D6C98B71AF3BDF_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x9C5A020)
#define CLASS_2_70D6C98B71AF3BDF_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x9C5A270)
#define CLASS_2_70D6C98B71AF3BDF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9C5A360)
#define CLASS_2_70D6C98B71AF3BDF__CTOR_OFFSET UNITYSDK_OFFSET(0x9C5A350)

inline static constexpr unsigned int Class_2_70D6C98B71AF3BDF_TypeDefinitionIndex = 55068;

class Class_2_70D6C98B71AF3BDF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_8; // 0x18
	::UnityEngine::Transform* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_7; // 0x28
	::UnityEngine::Animation* Field_2_2; // 0x30
	::UnityEngine::RectTransform* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_0; // 0x40
	::UnityEngine::RectTransform* Field_2_9; // 0x48
	::UnityEngine::Animation* Field_2_1; // 0x50
	::UnityEngine::Animation* Field_2_3; // 0x58
	::UnityEngine::Animation* Field_2_4; // 0x60
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D6C98B71AF3BDF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_70D6C98B71AF3BDF_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D6C98B71AF3BDF_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_70D6C98B71AF3BDF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
