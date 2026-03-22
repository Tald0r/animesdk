#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_51A0178BA95DA1D2_Class_1_4C9269E5E4998F13;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_95EF0285C16C5E7C;

#define CLASS_2_51A0178BA95DA1D2_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0x8CA1FF0)
#define CLASS_2_51A0178BA95DA1D2_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x8CA2470)
#define CLASS_2_51A0178BA95DA1D2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8CA2560)
#define CLASS_2_51A0178BA95DA1D2_METHOD_2_F53C55C580E44B03_OFFSET UNITYSDK_OFFSET(0x8CA2250)
#define CLASS_2_51A0178BA95DA1D2__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA2550)

inline static constexpr unsigned int Class_2_51A0178BA95DA1D2_TypeDefinitionIndex = 50023;

class Class_2_51A0178BA95DA1D2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::Class_3_95EF0285C16C5E7C<::MoleMole::UIDailyChallengeCardRowWidgetController*>* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_2_51A0178BA95DA1D2_Class_1_4C9269E5E4998F13*>* Field_2_4; // 0x28
	::MonoUITableScrollV2* Field_2_2; // 0x30
	::Class_3_95EF0285C16C5E7C<::MoleMole::UIDailyChallengeCardRowWidgetController*>* Field_2_1; // 0x38
	::Class_2_9E3E3CDA608A4F58* Field_2_5; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51A0178BA95DA1D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_51A0178BA95DA1D2_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51A0178BA95DA1D2_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_51A0178BA95DA1D2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_51A0178BA95DA1D2_Class_1_4C9269E5E4998F13*>* Method_2_F53C55C580E44B03(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_51A0178BA95DA1D2_Class_1_4C9269E5E4998F13*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_51A0178BA95DA1D2_METHOD_2_F53C55C580E44B03_OFFSET))(this, a1, a2);
	}
};
