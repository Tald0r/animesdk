#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1CE80979E7BE70A6_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AEA669ACE606A97F_METHOD_1_12EC014B334ACF2C_OFFSET UNITYSDK_OFFSET(0x8D19350)
#define CLASS_1_AEA669ACE606A97F_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x8D190A0)
#define CLASS_1_AEA669ACE606A97F__CTOR_OFFSET UNITYSDK_OFFSET(0x8D19010)

inline static constexpr unsigned int Class_1_AEA669ACE606A97F_TypeDefinitionIndex = 40222;

class Class_1_AEA669ACE606A97F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_1CE80979E7BE70A6_1*>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEA669ACE606A97F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEA669ACE606A97F_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_1_12EC014B334ACF2C(::System::UInt32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AEA669ACE606A97F_METHOD_1_12EC014B334ACF2C_OFFSET))(this, a1, a2, a3, a4);
	}
};
