#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_DFD420F391BEB45E_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x6568D30)
#define CLASS_2_DFD420F391BEB45E_METHOD_2_C4115FB25AD4513C_OFFSET UNITYSDK_OFFSET(0x6568FA0)
#define CLASS_2_DFD420F391BEB45E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6569210)
#define CLASS_2_DFD420F391BEB45E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x65691A0)
#define CLASS_2_DFD420F391BEB45E__CTOR_OFFSET UNITYSDK_OFFSET(0x6569200)

inline static constexpr unsigned int Class_2_DFD420F391BEB45E_TypeDefinitionIndex = 37174;

class Class_2_DFD420F391BEB45E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::UnityEngine::RectTransform* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::Class_2_9E3E3CDA608A4F58* Field_2_7; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x40
	::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>* Field_2_6; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFD420F391BEB45E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DFD420F391BEB45E_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>* Method_2_C4115FB25AD4513C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DFD420F391BEB45E_METHOD_2_C4115FB25AD4513C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DFD420F391BEB45E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFD420F391BEB45E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
