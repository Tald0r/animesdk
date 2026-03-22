#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_73245C3A15EC0443.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_446;
class Class_1_66D2BABDBB602317;
class Class_1_7807B2B04302CD7B_4;
namespace MoleMole { class MonoSceneFindWayObject; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3F5405A30A1338AC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xEB79770)
#define CLASS_3_3F5405A30A1338AC_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xEB79A00)
#define CLASS_3_3F5405A30A1338AC_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xEB79A60)
#define CLASS_3_3F5405A30A1338AC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xEB79360)
#define CLASS_3_3F5405A30A1338AC__CCTOR_OFFSET UNITYSDK_OFFSET(0xEB797D0)
#define CLASS_3_3F5405A30A1338AC__CTOR_OFFSET UNITYSDK_OFFSET(0xEB79850)

inline static constexpr unsigned int Class_3_3F5405A30A1338AC_TypeDefinitionIndex = 49723;

class Class_3_3F5405A30A1338AC : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3F5405A30A1338AC_TypeDefinitionIndex)->GetStaticField(0xFD00);
	}
	// static const ::System::Int32 Field_3_7 = 0xB8; // 0x0
	::Class_1_7807B2B04302CD7B_4* Field_3_4; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_446*>* Field_3_2; // 0x50
	::System::Collections::Generic::List_1<::Struct_2_73245C3A15EC0443>* Field_3_3; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoSceneFindWayObject*>* Field_3_5; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_3_6; // 0x68
	::System::Collections::Generic::List_1<::Class_1_66D2BABDBB602317*>* Field_3_1; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3F5405A30A1338AC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F5405A30A1338AC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F5405A30A1338AC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F5405A30A1338AC_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F5405A30A1338AC_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_3F5405A30A1338AC* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_3F5405A30A1338AC*(*)())((::PBYTE)hIl2Cpp + CLASS_3_3F5405A30A1338AC_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
