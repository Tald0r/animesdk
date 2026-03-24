#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_025FF4981524A424_375;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_01A9580380D362EF_CLASS_1_E36509667CA3DFBF_METHOD_1_A6B7F52694CF856A_OFFSET UNITYSDK_OFFSET(0x94B35D0)
#define CLASS_2_01A9580380D362EF_CLASS_1_E36509667CA3DFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x94B09F0)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_E36509667CA3DFBF_TypeDefinitionIndex = 39734;

class Class_2_01A9580380D362EF_Class_1_E36509667CA3DFBF : public ::System::Object
{
public:
	::Class_2_01A9580380D362EF* Field_1_0; // 0x10
	::System::Action_1<::Class_3_025FF4981524A424_375*>* Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_E36509667CA3DFBF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A6B7F52694CF856A(::Class_3_025FF4981524A424_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_375*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_E36509667CA3DFBF_METHOD_1_A6B7F52694CF856A_OFFSET))(this, a1);
	}
};
