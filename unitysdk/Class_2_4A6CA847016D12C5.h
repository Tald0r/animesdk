#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_73A07ADA64B8C00F.h"
#include "unitysdk/Foundation/Singleton_1.h"

class Class_0_16E4307DCC419505_525;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4A6CA847016D12C5_METHOD_2_354FC8590BE76762_OFFSET UNITYSDK_OFFSET(0x948B6B0)
#define CLASS_2_4A6CA847016D12C5_METHOD_2_760703E126812810_OFFSET UNITYSDK_OFFSET(0x948B300)
#define CLASS_2_4A6CA847016D12C5_METHOD_2_B39FE08053421C29_OFFSET UNITYSDK_OFFSET(0x948B900)
#define CLASS_2_4A6CA847016D12C5__CTOR_OFFSET UNITYSDK_OFFSET(0x948B270)

inline static constexpr unsigned int Class_2_4A6CA847016D12C5_TypeDefinitionIndex = 56021;

class Class_2_4A6CA847016D12C5 : public ::Foundation::Singleton_1<::Class_2_4A6CA847016D12C5*>
{
public:
	::System::Collections::Generic::Dictionary_2<::Enum_3_73A07ADA64B8C00F, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_525*>*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A6CA847016D12C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_760703E126812810(::Class_0_16E4307DCC419505_525* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_525*))((::PBYTE)hIl2Cpp + CLASS_2_4A6CA847016D12C5_METHOD_2_760703E126812810_OFFSET))(this, a1);
	}

	::System::Void Method_2_354FC8590BE76762(::Class_0_16E4307DCC419505_525* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_525*))((::PBYTE)hIl2Cpp + CLASS_2_4A6CA847016D12C5_METHOD_2_354FC8590BE76762_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_525*>* Method_2_B39FE08053421C29(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_525*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4A6CA847016D12C5_METHOD_2_B39FE08053421C29_OFFSET))(this, a1);
	}
};
