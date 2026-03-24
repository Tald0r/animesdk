#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_CA67A9CEB871FFD3;
class MonoUIBtnScaleAnim;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_8DAF7F768CC9112A_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x9739AE0)
#define CLASS_2_8DAF7F768CC9112A_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x97398A0)
#define CLASS_2_8DAF7F768CC9112A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9739BF0)
#define CLASS_2_8DAF7F768CC9112A__CTOR_OFFSET UNITYSDK_OFFSET(0x9739BE0)

inline static constexpr unsigned int Class_2_8DAF7F768CC9112A_TypeDefinitionIndex = 50210;

class Class_2_8DAF7F768CC9112A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_3; // 0x28
	::UnityEngine::GameObject* Field_2_1; // 0x30
	::UnityEngine::GameObject* Field_2_8; // 0x38
	::UnityEngine::GameObject* Field_2_7; // 0x40
	::UnityEngine::GameObject* Field_2_6; // 0x48
	::MonoUIBtnScaleAnim* Field_2_4; // 0x50
	::Class_2_CA67A9CEB871FFD3* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DAF7F768CC9112A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8DAF7F768CC9112A_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8DAF7F768CC9112A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DAF7F768CC9112A_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
