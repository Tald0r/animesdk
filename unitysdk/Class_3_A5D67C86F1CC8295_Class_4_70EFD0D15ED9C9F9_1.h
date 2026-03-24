#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F39AA09F6254945B.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_3_A5D67C86F1CC8295_CLASS_4_70EFD0D15ED9C9F9_1_METHOD_4_39361D1F2D1BD8E3_OFFSET UNITYSDK_OFFSET(0x13C9B380)
#define CLASS_3_A5D67C86F1CC8295_CLASS_4_70EFD0D15ED9C9F9_1_METHOD_4_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x13C9B4F0)
#define CLASS_3_A5D67C86F1CC8295_CLASS_4_70EFD0D15ED9C9F9_1_METHOD_4_938C156156265273_OFFSET UNITYSDK_OFFSET(0x13C9B1E0)
#define CLASS_3_A5D67C86F1CC8295_CLASS_4_70EFD0D15ED9C9F9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9B7F0)

inline static constexpr unsigned int Class_3_A5D67C86F1CC8295_Class_4_70EFD0D15ED9C9F9_1_TypeDefinitionIndex = 41129;

class Class_3_A5D67C86F1CC8295_Class_4_70EFD0D15ED9C9F9_1 : public ::Class_3_F39AA09F6254945B
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_4_3; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_4_2; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_4_1; // 0x38
	::UnityEngine::UI::Extension::UITabButton* Field_4_0; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_4_4; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_4_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5D67C86F1CC8295_CLASS_4_70EFD0D15ED9C9F9_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_938C156156265273(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_A5D67C86F1CC8295_CLASS_4_70EFD0D15ED9C9F9_1_METHOD_4_938C156156265273_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5D67C86F1CC8295_CLASS_4_70EFD0D15ED9C9F9_1_METHOD_4_5176DC743E478510_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Method_4_39361D1F2D1BD8E3(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_A5D67C86F1CC8295_CLASS_4_70EFD0D15ED9C9F9_1_METHOD_4_39361D1F2D1BD8E3_OFFSET))(this, a1, a2);
	}
};
