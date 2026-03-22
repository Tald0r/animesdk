#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_22A64AF0CF608D0B_Class_2_BE0ED3824EB8CA81;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_22A64AF0CF608D0B_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x8D0D9F0)
#define CLASS_2_22A64AF0CF608D0B_METHOD_2_8B7E7695FC17D6DD_OFFSET UNITYSDK_OFFSET(0x8D0D7E0)
#define CLASS_2_22A64AF0CF608D0B_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x8D0D5A0)
#define CLASS_2_22A64AF0CF608D0B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8D0DB10)
#define CLASS_2_22A64AF0CF608D0B__CTOR_OFFSET UNITYSDK_OFFSET(0x8D0DB00)

inline static constexpr unsigned int Class_2_22A64AF0CF608D0B_TypeDefinitionIndex = 60335;

class Class_2_22A64AF0CF608D0B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x30
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_22A64AF0CF608D0B_Class_2_BE0ED3824EB8CA81*>*>* Field_2_2; // 0x38
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_5; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22A64AF0CF608D0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22A64AF0CF608D0B_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_22A64AF0CF608D0B_Class_2_BE0ED3824EB8CA81*>*>* Method_2_8B7E7695FC17D6DD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_22A64AF0CF608D0B_Class_2_BE0ED3824EB8CA81*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22A64AF0CF608D0B_METHOD_2_8B7E7695FC17D6DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22A64AF0CF608D0B_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22A64AF0CF608D0B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
