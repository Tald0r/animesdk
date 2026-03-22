#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_B641922BEA7E7FD3_2_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x8EBFF00)
#define CLASS_2_B641922BEA7E7FD3_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8EBFFD0)
#define CLASS_2_B641922BEA7E7FD3_2_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x8EBFD20)
#define CLASS_2_B641922BEA7E7FD3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8EBFFC0)

inline static constexpr unsigned int Class_2_B641922BEA7E7FD3_2_TypeDefinitionIndex = 64208;

class Class_2_B641922BEA7E7FD3_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x28
	::MoleMole::UIGeneralButtonController* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B641922BEA7E7FD3_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B641922BEA7E7FD3_2_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B641922BEA7E7FD3_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B641922BEA7E7FD3_2_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
