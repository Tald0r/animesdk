#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9F79166E94E6BD41_Enum_3_CA7C9A6C1BE1373B_1.h"
#include "unitysdk/Enum_3_0A43EA4B15EC3408.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_9F79166E94E6BD41_CLASS_1_A9DF9F4312C529DF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9F85200)
#define CLASS_1_9F79166E94E6BD41_CLASS_1_A9DF9F4312C529DF__CTOR_2_OFFSET UNITYSDK_OFFSET(0x9F85210)
#define CLASS_1_9F79166E94E6BD41_CLASS_1_A9DF9F4312C529DF__CTOR_OFFSET UNITYSDK_OFFSET(0x9F851F0)

inline static constexpr unsigned int Class_1_9F79166E94E6BD41_Class_1_A9DF9F4312C529DF_TypeDefinitionIndex = 81267;

class Class_1_9F79166E94E6BD41_Class_1_A9DF9F4312C529DF : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_1; // 0x10
	::System::Func_1<::Class_1_9F79166E94E6BD41_Enum_3_CA7C9A6C1BE1373B_1>* Field_1_0; // 0x18
	::MoleMole::InputLogicEventType Field_1_4; // 0x20
	::Enum_3_0A43EA4B15EC3408 Field_1_3; // 0x24
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_CLASS_1_A9DF9F4312C529DF__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Action_1<::System::Int32>* a1, ::System::Int32 a2, ::Enum_3_0A43EA4B15EC3408 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*, ::System::Int32, ::Enum_3_0A43EA4B15EC3408))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_CLASS_1_A9DF9F4312C529DF__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_2(::System::Action_1<::System::Int32>* a1, ::System::Int32 a2, ::Enum_3_0A43EA4B15EC3408 a3, ::MoleMole::InputLogicEventType a4, ::System::Func_1<::Class_1_9F79166E94E6BD41_Enum_3_CA7C9A6C1BE1373B_1>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*, ::System::Int32, ::Enum_3_0A43EA4B15EC3408, ::MoleMole::InputLogicEventType, ::System::Func_1<::Class_1_9F79166E94E6BD41_Enum_3_CA7C9A6C1BE1373B_1>*))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_CLASS_1_A9DF9F4312C529DF__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
