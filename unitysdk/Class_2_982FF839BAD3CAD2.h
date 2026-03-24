#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_982FF839BAD3CAD2_Class_2_0DE7BB0EE2463793;
class Class_2_982FF839BAD3CAD2_Class_2_EF16346D79C18F15;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_982FF839BAD3CAD2_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x69CB0A0)
#define CLASS_2_982FF839BAD3CAD2_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x69CB2C0)
#define CLASS_2_982FF839BAD3CAD2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x69CB3B0)
#define CLASS_2_982FF839BAD3CAD2__CTOR_OFFSET UNITYSDK_OFFSET(0x69CB3A0)

inline static constexpr unsigned int Class_2_982FF839BAD3CAD2_TypeDefinitionIndex = 39357;

class Class_2_982FF839BAD3CAD2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_982FF839BAD3CAD2_Class_2_0DE7BB0EE2463793*>* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_982FF839BAD3CAD2_Class_2_EF16346D79C18F15*>* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_982FF839BAD3CAD2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_982FF839BAD3CAD2_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_982FF839BAD3CAD2_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_982FF839BAD3CAD2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
