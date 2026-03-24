#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_782.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_1_46FECA8E1D551D46_68_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET UNITYSDK_OFFSET(0x1386A270)
#define CLASS_1_46FECA8E1D551D46_68_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x1386A050)
#define CLASS_1_46FECA8E1D551D46_68_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1386A160)
#define CLASS_1_46FECA8E1D551D46_68_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1386A170)
#define CLASS_1_46FECA8E1D551D46_68_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1386A260)
#define CLASS_1_46FECA8E1D551D46_68__CTOR_OFFSET UNITYSDK_OFFSET(0x1386A040)

inline static constexpr unsigned int Class_1_46FECA8E1D551D46_68_TypeDefinitionIndex = 16747;

class Class_1_46FECA8E1D551D46_68 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_782 Field_1_0; // 0x10
	::System::String* Field_1_6; // 0x20
	::System::String* Field_1_5; // 0x28
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x30
	::System::Boolean Field_1_2; // 0x38
	::System::Byte Field_1_4; // 0x39
	::System::Byte Field_1_3; // 0x3A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_782 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_782, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_68_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_68_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_68_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_68_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_68_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET))(this);
	}
};
