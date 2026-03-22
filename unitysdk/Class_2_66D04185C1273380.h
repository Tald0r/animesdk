#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_66D04185C1273380_Class_2_EF16346D79C18F15_14;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_66D04185C1273380_METHOD_2_6C6C02341A6C6B8A_OFFSET UNITYSDK_OFFSET(0x8444280)
#define CLASS_2_66D04185C1273380_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x8444450)
#define CLASS_2_66D04185C1273380_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8444540)
#define CLASS_2_66D04185C1273380__CTOR_OFFSET UNITYSDK_OFFSET(0x8444530)

inline static constexpr unsigned int Class_2_66D04185C1273380_TypeDefinitionIndex = 55533;

class Class_2_66D04185C1273380 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_66D04185C1273380_Class_2_EF16346D79C18F15_14*>* Field_2_1; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_66D04185C1273380_Class_2_EF16346D79C18F15_14*>* Field_2_3; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_66D04185C1273380_Class_2_EF16346D79C18F15_14*>* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66D04185C1273380__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C6C02341A6C6B8A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_66D04185C1273380_METHOD_2_6C6C02341A6C6B8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_66D04185C1273380_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66D04185C1273380_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
