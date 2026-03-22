#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_543B6B88E17BAFE0.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/Enum_3_E64C24AE0799EB7C.h"
#include "unitysdk/Foundation/NapPlatform.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/Battle/AvatarSwitchSortType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/FontThicknessMode.h"
#include "unitysdk/MoleMole/HollowUseItemOperateType.h"
#include "unitysdk/MoleMole/MobileInLevelQTECancelType.h"
#include "unitysdk/MoleMole/PCShortcutWheelOperateType.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_5.h"

class Class_1_79526D80B8F6897C;
class Class_1_83665B095F1535B5;
class Class_1_CDA44BE4158CAA8A;
class Class_3_AE02BC8285203464_22;
namespace MoleMole { class SystemSettingEntryBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C5245F77790B8184_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91E3150)
#define CLASS_2_C5245F77790B8184_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x91E8280)
#define CLASS_2_C5245F77790B8184_METHOD_2_23EFCEB999C1D825_OFFSET UNITYSDK_OFFSET(0x91E8190)
#define CLASS_2_C5245F77790B8184_METHOD_2_2460375D1788603C_OFFSET UNITYSDK_OFFSET(0x91E9300)
#define CLASS_2_C5245F77790B8184_METHOD_2_3316A40EE3735C50_OFFSET UNITYSDK_OFFSET(0x91E35C0)
#define CLASS_2_C5245F77790B8184_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x91E87A0)
#define CLASS_2_C5245F77790B8184_METHOD_2_4363CA0E0DEF2DA7_OFFSET UNITYSDK_OFFSET(0x91E7AB0)
#define CLASS_2_C5245F77790B8184_METHOD_2_4E0E9D5777BB5D7B_OFFSET UNITYSDK_OFFSET(0x91E44E0)
#define CLASS_2_C5245F77790B8184_METHOD_2_6B1AC48741A89B3F_OFFSET UNITYSDK_OFFSET(0x91E4AB0)
#define CLASS_2_C5245F77790B8184_METHOD_2_73052712910A9EE7_OFFSET UNITYSDK_OFFSET(0x91E2F60)
#define CLASS_2_C5245F77790B8184_METHOD_2_77168FB3A280CA38_OFFSET UNITYSDK_OFFSET(0x91E8010)
#define CLASS_2_C5245F77790B8184_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x91E8810)
#define CLASS_2_C5245F77790B8184_METHOD_2_A034459144CE7919_OFFSET UNITYSDK_OFFSET(0x91E4810)
#define CLASS_2_C5245F77790B8184_METHOD_2_A05F1CDA2A5D49AA_OFFSET UNITYSDK_OFFSET(0x91E5150)
#define CLASS_2_C5245F77790B8184_METHOD_2_A7E2AA03D5DD14A2_OFFSET UNITYSDK_OFFSET(0x91E6E30)
#define CLASS_2_C5245F77790B8184_METHOD_2_B1C39A6EA5C82239_OFFSET UNITYSDK_OFFSET(0x91E8300)
#define CLASS_2_C5245F77790B8184_METHOD_2_B2B696B57E2C9AED_OFFSET UNITYSDK_OFFSET(0x91E4CF0)
#define CLASS_2_C5245F77790B8184_METHOD_2_B36E629C3DBCCDB8_OFFSET UNITYSDK_OFFSET(0x91E38E0)
#define CLASS_2_C5245F77790B8184_METHOD_2_B40B1AE0F1D94CCD_OFFSET UNITYSDK_OFFSET(0x91E7690)
#define CLASS_2_C5245F77790B8184_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x91E8A20)
#define CLASS_2_C5245F77790B8184_METHOD_2_B789C15B34ADE8FD_OFFSET UNITYSDK_OFFSET(0x91E85D0)
#define CLASS_2_C5245F77790B8184_METHOD_2_B7ECF8EB0F585FB7_OFFSET UNITYSDK_OFFSET(0x91E3A00)
#define CLASS_2_C5245F77790B8184_METHOD_2_C320308800812E93_OFFSET UNITYSDK_OFFSET(0x91E3B20)
#define CLASS_2_C5245F77790B8184_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x91E34F0)
#define CLASS_2_C5245F77790B8184_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x91E7610)
#define CLASS_2_C5245F77790B8184_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91E3490)
#define CLASS_2_C5245F77790B8184_METHOD_2_D029DB755D8199A2_OFFSET UNITYSDK_OFFSET(0x91E7E30)
#define CLASS_2_C5245F77790B8184_METHOD_2_D07199E8CB9D21F0_OFFSET UNITYSDK_OFFSET(0x91E93C0)
#define CLASS_2_C5245F77790B8184_METHOD_2_D7F10C2E9FB2324D_OFFSET UNITYSDK_OFFSET(0x91E3C20)
#define CLASS_2_C5245F77790B8184_METHOD_2_D83C291FE8591B95_OFFSET UNITYSDK_OFFSET(0x91E5780)
#define CLASS_2_C5245F77790B8184_METHOD_2_DDEBC38EA7122E9D_OFFSET UNITYSDK_OFFSET(0x91E67A0)
#define CLASS_2_C5245F77790B8184_METHOD_2_DE42A8FBAF5D656C_OFFSET UNITYSDK_OFFSET(0x91E3ED0)
#define CLASS_2_C5245F77790B8184_METHOD_2_DFBE8DB93173BC07_OFFSET UNITYSDK_OFFSET(0x91E4120)
#define CLASS_2_C5245F77790B8184_METHOD_2_E581466EEA407771_OFFSET UNITYSDK_OFFSET(0x91E40A0)
#define CLASS_2_C5245F77790B8184_METHOD_2_F2FB03460D714C2F_OFFSET UNITYSDK_OFFSET(0x91E4300)
#define CLASS_2_C5245F77790B8184_METHOD_2_F3B17F9790505620_OFFSET UNITYSDK_OFFSET(0x91E6AC0)
#define CLASS_2_C5245F77790B8184_METHOD_2_F82DF5E806F12AEB_1_OFFSET UNITYSDK_OFFSET(0x91E9450)
#define CLASS_2_C5245F77790B8184_METHOD_2_F82DF5E806F12AEB_OFFSET UNITYSDK_OFFSET(0x91E89B0)
#define CLASS_2_C5245F77790B8184_METHOD_2_FF4B306E87CBBA8D_OFFSET UNITYSDK_OFFSET(0x91E7C70)
#define CLASS_2_C5245F77790B8184_METHOD_2_FFF8A982A18EC676_OFFSET UNITYSDK_OFFSET(0x91E90E0)
#define CLASS_2_C5245F77790B8184_ONCREATE_OFFSET UNITYSDK_OFFSET(0x91E2E00)
#define CLASS_2_C5245F77790B8184__CTOR_OFFSET UNITYSDK_OFFSET(0x91E3550)

