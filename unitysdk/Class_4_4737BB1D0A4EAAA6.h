#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"

class Class_1_884860A2FAB24301;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_4737BB1D0A4EAAA6_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xE6E9F20)
#define CLASS_4_4737BB1D0A4EAAA6_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xE6EA1A0)
#define CLASS_4_4737BB1D0A4EAAA6_METHOD_4_ECF912AE8CD24448_OFFSET UNITYSDK_OFFSET(0xE6EA0E0)
#define CLASS_4_4737BB1D0A4EAAA6_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xE6EA000)
#define CLASS_4_4737BB1D0A4EAAA6__CCTOR_OFFSET UNITYSDK_OFFSET(0xE6E9F80)
#define CLASS_4_4737BB1D0A4EAAA6__CTOR_OFFSET UNITYSDK_OFFSET(0xE6EA0A0)

inline static constexpr unsigned int Class_4_4737BB1D0A4EAAA6_TypeDefinitionIndex = 64451;

class Class_4_4737BB1D0A4EAAA6 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x13B; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_4_1; // 0x50
	::Class_1_884860A2FAB24301* Field_4_2; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_4737BB1D0A4EAAA6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4737BB1D0A4EAAA6__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4737BB1D0A4EAAA6_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4737BB1D0A4EAAA6_ONCLEAN_OFFSET))(this);
	}

	static ::Class_4_4737BB1D0A4EAAA6* Method_4_ECF912AE8CD24448()
	{
		return ((::Class_4_4737BB1D0A4EAAA6*(*)())((::PBYTE)hIl2Cpp + CLASS_4_4737BB1D0A4EAAA6_METHOD_4_ECF912AE8CD24448_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4737BB1D0A4EAAA6_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
