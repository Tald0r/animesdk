#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_2966B6D779CF39AA_2_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x7037890)
#define CLASS_2_2966B6D779CF39AA_2_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x7037A60)
#define CLASS_2_2966B6D779CF39AA_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7037B50)
#define CLASS_2_2966B6D779CF39AA_2__CTOR_OFFSET UNITYSDK_OFFSET(0x7037B40)

inline static constexpr unsigned int Class_2_2966B6D779CF39AA_2_TypeDefinitionIndex = 68997;

class Class_2_2966B6D779CF39AA_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_5; // 0x28
	::MonoUITableScrollV2* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2966B6D779CF39AA_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2966B6D779CF39AA_2_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2966B6D779CF39AA_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2966B6D779CF39AA_2_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
