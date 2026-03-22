#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_982C6619AE41D566_METHOD_2_108ACC3415623F5F_OFFSET UNITYSDK_OFFSET(0x8DA40B0)
#define CLASS_2_982C6619AE41D566_METHOD_2_AC42103D6039491F_OFFSET UNITYSDK_OFFSET(0x8DA4290)
#define CLASS_2_982C6619AE41D566_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8DA3FE0)
#define CLASS_2_982C6619AE41D566_ONSTART_OFFSET UNITYSDK_OFFSET(0x8DA4040)
#define CLASS_2_982C6619AE41D566__CTOR_OFFSET UNITYSDK_OFFSET(0x8DA40A0)

inline static constexpr unsigned int Class_2_982C6619AE41D566_TypeDefinitionIndex = 64626;

class Class_2_982C6619AE41D566 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_982C6619AE41D566__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_982C6619AE41D566_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_982C6619AE41D566_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_108ACC3415623F5F(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_982C6619AE41D566_METHOD_2_108ACC3415623F5F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AC42103D6039491F(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_982C6619AE41D566_METHOD_2_AC42103D6039491F_OFFSET))(this, a1, a2);
	}
};
