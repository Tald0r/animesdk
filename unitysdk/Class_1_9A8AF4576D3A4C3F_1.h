#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_714.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_1_9A8AF4576D3A4C3F_1_METHOD_1_0D1E33BA22DE0E17_OFFSET UNITYSDK_OFFSET(0x16F22EA0)
#define CLASS_1_9A8AF4576D3A4C3F_1_METHOD_1_915D66DE5F4D6371_OFFSET UNITYSDK_OFFSET(0x16F22D50)
#define CLASS_1_9A8AF4576D3A4C3F_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16F22D40)
#define CLASS_1_9A8AF4576D3A4C3F_1_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16F22C40)
#define CLASS_1_9A8AF4576D3A4C3F_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16F22D30)
#define CLASS_1_9A8AF4576D3A4C3F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16F22C30)

inline static constexpr unsigned int Class_1_9A8AF4576D3A4C3F_1_TypeDefinitionIndex = 17073;

class Class_1_9A8AF4576D3A4C3F_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_6; // 0x18
	::Struct_2_3E75877A2888D88A_714 Field_1_0; // 0x28
	::System::Byte Field_1_3; // 0x38
	::System::Boolean Field_1_2; // 0x39
	::System::Byte Field_1_4; // 0x3A
	::System::UInt64 Field_1_5; // 0x40

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_714 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_714, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_9A8AF4576D3A4C3F_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A8AF4576D3A4C3F_1_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A8AF4576D3A4C3F_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9A8AF4576D3A4C3F_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_915D66DE5F4D6371()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A8AF4576D3A4C3F_1_METHOD_1_915D66DE5F4D6371_OFFSET))(this);
	}

	::Foundation::AssetPath Method_1_0D1E33BA22DE0E17()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A8AF4576D3A4C3F_1_METHOD_1_0D1E33BA22DE0E17_OFFSET))(this);
	}
};
