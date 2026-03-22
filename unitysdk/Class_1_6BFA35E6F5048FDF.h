#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_53C4A418F34F74D8.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_277;
class Class_1_2BEAA93324417DF4;
class Class_2_9E3E3CDA608A4F58;
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_00A91948BD71EE07_OFFSET UNITYSDK_OFFSET(0x8E8C930)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_1C479D2208200A89_1_OFFSET UNITYSDK_OFFSET(0x8E8BDE0)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_1C479D2208200A89_OFFSET UNITYSDK_OFFSET(0x8E8B9B0)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_22510BDBED20F668_OFFSET UNITYSDK_OFFSET(0x8E8C550)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_30C2D368B2361B2C_OFFSET UNITYSDK_OFFSET(0x8E8D7E0)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8E8A630)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8E8A330)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_43E3354704FAE5E7_OFFSET UNITYSDK_OFFSET(0x8E8D070)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_5A2E153CDE946875_OFFSET UNITYSDK_OFFSET(0x8E8B0D0)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_5E0DBF36D6013B7C_OFFSET UNITYSDK_OFFSET(0x8E8DA50)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_6EF4D5E75AE96DC5_OFFSET UNITYSDK_OFFSET(0x8E8CBA0)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x8E8A6A0)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_82269A6C30DB6641_OFFSET UNITYSDK_OFFSET(0x8E8D4B0)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x8E8C4D0)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x8E8AE00)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x8E8A5C0)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_B4B14845111E88EF_OFFSET UNITYSDK_OFFSET(0x8E8A410)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0x8E89F80)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_C68E4EE621305660_OFFSET UNITYSDK_OFFSET(0x8E8D760)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8E8A3B0)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_DBAB84A34989917E_OFFSET UNITYSDK_OFFSET(0x8E8C210)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_DFCB38E68E39E073_1_OFFSET UNITYSDK_OFFSET(0x8E8DC20)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_DFCB38E68E39E073_OFFSET UNITYSDK_OFFSET(0x8E8A6B0)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_FB1C56FCE4ABD259_OFFSET UNITYSDK_OFFSET(0x8E8DAC0)
#define CLASS_1_6BFA35E6F5048FDF_METHOD_1_FE1E8239A51187BC_OFFSET UNITYSDK_OFFSET(0x8E8C770)
#define CLASS_1_6BFA35E6F5048FDF__CTOR_OFFSET UNITYSDK_OFFSET(0x8E89E10)

inline static constexpr unsigned int Class_1_6BFA35E6F5048FDF_TypeDefinitionIndex = 40698;

class Class_1_6BFA35E6F5048FDF : public ::System::Object
{
public:
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	::Class_0_16E4307DCC419505_277* Field_1_7; // 0x10
	::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>* Field_1_17; // 0x18
	::Class_1_2BEAA93324417DF4* Field_1_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_23; // 0x28
	::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>* Field_1_18; // 0x30
	::Struct_2_49ABC235CB23B56F Field_1_22; // 0x38
	::UnityEngine::Material* Field_1_19; // 0x48
	::UnityEngine::Material* Field_1_20; // 0x50
	::System::Int32 Field_1_21; // 0x58
	::System::Boolean Field_1_11; // 0x5C
	::System::Boolean Field_1_9; // 0x5D
	::Share::EItemType Field_1_8; // 0x5E
	::System::UInt32 Field_1_15; // 0x60
	::System::UInt32 Field_1_14; // 0x64
	::System::UInt64 Field_1_16; // 0x68
	::System::Boolean Field_1_13; // 0x70
	::System::Boolean Field_1_12; // 0x71
	::System::Boolean Field_1_10; // 0x72

	::System::Void _ctor(::Class_0_16E4307DCC419505_277* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_277*))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B799DB9989A18F1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_B799DB9989A18F1D_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B4B14845111E88EF(::Enum_3_53C4A418F34F74D8 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_53C4A418F34F74D8, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_B4B14845111E88EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_7F29568EA964E563_OFFSET))(this);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_1_5A2E153CDE946875(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_5A2E153CDE946875_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBAB84A34989917E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_DBAB84A34989917E_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFCB38E68E39E073(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_DFCB38E68E39E073_OFFSET))(this, a1);
	}

	::System::Void Method_1_FE1E8239A51187BC(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_FE1E8239A51187BC_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_22510BDBED20F668(::Struct_2_49ABC235CB23B56F& a1, ::System::Boolean a2, ::System::Boolean a3, ::Class_2_9E3E3CDA608A4F58* a4, ::System::String* a5, ::System::String* a6, ::System::Action* a7)
	{
		return ((::System::Void(*)(::Struct_2_49ABC235CB23B56F&, ::System::Boolean, ::System::Boolean, ::Class_2_9E3E3CDA608A4F58*, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_22510BDBED20F668_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::UnityEngine::Material* Method_1_1C479D2208200A89()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_1C479D2208200A89_OFFSET))(this);
	}

	::System::Void Method_1_00A91948BD71EE07(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_00A91948BD71EE07_OFFSET))(this, a1);
	}

	::System::Void Method_1_43E3354704FAE5E7(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_43E3354704FAE5E7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C68E4EE621305660(::System::UInt64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_C68E4EE621305660_OFFSET))(this, a1);
	}

	::System::Void Method_1_6EF4D5E75AE96DC5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_6EF4D5E75AE96DC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_30C2D368B2361B2C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_30C2D368B2361B2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E0DBF36D6013B7C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_5E0DBF36D6013B7C_OFFSET))(this, a1);
	}

	::UnityEngine::Material* Method_1_1C479D2208200A89_1()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_1C479D2208200A89_1_OFFSET))(this);
	}

	::System::Void Method_1_FB1C56FCE4ABD259(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_FB1C56FCE4ABD259_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_DFCB38E68E39E073_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_DFCB38E68E39E073_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_82269A6C30DB6641(::System::Boolean a1, ::System::Boolean a2, ::UnityEngine::GameObject* a3, ::Class_2_9E3E3CDA608A4F58* a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::GameObject*, ::Class_2_9E3E3CDA608A4F58*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_82269A6C30DB6641_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BFA35E6F5048FDF_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
