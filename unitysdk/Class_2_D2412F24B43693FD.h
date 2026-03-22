#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D2412F24B43693FD_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x74AA850)
#define CLASS_2_D2412F24B43693FD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x74AA920)
#define CLASS_2_D2412F24B43693FD_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x74AA670)
#define CLASS_2_D2412F24B43693FD__CTOR_OFFSET UNITYSDK_OFFSET(0x74AA910)

inline static constexpr unsigned int Class_2_D2412F24B43693FD_TypeDefinitionIndex = 41141;

class Class_2_D2412F24B43693FD : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2412F24B43693FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D2412F24B43693FD_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2412F24B43693FD_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D2412F24B43693FD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
