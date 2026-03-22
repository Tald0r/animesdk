#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_48956C855353AC97;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3B24A12EC7737770_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x6F53AC0)
#define CLASS_1_3B24A12EC7737770_METHOD_1_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x6F538C0)
#define CLASS_1_3B24A12EC7737770_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x6F53A30)
#define CLASS_1_3B24A12EC7737770_METHOD_1_C0F05879FCE2F7A0_OFFSET UNITYSDK_OFFSET(0x6F53B80)
#define CLASS_1_3B24A12EC7737770_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x6F53D30)
#define CLASS_1_3B24A12EC7737770__CTOR_OFFSET UNITYSDK_OFFSET(0x6F537E0)

inline static constexpr unsigned int Class_1_3B24A12EC7737770_TypeDefinitionIndex = 65628;

class Class_1_3B24A12EC7737770 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_1_48956C855353AC97*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_48956C855353AC97*>* Field_1_1; // 0x28
	::System::Boolean Field_1_6; // 0x30
	::System::Boolean Field_1_5; // 0x31
	::System::Boolean Field_1_9; // 0x32
	::System::Byte Field_1_8; // 0x33
	::System::Int32 Field_1_7; // 0x34
	::UnityEngine::Vector3 Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B24A12EC7737770__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_39D78A8EB32A5315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B24A12EC7737770_METHOD_1_39D78A8EB32A5315_OFFSET))(this);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3B24A12EC7737770_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B24A12EC7737770_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_C0F05879FCE2F7A0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3B24A12EC7737770_METHOD_1_C0F05879FCE2F7A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B24A12EC7737770_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
