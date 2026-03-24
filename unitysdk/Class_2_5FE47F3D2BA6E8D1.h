#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_5FE47F3D2BA6E8D1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x9235D10)
#define CLASS_2_5FE47F3D2BA6E8D1_METHOD_2_1D05C371EBD1713E_OFFSET UNITYSDK_OFFSET(0x9235B00)
#define CLASS_2_5FE47F3D2BA6E8D1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9235DC0)
#define CLASS_2_5FE47F3D2BA6E8D1__CTOR_OFFSET UNITYSDK_OFFSET(0x9235DB0)

inline static constexpr unsigned int Class_2_5FE47F3D2BA6E8D1_TypeDefinitionIndex = 53542;

class Class_2_5FE47F3D2BA6E8D1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::Class_2_9E3E3CDA608A4F58* Field_2_6; // 0x38
	::UnityEngine::Transform* Field_2_3; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FE47F3D2BA6E8D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1D05C371EBD1713E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5FE47F3D2BA6E8D1_METHOD_2_1D05C371EBD1713E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FE47F3D2BA6E8D1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5FE47F3D2BA6E8D1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
