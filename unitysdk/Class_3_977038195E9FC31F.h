#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_977038195E9FC31F_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xA9470B0)
#define CLASS_3_977038195E9FC31F_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA9471A0)
#define CLASS_3_977038195E9FC31F_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xA947200)
#define CLASS_3_977038195E9FC31F_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xA947000)
#define CLASS_3_977038195E9FC31F__CCTOR_OFFSET UNITYSDK_OFFSET(0xA947110)
#define CLASS_3_977038195E9FC31F__CTOR_OFFSET UNITYSDK_OFFSET(0xA947190)

inline static constexpr unsigned int Class_3_977038195E9FC31F_TypeDefinitionIndex = 62157;

class Class_3_977038195E9FC31F : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0x42; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_1; // 0x48
	::System::Boolean Field_3_0; // 0x50
	::System::Boolean Field_3_2; // 0x51

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_977038195E9FC31F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_977038195E9FC31F__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_977038195E9FC31F_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_977038195E9FC31F_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_977038195E9FC31F_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_977038195E9FC31F* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_977038195E9FC31F*(*)())((::PBYTE)hIl2Cpp + CLASS_3_977038195E9FC31F_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
