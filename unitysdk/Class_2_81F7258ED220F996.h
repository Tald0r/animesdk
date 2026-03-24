#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_625EA19CD353E00F.h"
#include "unitysdk/Enum_3_7CF131C413C919AF.h"
#include "unitysdk/Foundation/Singleton_1.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"

class Class_1_0D6706375CDAAE8C;
namespace LitJson { class JsonData; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_81F7258ED220F996_METHOD_2_09127FE7F912292D_OFFSET UNITYSDK_OFFSET(0x9381DE0)
#define CLASS_2_81F7258ED220F996_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9382DC0)
#define CLASS_2_81F7258ED220F996_METHOD_2_2BB6041866BEA992_OFFSET UNITYSDK_OFFSET(0x937F8D0)
#define CLASS_2_81F7258ED220F996_METHOD_2_4B967A5E70FF7EE4_OFFSET UNITYSDK_OFFSET(0x93808F0)
#define CLASS_2_81F7258ED220F996_METHOD_2_78933845FB6AE16D_OFFSET UNITYSDK_OFFSET(0x9383CB0)
#define CLASS_2_81F7258ED220F996_METHOD_2_85E5FCA6EBE2644D_OFFSET UNITYSDK_OFFSET(0x9382FB0)
#define CLASS_2_81F7258ED220F996_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x937F7E0)
#define CLASS_2_81F7258ED220F996_METHOD_2_C4B2681812B3B584_OFFSET UNITYSDK_OFFSET(0x9387AD0)
#define CLASS_2_81F7258ED220F996_METHOD_2_C83B2479936B63C3_OFFSET UNITYSDK_OFFSET(0x93809E0)
#define CLASS_2_81F7258ED220F996_METHOD_2_CA42DCEE4AAA24C6_OFFSET UNITYSDK_OFFSET(0x937F490)
#define CLASS_2_81F7258ED220F996_METHOD_2_D6A8D6CD8DE3889F_OFFSET UNITYSDK_OFFSET(0x9389260)
#define CLASS_2_81F7258ED220F996_METHOD_2_DF864D0686E3D747_OFFSET UNITYSDK_OFFSET(0x938B080)
#define CLASS_2_81F7258ED220F996_METHOD_2_E8A651ED68564EEC_OFFSET UNITYSDK_OFFSET(0x9386440)
#define CLASS_2_81F7258ED220F996_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x9381D70)
#define CLASS_2_81F7258ED220F996__CTOR_OFFSET UNITYSDK_OFFSET(0x937F310)

inline static constexpr unsigned int Class_2_81F7258ED220F996_TypeDefinitionIndex = 56130;

class Class_2_81F7258ED220F996 : public ::Foundation::Singleton_1<::Class_2_81F7258ED220F996*>
{
public:
	// static const ::System::String* Field_2_37; // 0x0
	// static const ::System::String* Field_2_38; // 0x0
	// static const ::System::String* Field_2_39; // 0x0
	// static const ::System::String* Field_2_40; // 0x0
	// static const ::System::String* Field_2_41; // 0x0
	// static const ::System::String* Field_2_42; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x10
	::System::String* Field_2_35; // 0x18
	::System::String* Field_2_4; // 0x20
	::System::String* Field_2_44; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* Field_2_17; // 0x30
	::System::String* Field_2_45; // 0x38
	::System::String* Field_2_12; // 0x40
	::System::String* Field_2_5; // 0x48
	::System::String* Field_2_43; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* Field_2_13; // 0x58
	::System::String* Field_2_46; // 0x60
	::System::String* Field_2_36; // 0x68
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_2_18; // 0x70
	::System::String* Field_2_6; // 0x78
	::System::String* Field_2_47; // 0x80
	::System::String* Field_2_1; // 0x88
	::System::String* Field_2_3; // 0x90
	::System::Int32 Field_2_0; // 0x98
	::System::Int32 Field_2_25; // 0x9C
	::System::Int32 Field_2_9; // 0xA0
	::Enum_3_7CF131C413C919AF Field_2_31; // 0xA4
	::System::Int32 Field_2_10; // 0xA8
	::System::Int32 Field_2_19; // 0xAC
	::System::Int32 Field_2_20; // 0xB0
	::System::Int32 Field_2_29; // 0xB4
	::System::Int32 Field_2_11; // 0xB8
	::System::Int32 Field_2_30; // 0xBC
	::System::Int32 Field_2_23; // 0xC0
	::System::Int32 Field_2_27; // 0xC4
	::System::Boolean Field_2_8; // 0xC8
	::System::Boolean Field_2_7; // 0xC9
	::MoleMole::Config::TimePeriodType Field_2_15; // 0xCC
	::System::Int32 Field_2_14; // 0xD0
	::System::Int32 Field_2_34; // 0xD4
	::System::Int32 Field_2_22; // 0xD8
	::System::Int32 Field_2_32; // 0xDC
	::System::Int32 Field_2_33; // 0xE0
	::System::Int32 Field_2_21; // 0xE4
	::MoleMole::Config::WeatherType Field_2_16; // 0xE8
	::Enum_3_625EA19CD353E00F Field_2_28; // 0xEC
	::System::Single Field_2_24; // 0xF0
	::System::Int32 Field_2_26; // 0xF4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_CA42DCEE4AAA24C6()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_CA42DCEE4AAA24C6_OFFSET))(this);
	}

	::System::Boolean Method_2_2BB6041866BEA992(::MiHoYo::SDK::JSONObject*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONObject*&))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_2BB6041866BEA992_OFFSET))(this, a1);
	}

	::System::Void Method_2_C83B2479936B63C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_C83B2479936B63C3_OFFSET))(this);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::System::Boolean Method_2_09127FE7F912292D(::MiHoYo::SDK::JSONObject*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONObject*&))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_09127FE7F912292D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Boolean Method_2_85E5FCA6EBE2644D(::MiHoYo::SDK::JSONObject*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONObject*&))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_85E5FCA6EBE2644D_OFFSET))(this, a1);
	}

	::LitJson::JsonData* Method_2_78933845FB6AE16D()
	{
		return ((::LitJson::JsonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_78933845FB6AE16D_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::String* Method_2_4B967A5E70FF7EE4(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_4B967A5E70FF7EE4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E8A651ED68564EEC(::MiHoYo::SDK::JSONObject*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONObject*&))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_E8A651ED68564EEC_OFFSET))(this, a1);
	}

	::System::String* Method_2_C4B2681812B3B584()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_C4B2681812B3B584_OFFSET))(this);
	}

	::MiHoYo::SDK::JSONObject* Method_2_D6A8D6CD8DE3889F()
	{
		return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_D6A8D6CD8DE3889F_OFFSET))(this);
	}

	::System::Boolean Method_2_DF864D0686E3D747(::MiHoYo::SDK::JSONObject*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONObject*&))((::PBYTE)hIl2Cpp + CLASS_2_81F7258ED220F996_METHOD_2_DF864D0686E3D747_OFFSET))(this, a1);
	}
};
