#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_06C2877021BC3D18_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0xBDDD750)
#define CLASS_2_06C2877021BC3D18_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xBDDD970)
#define CLASS_2_06C2877021BC3D18_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBDDDA60)
#define CLASS_2_06C2877021BC3D18__CTOR_OFFSET UNITYSDK_OFFSET(0xBDDDA50)

inline static constexpr unsigned int Class_2_06C2877021BC3D18_TypeDefinitionIndex = 69950;

class Class_2_06C2877021BC3D18 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_9E3E3CDA608A4F58* Field_2_2; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_5; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06C2877021BC3D18__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_06C2877021BC3D18_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06C2877021BC3D18_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_06C2877021BC3D18_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
