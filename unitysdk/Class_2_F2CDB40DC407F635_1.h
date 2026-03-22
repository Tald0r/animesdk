#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F2CDB40DC407F635_1_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0xAFF30F0)
#define CLASS_2_F2CDB40DC407F635_1_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xAFF3300)
#define CLASS_2_F2CDB40DC407F635_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAFF3410)
#define CLASS_2_F2CDB40DC407F635_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAFF3400)

inline static constexpr unsigned int Class_2_F2CDB40DC407F635_1_TypeDefinitionIndex = 75125;

class Class_2_F2CDB40DC407F635_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_1; // 0x18
	::UnityEngine::RectTransform* Field_2_6; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x28
	::UnityEngine::RectTransform* Field_2_5; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x38
	::UnityEngine::RectTransform* Field_2_3; // 0x40
	::UnityEngine::RectTransform* Field_2_2; // 0x48
	::UnityEngine::Transform* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2CDB40DC407F635_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2CDB40DC407F635_1_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2CDB40DC407F635_1_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2CDB40DC407F635_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
