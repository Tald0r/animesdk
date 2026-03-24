#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_5262CF510D89C2E1_Struct_2_0839504A496058D2.h"

class Class_3_5262CF510D89C2E1_Class_1_A0BFCF19234E844F;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5262CF510D89C2E1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xEB29150)
#define CLASS_3_5262CF510D89C2E1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xEB29460)
#define CLASS_3_5262CF510D89C2E1_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xEB294C0)
#define CLASS_3_5262CF510D89C2E1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xEB28F70)
#define CLASS_3_5262CF510D89C2E1__CCTOR_OFFSET UNITYSDK_OFFSET(0xEB291B0)
#define CLASS_3_5262CF510D89C2E1__CTOR_OFFSET UNITYSDK_OFFSET(0xEB29230)

inline static constexpr unsigned int Class_3_5262CF510D89C2E1_TypeDefinitionIndex = 46203;

class Class_3_5262CF510D89C2E1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0xBA; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_3; // 0x48
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_2; // 0x50
	::System::Collections::Generic::List_1<::Class_3_5262CF510D89C2E1_Struct_2_0839504A496058D2>* Field_3_1; // 0x58
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_4; // 0x60
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_6; // 0x68
	::System::Collections::Generic::List_1<::Class_3_5262CF510D89C2E1_Class_1_A0BFCF19234E844F*>* Field_3_0; // 0x70
	::System::Boolean Field_3_5; // 0x78

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5262CF510D89C2E1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5262CF510D89C2E1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5262CF510D89C2E1_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5262CF510D89C2E1_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5262CF510D89C2E1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_5262CF510D89C2E1* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_5262CF510D89C2E1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_5262CF510D89C2E1_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
