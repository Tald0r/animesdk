#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_03687BAE461D2A08;
class Class_1_0534849F53467236;
class Class_1_730A101C592B37EC;
class Class_1_7807B2B04302CD7B_2;
class Class_3_A7F1CBF026E489C4_2;
class Class_3_A7F1CBF026E489C4_4;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_60C2C67C6C9FD40D_METHOD_1_10CE3AEE57BD55F1_OFFSET UNITYSDK_OFFSET(0x87A8E70)
#define CLASS_1_60C2C67C6C9FD40D_METHOD_1_2B4F361982534E13_OFFSET UNITYSDK_OFFSET(0x87A8640)
#define CLASS_1_60C2C67C6C9FD40D_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x87A9570)
#define CLASS_1_60C2C67C6C9FD40D_METHOD_1_EE0137E8EED79B71_1_OFFSET UNITYSDK_OFFSET(0x87A8BF0)
#define CLASS_1_60C2C67C6C9FD40D_METHOD_1_EE0137E8EED79B71_2_OFFSET UNITYSDK_OFFSET(0x87A8D30)
#define CLASS_1_60C2C67C6C9FD40D_METHOD_1_EE0137E8EED79B71_OFFSET UNITYSDK_OFFSET(0x87A8500)
#define CLASS_1_60C2C67C6C9FD40D__CTOR_OFFSET UNITYSDK_OFFSET(0x87A8310)

inline static constexpr unsigned int Class_1_60C2C67C6C9FD40D_TypeDefinitionIndex = 37964;

class Class_1_60C2C67C6C9FD40D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_03687BAE461D2A08*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0534849F53467236*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7807B2B04302CD7B_2*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_730A101C592B37EC*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_EE0137E8EED79B71(::System::Int32 a1, ::Class_1_0534849F53467236*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_0534849F53467236*&))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D_METHOD_1_EE0137E8EED79B71_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2B4F361982534E13(::Class_3_A7F1CBF026E489C4_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A7F1CBF026E489C4_4*))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D_METHOD_1_2B4F361982534E13_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EE0137E8EED79B71_1(::System::Int32 a1, ::Class_1_03687BAE461D2A08*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_03687BAE461D2A08*&))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D_METHOD_1_EE0137E8EED79B71_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EE0137E8EED79B71_2(::System::Int32 a1, ::Class_1_7807B2B04302CD7B_2*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_7807B2B04302CD7B_2*&))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D_METHOD_1_EE0137E8EED79B71_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_10CE3AEE57BD55F1(::Class_3_A7F1CBF026E489C4_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A7F1CBF026E489C4_2*))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D_METHOD_1_10CE3AEE57BD55F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D_METHOD_1_AC7CD4175E0A3EF8_OFFSET))(this);
	}
};
