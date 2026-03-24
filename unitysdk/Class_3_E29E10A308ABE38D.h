#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_CFB7A3C91FBAC44A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_E29E10A308ABE38D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13C96D00)
#define CLASS_3_E29E10A308ABE38D_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13C96FA0)
#define CLASS_3_E29E10A308ABE38D_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x13C97000)
#define CLASS_3_E29E10A308ABE38D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13C96B70)
#define CLASS_3_E29E10A308ABE38D__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C96D60)
#define CLASS_3_E29E10A308ABE38D__CTOR_OFFSET UNITYSDK_OFFSET(0x13C96DE0)

inline static constexpr unsigned int Class_3_E29E10A308ABE38D_TypeDefinitionIndex = 58004;

class Class_3_E29E10A308ABE38D : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0x14; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_CFB7A3C91FBAC44A*>* Field_3_0; // 0x50
	::System::String* Field_3_6; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_3_2; // 0x60
	::System::Single Field_3_5; // 0x68
	::UnityEngine::Vector2 Field_3_4; // 0x6C
	::System::Boolean Field_3_3; // 0x74

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E29E10A308ABE38D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E29E10A308ABE38D__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E29E10A308ABE38D_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E29E10A308ABE38D_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E29E10A308ABE38D_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_E29E10A308ABE38D* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_E29E10A308ABE38D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E29E10A308ABE38D_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
