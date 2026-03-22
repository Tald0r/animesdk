#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C45458B6C2BEA204_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x96C50A0)
#define CLASS_2_C45458B6C2BEA204_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x96C5150)
#define CLASS_2_C45458B6C2BEA204_1_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x96C4ED0)
#define CLASS_2_C45458B6C2BEA204_1__CTOR_OFFSET UNITYSDK_OFFSET(0x96C5140)

inline static constexpr unsigned int Class_2_C45458B6C2BEA204_1_TypeDefinitionIndex = 73835;

class Class_2_C45458B6C2BEA204_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x28
	::MonoUITableScrollV2* Field_2_5; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38
	::MoleMole::UIGeneralButtonController* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C45458B6C2BEA204_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C45458B6C2BEA204_1_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C45458B6C2BEA204_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C45458B6C2BEA204_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
