#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7F72DB9FB37DF3E5.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_28.h"

class Class_1_FE732C8816791DCD;

#define CLASS_2_8E8B38E6F8E12D8F_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x6990A40)
#define CLASS_2_8E8B38E6F8E12D8F_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x6990A20)
#define CLASS_2_8E8B38E6F8E12D8F_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x6990A50)
#define CLASS_2_8E8B38E6F8E12D8F_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x6990A30)
#define CLASS_2_8E8B38E6F8E12D8F__CTOR_OFFSET UNITYSDK_OFFSET(0x6990A10)

inline static constexpr unsigned int Class_2_8E8B38E6F8E12D8F_TypeDefinitionIndex = 66048;

class Class_2_8E8B38E6F8E12D8F : public ::Class_1_7F72DB9FB37DF3E5
{
public:
	::System::Boolean Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x21

	::System::Void _ctor(::Enum_3_0A3761FE34514D6C_28 a1, ::Class_1_FE732C8816791DCD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_28, ::Class_1_FE732C8816791DCD*))((::PBYTE)hIl2Cpp + CLASS_2_8E8B38E6F8E12D8F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8E8B38E6F8E12D8F_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E8B38E6F8E12D8F_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8E8B38E6F8E12D8F_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E8B38E6F8E12D8F_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
