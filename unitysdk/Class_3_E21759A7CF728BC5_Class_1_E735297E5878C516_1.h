#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9A0F9781FD520ADB.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_E21759A7CF728BC5;

#define CLASS_3_E21759A7CF728BC5_CLASS_1_E735297E5878C516_1_METHOD_1_25C41A9DAB43155F_OFFSET UNITYSDK_OFFSET(0xDDF6690)
#define CLASS_3_E21759A7CF728BC5_CLASS_1_E735297E5878C516_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDDF6330)

inline static constexpr unsigned int Class_3_E21759A7CF728BC5_Class_1_E735297E5878C516_1_TypeDefinitionIndex = 79118;

class Class_3_E21759A7CF728BC5_Class_1_E735297E5878C516_1 : public ::System::Object
{
public:
	::Struct_2_9A0F9781FD520ADB Field_1_1; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_3; // 0x38
	::Class_3_E21759A7CF728BC5* Field_1_4; // 0x68
	::Struct_2_FE9BD044832BC9C3 Field_1_2; // 0x70
	::System::Int32 Field_1_0; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E21759A7CF728BC5_CLASS_1_E735297E5878C516_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25C41A9DAB43155F(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E21759A7CF728BC5_CLASS_1_E735297E5878C516_1_METHOD_1_25C41A9DAB43155F_OFFSET))(this, a1, a2);
	}
};
