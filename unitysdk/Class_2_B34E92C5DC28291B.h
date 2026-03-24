#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::Video { class VideoPlayer; }

#define CLASS_2_B34E92C5DC28291B_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x6741DD0)
#define CLASS_2_B34E92C5DC28291B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6741EA0)
#define CLASS_2_B34E92C5DC28291B_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x6741C20)
#define CLASS_2_B34E92C5DC28291B__CTOR_OFFSET UNITYSDK_OFFSET(0x6741E90)

inline static constexpr unsigned int Class_2_B34E92C5DC28291B_TypeDefinitionIndex = 76342;

class Class_2_B34E92C5DC28291B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Video::VideoPlayer* Field_2_2; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x20
	::Class_2_CA67A9CEB871FFD3* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34E92C5DC28291B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B34E92C5DC28291B_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B34E92C5DC28291B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34E92C5DC28291B_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
