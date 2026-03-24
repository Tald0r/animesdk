#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_39E4021443B30A1D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F84327483F47ADE0_METHOD_1_0CF1AC642381802B_OFFSET UNITYSDK_OFFSET(0x91FDCA0)
#define CLASS_1_F84327483F47ADE0_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x91FD7C0)
#define CLASS_1_F84327483F47ADE0_METHOD_1_F4BC0C3EA9EE7E30_OFFSET UNITYSDK_OFFSET(0x91FD880)
#define CLASS_1_F84327483F47ADE0__CTOR_OFFSET UNITYSDK_OFFSET(0x91FD730)

inline static constexpr unsigned int Class_1_F84327483F47ADE0_TypeDefinitionIndex = 77391;

class Class_1_F84327483F47ADE0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_39E4021443B30A1D*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F84327483F47ADE0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F84327483F47ADE0_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Int32 Method_1_F4BC0C3EA9EE7E30(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F84327483F47ADE0_METHOD_1_F4BC0C3EA9EE7E30_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0CF1AC642381802B(::System::Int32 a1, ::System::UInt32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F84327483F47ADE0_METHOD_1_0CF1AC642381802B_OFFSET))(this, a1, a2, a3);
	}
};
