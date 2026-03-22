#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF860E4BE665C11B;
class Class_3_AE02BC8285203464_11;
class Class_3_DB4CE4A742A69D50_3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_083F2E15C5111A74_METHOD_1_A5D821D1458998A7_OFFSET UNITYSDK_OFFSET(0x5FC00B0)
#define CLASS_1_083F2E15C5111A74_METHOD_1_DB8E8E75B685B975_OFFSET UNITYSDK_OFFSET(0x5FC09F0)
#define CLASS_1_083F2E15C5111A74_METHOD_1_F5E011FAC512A7AF_OFFSET UNITYSDK_OFFSET(0x5FBFA00)
#define CLASS_1_083F2E15C5111A74__CTOR_OFFSET UNITYSDK_OFFSET(0x5FBF170)

inline static constexpr unsigned int Class_1_083F2E15C5111A74_TypeDefinitionIndex = 72238;

class Class_1_083F2E15C5111A74 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EF860E4BE665C11B*>* Field_1_4; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x30

	::System::Void _ctor(::Class_3_DB4CE4A742A69D50_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DB4CE4A742A69D50_3*))((::PBYTE)hIl2Cpp + CLASS_1_083F2E15C5111A74__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5E011FAC512A7AF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_083F2E15C5111A74_METHOD_1_F5E011FAC512A7AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5D821D1458998A7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_083F2E15C5111A74_METHOD_1_A5D821D1458998A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB8E8E75B685B975(::Class_3_AE02BC8285203464_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_11*))((::PBYTE)hIl2Cpp + CLASS_1_083F2E15C5111A74_METHOD_1_DB8E8E75B685B975_OFFSET))(this, a1);
	}
};
