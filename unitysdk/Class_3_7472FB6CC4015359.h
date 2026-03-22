#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/Struct_2_013B83C8B1FC7527.h"

class Class_0_16E4307DCC419505_100;
class Class_1_48D56DACBE4271BC;
class Class_3_7472FB6CC4015359_Class_2_D4B2DA725C8B43D0;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define CLASS_3_7472FB6CC4015359_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x99D01D0)
#define CLASS_3_7472FB6CC4015359_METHOD_3_2222AB70F193BF96_OFFSET UNITYSDK_OFFSET(0x99D0770)
#define CLASS_3_7472FB6CC4015359_METHOD_3_633F8C80ED9B92E4_OFFSET UNITYSDK_OFFSET(0x99D00A0)
#define CLASS_3_7472FB6CC4015359_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x99D0650)
#define CLASS_3_7472FB6CC4015359_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x99D0750)
#define CLASS_3_7472FB6CC4015359_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x99D06B0)
#define CLASS_3_7472FB6CC4015359_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x99D0760)
#define CLASS_3_7472FB6CC4015359_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x99D0620)
#define CLASS_3_7472FB6CC4015359_METHOD_3_F2B94768004EB1C1_1_OFFSET UNITYSDK_OFFSET(0x99D0560)
#define CLASS_3_7472FB6CC4015359_METHOD_3_F2B94768004EB1C1_OFFSET UNITYSDK_OFFSET(0x99D04A0)
#define CLASS_3_7472FB6CC4015359_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x99CFE10)
#define CLASS_3_7472FB6CC4015359__CCTOR_OFFSET UNITYSDK_OFFSET(0x99D0230)
#define CLASS_3_7472FB6CC4015359__CTOR_OFFSET UNITYSDK_OFFSET(0x99D02B0)

inline static constexpr unsigned int Class_3_7472FB6CC4015359_TypeDefinitionIndex = 63684;

class Class_3_7472FB6CC4015359 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_18 = 0x37; // 0x0
	::Class_0_16E4307DCC419505_100* Field_3_17; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::LinkedList_1<::Struct_2_013B83C8B1FC7527>*>* Field_3_11; // 0x50
	::Class_1_48D56DACBE4271BC* Field_3_16; // 0x58
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_12; // 0x60
	::Class_3_7472FB6CC4015359_Class_2_D4B2DA725C8B43D0* Field_3_14; // 0x68
	::Class_1_48D56DACBE4271BC* Field_3_15; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_7; // 0x78
	::System::Int32 Field_3_5; // 0x80
	::System::Boolean Field_3_6; // 0x84
	::System::Boolean Field_3_4; // 0x85
	::System::Single Field_3_2; // 0x88
	::System::Single Field_3_1; // 0x8C
	::System::UInt32 Field_3_0; // 0x90
	::System::Boolean Field_3_8; // 0x94
	::System::Boolean Field_3_13; // 0x95
	::System::Boolean Field_3_10; // 0x96
	::System::Boolean Field_3_9; // 0x97
	::MoleMole::Config::CampType Field_3_3; // 0x98

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_GETCLASSID_OFFSET))(this);
	}

	::Class_1_48D56DACBE4271BC* Method_3_F2B94768004EB1C1()
	{
		return ((::Class_1_48D56DACBE4271BC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_F2B94768004EB1C1_OFFSET))(this);
	}

	::Class_1_48D56DACBE4271BC* Method_3_F2B94768004EB1C1_1()
	{
		return ((::Class_1_48D56DACBE4271BC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_F2B94768004EB1C1_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_F0E307B84478A272_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_7472FB6CC4015359* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_7472FB6CC4015359*(*)())((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_3_7472FB6CC4015359_Class_2_D4B2DA725C8B43D0* Method_3_633F8C80ED9B92E4()
	{
		return ((::Class_3_7472FB6CC4015359_Class_2_D4B2DA725C8B43D0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_633F8C80ED9B92E4_OFFSET))(this);
	}

	::System::Void Method_3_2222AB70F193BF96(::System::UInt32 a1, ::MoleMole::Config::CampType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::CampType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_2222AB70F193BF96_OFFSET))(this, a1, a2, a3);
	}
};
