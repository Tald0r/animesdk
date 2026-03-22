#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_210;
class Class_0_16E4307DCC419505_429;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EC95410198420F9E_METHOD_1_1F14087D29954F73_OFFSET UNITYSDK_OFFSET(0xBBCB9B0)
#define CLASS_1_EC95410198420F9E_METHOD_1_3F2FB579C6A7ACBD_OFFSET UNITYSDK_OFFSET(0xBBCB6F0)
#define CLASS_1_EC95410198420F9E__CTOR_OFFSET UNITYSDK_OFFSET(0xBBCB9A0)

inline static constexpr unsigned int Class_1_EC95410198420F9E_TypeDefinitionIndex = 47181;

class Class_1_EC95410198420F9E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_0_16E4307DCC419505_210*, ::Class_0_16E4307DCC419505_429*>>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC95410198420F9E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_3F2FB579C6A7ACBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC95410198420F9E_METHOD_1_3F2FB579C6A7ACBD_OFFSET))(this);
	}

	::System::Void Method_1_1F14087D29954F73(::Class_0_16E4307DCC419505_210* a1, ::Class_0_16E4307DCC419505_429* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_210*, ::Class_0_16E4307DCC419505_429*))((::PBYTE)hIl2Cpp + CLASS_1_EC95410198420F9E_METHOD_1_1F14087D29954F73_OFFSET))(this, a1, a2);
	}
};
