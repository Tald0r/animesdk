#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIOnlinePlayerItemWidgetController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_DFD3AF2CBC5041AB_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x96875D0)
#define CLASS_2_DFD3AF2CBC5041AB_METHOD_2_6C6C02341A6C6B8A_OFFSET UNITYSDK_OFFSET(0x9687400)
#define CLASS_2_DFD3AF2CBC5041AB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9687680)
#define CLASS_2_DFD3AF2CBC5041AB__CTOR_OFFSET UNITYSDK_OFFSET(0x9687670)

inline static constexpr unsigned int Class_2_DFD3AF2CBC5041AB_TypeDefinitionIndex = 67586;

class Class_2_DFD3AF2CBC5041AB : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIOnlinePlayerItemWidgetController*>* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFD3AF2CBC5041AB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C6C02341A6C6B8A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DFD3AF2CBC5041AB_METHOD_2_6C6C02341A6C6B8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFD3AF2CBC5041AB_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DFD3AF2CBC5041AB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
