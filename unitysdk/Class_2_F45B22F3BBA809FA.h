#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_35.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F45B22F3BBA809FA_METHOD_2_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0xBC4DDD0)
#define CLASS_2_F45B22F3BBA809FA_METHOD_2_D933AFD11CC5BDCA_OFFSET UNITYSDK_OFFSET(0xBC4DCF0)
#define CLASS_2_F45B22F3BBA809FA_METHOD_2_F5CD8BFA444150BD_OFFSET UNITYSDK_OFFSET(0xBC4DCE0)
#define CLASS_2_F45B22F3BBA809FA__CTOR_OFFSET UNITYSDK_OFFSET(0xBC4DC80)

inline static constexpr unsigned int Class_2_F45B22F3BBA809FA_TypeDefinitionIndex = 52154;

class Class_2_F45B22F3BBA809FA : public ::Class_1_43BD383C98B4C0C5_35
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F45B22F3BBA809FA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F5CD8BFA444150BD(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_F45B22F3BBA809FA_METHOD_2_F5CD8BFA444150BD_OFFSET))(this, a1);
	}

	static ::Class_2_F45B22F3BBA809FA* Method_2_D933AFD11CC5BDCA()
	{
		return ((::Class_2_F45B22F3BBA809FA*(*)())((::PBYTE)hIl2Cpp + CLASS_2_F45B22F3BBA809FA_METHOD_2_D933AFD11CC5BDCA_OFFSET))();
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F45B22F3BBA809FA_METHOD_2_43535ED8A0DF5FF8_OFFSET))(this);
	}
};
