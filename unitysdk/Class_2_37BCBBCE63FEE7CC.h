#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_37BCBBCE63FEE7CC_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0xD761430)
#define CLASS_2_37BCBBCE63FEE7CC_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xD761620)
#define CLASS_2_37BCBBCE63FEE7CC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD761710)
#define CLASS_2_37BCBBCE63FEE7CC__CTOR_OFFSET UNITYSDK_OFFSET(0xD761700)

inline static constexpr unsigned int Class_2_37BCBBCE63FEE7CC_TypeDefinitionIndex = 38612;

class Class_2_37BCBBCE63FEE7CC : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::UnityEngine::Animation* Field_2_4; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::UnityEngine::Animation* Field_2_3; // 0x38
	::UnityEngine::GameObject* Field_2_5; // 0x40
	::UnityEngine::GameObject* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BCBBCE63FEE7CC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_37BCBBCE63FEE7CC_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BCBBCE63FEE7CC_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_37BCBBCE63FEE7CC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
