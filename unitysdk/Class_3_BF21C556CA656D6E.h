#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define CLASS_3_BF21C556CA656D6E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x71872F0)
#define CLASS_3_BF21C556CA656D6E_METHOD_3_6B015C3E5E148E39_OFFSET UNITYSDK_OFFSET(0x71874E0)
#define CLASS_3_BF21C556CA656D6E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x7187690)
#define CLASS_3_BF21C556CA656D6E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x71871B0)
#define CLASS_3_BF21C556CA656D6E__CCTOR_OFFSET UNITYSDK_OFFSET(0x7187350)
#define CLASS_3_BF21C556CA656D6E__CTOR_OFFSET UNITYSDK_OFFSET(0x71873D0)

inline static constexpr unsigned int Class_3_BF21C556CA656D6E_TypeDefinitionIndex = 50223;

class Class_3_BF21C556CA656D6E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x6F; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::UInt32, ::System::UInt32>*>* Field_3_0; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BF21C556CA656D6E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF21C556CA656D6E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF21C556CA656D6E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF21C556CA656D6E_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_BF21C556CA656D6E* Method_3_6B015C3E5E148E39()
	{
		return ((::Class_3_BF21C556CA656D6E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_BF21C556CA656D6E_METHOD_3_6B015C3E5E148E39_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF21C556CA656D6E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
