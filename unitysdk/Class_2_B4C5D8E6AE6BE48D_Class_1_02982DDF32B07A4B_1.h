#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FD382C753AFE8157;
namespace System { class Action; }

#define CLASS_2_B4C5D8E6AE6BE48D_CLASS_1_02982DDF32B07A4B_1_METHOD_1_5FC72589FBA30B67_OFFSET UNITYSDK_OFFSET(0x9E17BC0)
#define CLASS_2_B4C5D8E6AE6BE48D_CLASS_1_02982DDF32B07A4B_1_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x9E17C30)
#define CLASS_2_B4C5D8E6AE6BE48D_CLASS_1_02982DDF32B07A4B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9E17BB0)

inline static constexpr unsigned int Class_2_B4C5D8E6AE6BE48D_Class_1_02982DDF32B07A4B_1_TypeDefinitionIndex = 56401;

class Class_2_B4C5D8E6AE6BE48D_Class_1_02982DDF32B07A4B_1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Action* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4C5D8E6AE6BE48D_CLASS_1_02982DDF32B07A4B_1__CTOR_OFFSET))(this);
	}

	::System::Action* Method_1_5FC72589FBA30B67(::Class_2_FD382C753AFE8157* a1)
	{
		return ((::System::Action*(*)(::PVOID, ::Class_2_FD382C753AFE8157*))((::PBYTE)hIl2Cpp + CLASS_2_B4C5D8E6AE6BE48D_CLASS_1_02982DDF32B07A4B_1_METHOD_1_5FC72589FBA30B67_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4C5D8E6AE6BE48D_CLASS_1_02982DDF32B07A4B_1_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}
};
