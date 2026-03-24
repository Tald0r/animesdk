#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_5D8A958F9310C1C3.h"
#include "unitysdk/Enum_3_C9027D259F060A66.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/Struct_2_395B739A1AC58399_2.h"
#include "unitysdk/Struct_2_5060F38EC3D9F5D5.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"

class Class_1_50E88D52C3691096;
class Class_1_8289F2785D9AA990;
class Class_2_5FF5E4CD1325BF26;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_241162EBE342AA7A_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x6499850)
#define CLASS_3_241162EBE342AA7A_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x6499AC0)
#define CLASS_3_241162EBE342AA7A_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x6499B20)
#define CLASS_3_241162EBE342AA7A_METHOD_3_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x6499BE0)
#define CLASS_3_241162EBE342AA7A_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x6499BC0)
#define CLASS_3_241162EBE342AA7A_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x6499630)
#define CLASS_3_241162EBE342AA7A__CCTOR_OFFSET UNITYSDK_OFFSET(0x64998B0)
#define CLASS_3_241162EBE342AA7A__CTOR_OFFSET UNITYSDK_OFFSET(0x6499930)

inline static constexpr unsigned int Class_3_241162EBE342AA7A_TypeDefinitionIndex = 68687;

class Class_3_241162EBE342AA7A : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_14 = 0x80; // 0x0
	::Foundation::AssetPath Field_3_5; // 0x48
	::Class_1_8289F2785D9AA990* Field_3_4; // 0x58
	::System::Collections::Generic::List_1<::Class_2_5FF5E4CD1325BF26*>* Field_3_6; // 0x60
	::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*> Field_3_0; // 0x68
	::System::Collections::Generic::List_1<::Struct_2_5060F38EC3D9F5D5>* Field_3_12; // 0x78
	::Class_1_50E88D52C3691096* Field_3_1; // 0x80
	::Foundation::AssetPath Field_3_7; // 0x88
	::System::Collections::Generic::List_1<::Struct_2_395B739A1AC58399_2>* Field_3_9; // 0x98
	::System::Collections::Generic::List_1<::Class_2_5FF5E4CD1325BF26*>* Field_3_8; // 0xA0
	::Enum_3_C9027D259F060A66 Field_3_3; // 0xA8
	::Foundation::ViewObject::SuiteInfo Field_3_13; // 0xAC
	::System::Boolean Field_3_11; // 0xB4
	::System::Boolean Field_3_10; // 0xB5
	::Enum_3_5D8A958F9310C1C3 Field_3_2; // 0xB8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_241162EBE342AA7A* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_241162EBE342AA7A*(*)())((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A_METHOD_3_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A_METHOD_3_F0E307B84478A272_1_OFFSET))(this);
	}
};
