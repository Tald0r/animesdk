#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class UIControllerExtensionData;
namespace MoleMole { class UIActivityDemoTrialPreviewBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_426D34B41459A2E5_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x87DA020)
#define CLASS_2_426D34B41459A2E5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x87DA110)
#define CLASS_2_426D34B41459A2E5_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x87D9E90)
#define CLASS_2_426D34B41459A2E5__CTOR_OFFSET UNITYSDK_OFFSET(0x87DA100)

inline static constexpr unsigned int Class_2_426D34B41459A2E5_TypeDefinitionIndex = 76676;

class Class_2_426D34B41459A2E5 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIActivityDemoTrialPreviewBtnWidgetController*>* Field_2_0; // 0x18
	::UIControllerExtensionData* Field_2_2; // 0x20
	::UnityEngine::Animation* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_426D34B41459A2E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_426D34B41459A2E5_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_426D34B41459A2E5_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_426D34B41459A2E5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
