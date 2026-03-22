#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B88093644CDFA8DF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x88F1A50)
#define CLASS_3_B88093644CDFA8DF_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x88F1B40)
#define CLASS_3_B88093644CDFA8DF_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x88F1BA0)
#define CLASS_3_B88093644CDFA8DF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x88F19E0)
#define CLASS_3_B88093644CDFA8DF__CCTOR_OFFSET UNITYSDK_OFFSET(0x88F1AB0)
#define CLASS_3_B88093644CDFA8DF__CTOR_OFFSET UNITYSDK_OFFSET(0x88F1B30)

inline static constexpr unsigned int Class_3_B88093644CDFA8DF_TypeDefinitionIndex = 48547;

class Class_3_B88093644CDFA8DF : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x12; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_3_0; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B88093644CDFA8DF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B88093644CDFA8DF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B88093644CDFA8DF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B88093644CDFA8DF_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B88093644CDFA8DF_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_B88093644CDFA8DF* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_B88093644CDFA8DF*(*)())((::PBYTE)hIl2Cpp + CLASS_3_B88093644CDFA8DF_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
