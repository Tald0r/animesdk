#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_00E0F6A4450214AA_7_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0xB6BBEE0)
#define CLASS_2_00E0F6A4450214AA_7_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xB6BC0B0)
#define CLASS_2_00E0F6A4450214AA_7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB6BC180)
#define CLASS_2_00E0F6A4450214AA_7__CTOR_OFFSET UNITYSDK_OFFSET(0xB6BC170)

inline static constexpr unsigned int Class_2_00E0F6A4450214AA_7_TypeDefinitionIndex = 78921;

class Class_2_00E0F6A4450214AA_7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00E0F6A4450214AA_7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_00E0F6A4450214AA_7_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00E0F6A4450214AA_7_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_00E0F6A4450214AA_7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
