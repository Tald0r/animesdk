#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C6E8F7731271F88A.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/System/Object.h"

class Class_5_2169ABC757988FED;

#define CLASS_1_B0D8A511FD44B47A_METHOD_1_A99EF338505A0EA9_OFFSET UNITYSDK_OFFSET(0x84C83B0)
#define CLASS_1_B0D8A511FD44B47A_METHOD_1_CB96727F8C515ACA_OFFSET UNITYSDK_OFFSET(0x84C8450)
#define CLASS_1_B0D8A511FD44B47A__CTOR_OFFSET UNITYSDK_OFFSET(0x84C83A0)

inline static constexpr unsigned int Class_1_B0D8A511FD44B47A_TypeDefinitionIndex = 40833;

class Class_1_B0D8A511FD44B47A : public ::System::Object
{
public:
	::Enum_3_C6E8F7731271F88A Field_1_3; // 0x10
	::System::Int32 Field_1_0; // 0x14
	::ProtoScript::NodeState Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0D8A511FD44B47A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A99EF338505A0EA9(::Class_1_B0D8A511FD44B47A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B0D8A511FD44B47A*))((::PBYTE)hIl2Cpp + CLASS_1_B0D8A511FD44B47A_METHOD_1_A99EF338505A0EA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB96727F8C515ACA(::Class_5_2169ABC757988FED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_2169ABC757988FED*))((::PBYTE)hIl2Cpp + CLASS_1_B0D8A511FD44B47A_METHOD_1_CB96727F8C515ACA_OFFSET))(this, a1);
	}
};
