#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_80C6A26F0ED63F35;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_57821D84473AF5D0_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0x80068B0)
#define CLASS_2_57821D84473AF5D0_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x8006B20)
#define CLASS_2_57821D84473AF5D0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8006C80)
#define CLASS_2_57821D84473AF5D0__CTOR_OFFSET UNITYSDK_OFFSET(0x8006C70)

inline static constexpr unsigned int Class_2_57821D84473AF5D0_TypeDefinitionIndex = 80247;

class Class_2_57821D84473AF5D0 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::MoleMole::MonoGamepadSelectable* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_80C6A26F0ED63F35*>* Field_2_5; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x48
	::UnityEngine::GameObject* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57821D84473AF5D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_57821D84473AF5D0_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57821D84473AF5D0_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_57821D84473AF5D0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