inline static constexpr unsigned int Class_2_C5245F77790B8184_TypeDefinitionIndex = 50094;

class Class_2_C5245F77790B8184 : public ::Foundation::SingletonDisposable_1<::Class_2_C5245F77790B8184*>
{
public:
	::System::Collections::Generic::Dictionary_2<::Enum_3_543B6B88E17BAFE0, ::Class_1_CDA44BE4158CAA8A*>* Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_543B6B88E17BAFE0, ::System::Collections::Generic::List_1<::Struct_2_7734F33592BF49F6_5>*>* Field_2_1; // 0x18
	::System::Int32 Field_2_29; // 0x20
	::System::Int32 Field_2_34; // 0x24
	::MoleMole::PCShortcutWheelOperateType Field_2_17; // 0x28
	::System::Int32 Field_2_25; // 0x2C
	::System::Int32 Field_2_33; // 0x30
	::System::Int32 Field_2_30; // 0x34
	::MoleMole::FontThicknessMode Field_2_16; // 0x38
	::System::Boolean Field_2_4; // 0x3C
	::System::Boolean Field_2_6; // 0x3D
	::System::Int32 Field_2_10; // 0x40
	::System::Boolean Field_2_23; // 0x44
	::System::Boolean Field_2_26; // 0x45
	::System::Boolean Field_2_18; // 0x46
	::System::Boolean Field_2_14; // 0x47
	::System::Int32 Field_2_24; // 0x48
	::MoleMole::HollowUseItemOperateType Field_2_19; // 0x4C
	::System::Int32 Field_2_31; // 0x50
	::System::Single Field_2_21; // 0x54
	::MoleMole::Battle::AvatarSwitchSortType Field_2_9; // 0x58
	::System::Boolean Field_2_12; // 0x5C
	::System::Boolean Field_2_27; // 0x5D
	::System::Boolean Field_2_15; // 0x5E
	::System::Boolean Field_2_7; // 0x5F
	::System::Int32 Field_2_32; // 0x60
	::System::Boolean Field_2_5; // 0x64
	::System::Boolean Field_2_3; // 0x65
	::System::Boolean Field_2_13; // 0x66
	::System::Boolean Field_2_11; // 0x67
	::System::Boolean Field_2_2; // 0x68
	::System::Boolean Field_2_22; // 0x69
	::System::Boolean Field_2_20; // 0x6A
	::System::Int32 Field_2_28; // 0x6C
	::MoleMole::MobileInLevelQTECancelType Field_2_8; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_3316A40EE3735C50(::System::Collections::Generic::List_1<::Enum_3_543B6B88E17BAFE0>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_543B6B88E17BAFE0>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_3316A40EE3735C50_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B7ECF8EB0F585FB7(::Enum_3_543B6B88E17BAFE0 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_543B6B88E17BAFE0))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B7ECF8EB0F585FB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C320308800812E93(::Enum_3_543B6B88E17BAFE0 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_543B6B88E17BAFE0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_C320308800812E93_OFFSET))(this, a1, a2);
	}

	::Class_1_79526D80B8F6897C* Method_2_D7F10C2E9FB2324D(::MoleMole::ESystemSettingType a1)
	{
		return ((::Class_1_79526D80B8F6897C*(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_D7F10C2E9FB2324D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DE42A8FBAF5D656C(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_DE42A8FBAF5D656C_OFFSET))(this, a1);
	}

	::Class_1_79526D80B8F6897C* Method_2_DFBE8DB93173BC07(::Enum_3_543B6B88E17BAFE0 a1)
	{
		return ((::Class_1_79526D80B8F6897C*(*)(::PVOID, ::Enum_3_543B6B88E17BAFE0))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_DFBE8DB93173BC07_OFFSET))(this, a1);
	}

	::System::Void Method_2_F2FB03460D714C2F(::Class_3_AE02BC8285203464_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_22*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_F2FB03460D714C2F_OFFSET))(this, a1);
	}

	::System::Void Method_2_4E0E9D5777BB5D7B(::Enum_3_543B6B88E17BAFE0 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_543B6B88E17BAFE0, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_4E0E9D5777BB5D7B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6B1AC48741A89B3F(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_6B1AC48741A89B3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_A034459144CE7919(::Enum_3_543B6B88E17BAFE0 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_543B6B88E17BAFE0, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_A034459144CE7919_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_E581466EEA407771(::Enum_3_E64C24AE0799EB7C a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_E64C24AE0799EB7C))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_E581466EEA407771_OFFSET))(this, a1);
	}

	::System::Void Method_2_D83C291FE8591B95(::System::Collections::Generic::List_1<::Enum_3_543B6B88E17BAFE0>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_543B6B88E17BAFE0>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_D83C291FE8591B95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E2AA03D5DD14A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_A7E2AA03D5DD14A2_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_B40B1AE0F1D94CCD(::Enum_3_543B6B88E17BAFE0 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_543B6B88E17BAFE0))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B40B1AE0F1D94CCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_4363CA0E0DEF2DA7(::Enum_3_543B6B88E17BAFE0 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_543B6B88E17BAFE0, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_4363CA0E0DEF2DA7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FF4B306E87CBBA8D(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_FF4B306E87CBBA8D_OFFSET))(this, a1);
	}

	::System::Void Method_2_F3B17F9790505620(::System::Collections::Generic::List_1<::Enum_3_543B6B88E17BAFE0>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_543B6B88E17BAFE0>*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_F3B17F9790505620_OFFSET))(this, a1);
	}

	::System::Void Method_2_A05F1CDA2A5D49AA(::System::Collections::Generic::List_1<::Enum_3_543B6B88E17BAFE0>* a1, ::MoleMole::ESystemSettingType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_543B6B88E17BAFE0>*, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_A05F1CDA2A5D49AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D029DB755D8199A2(::Enum_3_543B6B88E17BAFE0 a1, ::System::Int32 a2, ::Enum_3_A019F766F8C74696 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_543B6B88E17BAFE0, ::System::Int32, ::Enum_3_A019F766F8C74696, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_D029DB755D8199A2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_77168FB3A280CA38(::Enum_3_543B6B88E17BAFE0 a1, ::System::Int32 a2, ::System::Action* a3, ::System::Action* a4, ::System::Boolean a5, ::Class_1_83665B095F1535B5* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_543B6B88E17BAFE0, ::System::Int32, ::System::Action*, ::System::Action*, ::System::Boolean, ::Class_1_83665B095F1535B5*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_77168FB3A280CA38_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_23EFCEB999C1D825(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_23EFCEB999C1D825_OFFSET))(this, a1);
	}

	::Class_1_CDA44BE4158CAA8A* Method_2_B36E629C3DBCCDB8(::Enum_3_543B6B88E17BAFE0 a1)
	{
		return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID, ::Enum_3_543B6B88E17BAFE0))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B36E629C3DBCCDB8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B2B696B57E2C9AED(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B2B696B57E2C9AED_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1C39A6EA5C82239(::System::Collections::Generic::List_1<::Enum_3_543B6B88E17BAFE0>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_543B6B88E17BAFE0>*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B1C39A6EA5C82239_OFFSET))(this, a1);
	}

	::System::Void Method_2_B789C15B34ADE8FD(::Enum_3_543B6B88E17BAFE0 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_543B6B88E17BAFE0, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B789C15B34ADE8FD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_2_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_0581090195E9C81F_OFFSET))(this);
	}

	::System::Void Method_2_F82DF5E806F12AEB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_F82DF5E806F12AEB_OFFSET))(this, a1);
	}

	::Class_1_79526D80B8F6897C* Method_2_FFF8A982A18EC676(::MoleMole::ESystemSettingType a1, ::Enum_3_543B6B88E17BAFE0 a2)
	{
		return ((::Class_1_79526D80B8F6897C*(*)(::PVOID, ::MoleMole::ESystemSettingType, ::Enum_3_543B6B88E17BAFE0))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_FFF8A982A18EC676_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_7734F33592BF49F6_5>* Method_2_2460375D1788603C(::Enum_3_543B6B88E17BAFE0 a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_7734F33592BF49F6_5>*(*)(::PVOID, ::Enum_3_543B6B88E17BAFE0))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_2460375D1788603C_OFFSET))(this, a1);
	}

	::System::Void Method_2_73052712910A9EE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_73052712910A9EE7_OFFSET))(this);
	}

	::System::Void Method_2_DDEBC38EA7122E9D(::System::Collections::Generic::List_1<::Enum_3_543B6B88E17BAFE0>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_543B6B88E17BAFE0>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_DDEBC38EA7122E9D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D07199E8CB9D21F0(::Foundation::NapPlatform a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NapPlatform))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_D07199E8CB9D21F0_OFFSET))(this, a1);
	}

	::System::Void Method_2_F82DF5E806F12AEB_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_F82DF5E806F12AEB_1_OFFSET))(this, a1);
	}
};
