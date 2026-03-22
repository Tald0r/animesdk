#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_383.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5065FA890F0D9B8A_METHOD_1_0D1E33BA22DE0E17_OFFSET UNITYSDK_OFFSET(0x169B1880)
#define CLASS_1_5065FA890F0D9B8A_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x169B1F20)
#define CLASS_1_5065FA890F0D9B8A_METHOD_1_915D66DE5F4D6371_OFFSET UNITYSDK_OFFSET(0x169B1A00)
#define CLASS_1_5065FA890F0D9B8A_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x169B1B50)
#define CLASS_1_5065FA890F0D9B8A_METHOD_1_CCC44210DEA28483_OFFSET UNITYSDK_OFFSET(0x169B1B60)
#define CLASS_1_5065FA890F0D9B8A_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x169B1E30)
#define CLASS_1_5065FA890F0D9B8A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x169B1870)
#define CLASS_1_5065FA890F0D9B8A__CTOR_OFFSET UNITYSDK_OFFSET(0x169B1860)

inline static constexpr unsigned int Class_1_5065FA890F0D9B8A_TypeDefinitionIndex = 16182;

class Class_1_5065FA890F0D9B8A : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x20
	::Foundation::AssetPath Field_1_10; // 0x28
	::Struct_2_3E75877A2888D88A_383 Field_1_0; // 0x38
	::System::Int32 Field_1_5; // 0x48
	::System::Int32 Field_1_9; // 0x4C
	::System::UInt64 Field_1_7; // 0x50
	::System::Boolean Field_1_2; // 0x58
	::System::Byte Field_1_4; // 0x59
	::System::Byte Field_1_3; // 0x5A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_383 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_383, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Foundation::AssetPath Method_1_0D1E33BA22DE0E17()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_0D1E33BA22DE0E17_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_915D66DE5F4D6371()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_915D66DE5F4D6371_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_CCC44210DEA28483()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_CCC44210DEA28483_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5065FA890F0D9B8A_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}
};
