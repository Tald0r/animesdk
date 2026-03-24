#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIBossChallengeBadgeRowWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_3_CA832D813F452AD6;

#define CLASS_2_BE97744DE3DEF97D_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x9F3D030)
#define CLASS_2_BE97744DE3DEF97D_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x9F3CDD0)
#define CLASS_2_BE97744DE3DEF97D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9F3D150)
#define CLASS_2_BE97744DE3DEF97D__CTOR_OFFSET UNITYSDK_OFFSET(0x9F3D140)

inline static constexpr unsigned int Class_2_BE97744DE3DEF97D_TypeDefinitionIndex = 49272;

class Class_2_BE97744DE3DEF97D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_CA832D813F452AD6<::MoleMole::UIBossChallengeBadgeRowWidgetController*>* Field_2_7; // 0x18
	::UnityEngine::Transform* Field_2_3; // 0x20
	::UnityEngine::Transform* Field_2_0; // 0x28
	::UnityEngine::RectTransform* Field_2_6; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x38
	::UnityEngine::Transform* Field_2_4; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x50
	::UnityEngine::Transform* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE97744DE3DEF97D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BE97744DE3DEF97D_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BE97744DE3DEF97D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE97744DE3DEF97D_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
