#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_965BFD07B8672760_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x8884C90)
#define CLASS_2_965BFD07B8672760_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8884D80)
#define CLASS_2_965BFD07B8672760_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x8884AD0)
#define CLASS_2_965BFD07B8672760__CTOR_OFFSET UNITYSDK_OFFSET(0x8884D70)

inline static constexpr unsigned int Class_2_965BFD07B8672760_TypeDefinitionIndex = 52183;

class Class_2_965BFD07B8672760 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_1; // 0x28
	::MoleMole::UIGeneralButtonController* Field_2_3; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_965BFD07B8672760__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_965BFD07B8672760_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_965BFD07B8672760_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_965BFD07B8672760_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
