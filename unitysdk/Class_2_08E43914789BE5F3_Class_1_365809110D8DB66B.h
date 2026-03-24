#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_08E43914789BE5F3;
class Class_3_025FF4981524A424_587;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_08E43914789BE5F3_CLASS_1_365809110D8DB66B_METHOD_1_A431FCDD94838DF0_OFFSET UNITYSDK_OFFSET(0x94926E0)
#define CLASS_2_08E43914789BE5F3_CLASS_1_365809110D8DB66B__CTOR_OFFSET UNITYSDK_OFFSET(0x94926C0)

inline static constexpr unsigned int Class_2_08E43914789BE5F3_Class_1_365809110D8DB66B_TypeDefinitionIndex = 57988;

class Class_2_08E43914789BE5F3_Class_1_365809110D8DB66B : public ::System::Object
{
public:
	::Class_2_08E43914789BE5F3* Field_1_0; // 0x10
	::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_587*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08E43914789BE5F3_CLASS_1_365809110D8DB66B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A431FCDD94838DF0(::System::Boolean a1, ::Class_3_025FF4981524A424_587* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_587*))((::PBYTE)hIl2Cpp + CLASS_2_08E43914789BE5F3_CLASS_1_365809110D8DB66B_METHOD_1_A431FCDD94838DF0_OFFSET))(this, a1, a2);
	}
};
