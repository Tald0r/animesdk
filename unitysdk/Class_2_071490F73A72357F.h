#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_071490F73A72357F_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x62A78F0)
#define CLASS_2_071490F73A72357F_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x62A7710)
#define CLASS_2_071490F73A72357F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x62A7A00)
#define CLASS_2_071490F73A72357F__CTOR_OFFSET UNITYSDK_OFFSET(0x62A79F0)

inline static constexpr unsigned int Class_2_071490F73A72357F_TypeDefinitionIndex = 49358;

class Class_2_071490F73A72357F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_4; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_2; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x30
	::UnityEngine::GameObject* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
