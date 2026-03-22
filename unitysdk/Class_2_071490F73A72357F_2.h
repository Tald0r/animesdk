#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_071490F73A72357F_2_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x68641D0)
#define CLASS_2_071490F73A72357F_2_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x6863FF0)
#define CLASS_2_071490F73A72357F_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x68642E0)
#define CLASS_2_071490F73A72357F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x68642D0)

inline static constexpr unsigned int Class_2_071490F73A72357F_2_TypeDefinitionIndex = 46918;

class Class_2_071490F73A72357F_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::UnityEngine::UI::Text* Field_2_4; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_2_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_2_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
