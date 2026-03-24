#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_8469E7523673A92C_10_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xAE7E180)
#define CLASS_2_8469E7523673A92C_10_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAE7E230)
#define CLASS_2_8469E7523673A92C_10_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0xAE7DF80)
#define CLASS_2_8469E7523673A92C_10__CTOR_OFFSET UNITYSDK_OFFSET(0xAE7E220)

inline static constexpr unsigned int Class_2_8469E7523673A92C_10_TypeDefinitionIndex = 72675;

class Class_2_8469E7523673A92C_10 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::UnityEngine::RectTransform* Field_2_2; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_0; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_10__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_10_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_10_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_10_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
