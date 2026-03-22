#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_344.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_1_48F4A404A08692BE_51_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x16739630)
#define CLASS_1_48F4A404A08692BE_51_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16739610)
#define CLASS_1_48F4A404A08692BE_51_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16739520)
#define CLASS_1_48F4A404A08692BE_51_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16739620)
#define CLASS_1_48F4A404A08692BE_51__CTOR_OFFSET UNITYSDK_OFFSET(0x16739510)

inline static constexpr unsigned int Class_1_48F4A404A08692BE_51_TypeDefinitionIndex = 10606;

class Class_1_48F4A404A08692BE_51 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x10
	::Struct_2_3E75877A2888D88A_344 Field_1_0; // 0x18
	::System::Byte Field_1_3; // 0x28
	::System::Boolean Field_1_2; // 0x29
	::System::Byte Field_1_4; // 0x2A
	::System::Int32 Field_1_5; // 0x2C

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_344 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_344, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_51_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_51_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_51_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_51_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}
};
