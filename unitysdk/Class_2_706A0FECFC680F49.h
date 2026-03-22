#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
class ShaderAniHelp;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_706A0FECFC680F49_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x6DF21E0)
#define CLASS_2_706A0FECFC680F49_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x6DF24A0)
#define CLASS_2_706A0FECFC680F49_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6DF2600)
#define CLASS_2_706A0FECFC680F49__CTOR_OFFSET UNITYSDK_OFFSET(0x6DF25F0)

inline static constexpr unsigned int Class_2_706A0FECFC680F49_TypeDefinitionIndex = 73852;

class Class_2_706A0FECFC680F49 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_9E3E3CDA608A4F58* Field_2_11; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x20
	::ShaderAniHelp* Field_2_10; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x48
	::UnityEngine::RectTransform* Field_2_9; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x58
	::Class_2_9E3E3CDA608A4F58* Field_2_4; // 0x60
	::MoleMole::MonoGamepadModule* Field_2_3; // 0x68
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_706A0FECFC680F49__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_706A0FECFC680F49_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_706A0FECFC680F49_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_706A0FECFC680F49_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
