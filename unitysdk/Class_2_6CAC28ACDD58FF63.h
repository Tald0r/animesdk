#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_36BFAC499637728A.h"
#include "unitysdk/Enum_3_52E949B35CB72EF7.h"
#include "unitysdk/Enum_3_623007DD22E200D7.h"
#include "unitysdk/Enum_3_92883740E544236B.h"
#include "unitysdk/Enum_3_CAE10C54ABAE6FAF_1.h"
#include "unitysdk/Enum_3_D2A64EC3E750051D.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_2.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"

class Class_1_451601B8BB62C38C_10;
class Class_1_451601B8BB62C38C_9;
class Class_1_5F716E677DDB6769;
class Class_1_7807B2B04302CD7B_13;
class Class_1_8CD67563D6E43D63_1;
class Class_1_A5DB3A79343C7D5B;
namespace MoleMole { class RegionExtension; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6CAC28ACDD58FF63_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE831B70)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_057516A5214E29C5_OFFSET UNITYSDK_OFFSET(0xE832DF0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_06A333308232F7F0_OFFSET UNITYSDK_OFFSET(0xE836B10)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_211750970715814F_OFFSET UNITYSDK_OFFSET(0xE8351C0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xE838060)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_3D97F53977FFCB87_OFFSET UNITYSDK_OFFSET(0xE836E70)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0xE836690)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_405A7BDD272CA47D_OFFSET UNITYSDK_OFFSET(0xE837C80)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_418CA4EF93DDFBCC_OFFSET UNITYSDK_OFFSET(0xE8361C0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_42123A8F7B47F79C_OFFSET UNITYSDK_OFFSET(0xE835FC0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_491F28AD4D453C95_OFFSET UNITYSDK_OFFSET(0xE837560)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xE836EE0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0xE837340)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_6B55500FBAD14FD0_OFFSET UNITYSDK_OFFSET(0xE8350D0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_6E1DD35AC740F721_OFFSET UNITYSDK_OFFSET(0xE836430)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_70662636528151D7_OFFSET UNITYSDK_OFFSET(0xE8341E0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_76F9C089C5BB4240_OFFSET UNITYSDK_OFFSET(0xE832780)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_84B2CA536DB1077C_OFFSET UNITYSDK_OFFSET(0xE837640)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xE838070)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_9263850C8AA81221_OFFSET UNITYSDK_OFFSET(0xE832140)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE837020)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xE8366A0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_B0B42EBD035F7919_OFFSET UNITYSDK_OFFSET(0xE835450)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_B57E66C53B012D7D_OFFSET UNITYSDK_OFFSET(0xE833D00)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_BD5F1AF5661A4E98_OFFSET UNITYSDK_OFFSET(0xE834D90)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_C04C7DA78BBA8316_OFFSET UNITYSDK_OFFSET(0xE836590)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xE837110)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xE8350C0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_CA20A96113B135EC_OFFSET UNITYSDK_OFFSET(0xE833E90)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE8363D0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0xE8366B0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_CCA72F7AC3E5774C_OFFSET UNITYSDK_OFFSET(0xE8343C0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_D14E91C58C8A620A_OFFSET UNITYSDK_OFFSET(0xE834270)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_DCFB4B22A23E0C97_OFFSET UNITYSDK_OFFSET(0xE835B10)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_DDC3E58374005D91_OFFSET UNITYSDK_OFFSET(0xE833990)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_EA474E7E2ACA2010_OFFSET UNITYSDK_OFFSET(0xE8357C0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_F0ABED050BF793D4_1_OFFSET UNITYSDK_OFFSET(0xE837120)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_F0ABED050BF793D4_OFFSET UNITYSDK_OFFSET(0xE833FC0)
#define CLASS_2_6CAC28ACDD58FF63_METHOD_2_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xE835AE0)
#define CLASS_2_6CAC28ACDD58FF63_ONCREATE_OFFSET UNITYSDK_OFFSET(0xE831D70)
#define CLASS_2_6CAC28ACDD58FF63__CCTOR_OFFSET UNITYSDK_OFFSET(0xE832100)
#define CLASS_2_6CAC28ACDD58FF63__CTOR_OFFSET UNITYSDK_OFFSET(0xE831F30)

inline static constexpr unsigned int Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex = 49759;

class Class_2_6CAC28ACDD58FF63 : public ::Foundation::SingletonDisposable_1<::Class_2_6CAC28ACDD58FF63*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex)->GetStaticField(0xBC90);
	}
	static ::System::Boolean* StaticGet_Field_2_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex)->GetStaticField(0xBC91);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex)->GetStaticField(0xBC92);
	}
	static ::System::Int64* StaticGet_Field_2_6()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6CAC28ACDD58FF63_TypeDefinitionIndex)->GetStaticField(0xBC98);
	}
	// static const ::System::Int32 Field_2_26 = 0x7D1; // 0x0
	// static const ::System::Int32 Field_2_27 = 0x7D2; // 0x0
	// static const ::System::Int32 Field_2_28 = 0x7D3; // 0x0
	// static const ::System::Int32 Field_2_29 = 0x7D4; // 0x0
	// static const ::System::Int32 Field_2_30 = 0x3F8; // 0x0
	// static const ::System::String* Field_2_31; // 0x0
	// static const ::System::Int32 Field_2_32 = 0x270F; // 0x0
	// static const ::System::String* Field_2_33; // 0x0
	// static const ::System::String* Field_2_34; // 0x0
	// static const ::System::String* Field_2_35; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A5DB3A79343C7D5B*>* Field_2_3; // 0x10
	::Class_1_451601B8BB62C38C_9* Field_2_15; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A5DB3A79343C7D5B*>* Field_2_4; // 0x20
	::System::Collections::Generic::List_1<::Class_1_5F716E677DDB6769*>* Field_2_10; // 0x28
	::System::String* Field_2_7; // 0x30
	::Class_1_8CD67563D6E43D63_1* Field_2_5; // 0x38
	::Class_1_7807B2B04302CD7B_13* Field_2_36; // 0x40
	::Class_1_451601B8BB62C38C_10* Field_2_16; // 0x48
	::UnityEngine::NetworkReachability Field_2_25; // 0x50
	::System::Boolean Field_2_39; // 0x54
	::System::Boolean Field_2_24; // 0x55
	::System::Boolean Field_2_14; // 0x56
	::System::Single Field_2_11; // 0x58
	::System::Int32 Field_2_8; // 0x5C
	::System::Single Field_2_37; // 0x60
	::Enum_3_CAE10C54ABAE6FAF_1 Field_2_41; // 0x64
	::System::Single Field_2_13; // 0x68
	::System::Int32 Field_2_17; // 0x6C
	::System::Int32 Field_2_22; // 0x70
	::MoleMole::EUILayoutPlatform Field_2_40; // 0x74
	::System::Single Field_2_18; // 0x78
	::System::Single Field_2_38; // 0x7C
	::System::Single Field_2_12; // 0x80
	::System::Int32 Field_2_23; // 0x84
	::System::Single Field_2_19; // 0x88
	::Enum_3_36BFAC499637728A Field_2_9; // 0x8C
	::System::Int32 Field_2_20; // 0x90
	::System::Int32 Field_2_21; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_9263850C8AA81221(::MoleMole::RegionExtension* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::RegionExtension*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_9263850C8AA81221_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_057516A5214E29C5(::Enum_3_92883740E544236B a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::Enum_3_92883740E544236B, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_057516A5214E29C5_OFFSET))(a1, a2);
	}

	::System::Void Method_2_DDC3E58374005D91(::Enum_3_36BFAC499637728A a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_36BFAC499637728A, ::System::String*, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_DDC3E58374005D91_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::String* Method_2_B57E66C53B012D7D(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_B57E66C53B012D7D_OFFSET))(a1);
	}

	::System::Void Method_2_CA20A96113B135EC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_CA20A96113B135EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0ABED050BF793D4(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_F0ABED050BF793D4_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_2_D14E91C58C8A620A(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_D14E91C58C8A620A_OFFSET))(a1);
	}

	static ::System::Void Method_2_CCA72F7AC3E5774C(::Enum_3_52E949B35CB72EF7 a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
	{
		return ((::System::Void(*)(::Enum_3_52E949B35CB72EF7, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_CCA72F7AC3E5774C_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_70662636528151D7(::Class_1_A5DB3A79343C7D5B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5DB3A79343C7D5B*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_70662636528151D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD5F1AF5661A4E98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_BD5F1AF5661A4E98_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	static ::System::Void Method_2_6B55500FBAD14FD0(::System::String* a1, ::System::Action_1<::Struct_2_5887222B9AE38D34_2>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action_1<::Struct_2_5887222B9AE38D34_2>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_6B55500FBAD14FD0_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_211750970715814F(::Enum_3_36BFAC499637728A a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_36BFAC499637728A, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_211750970715814F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_76F9C089C5BB4240(::System::String* a1, ::System::Boolean a2, ::Enum_3_623007DD22E200D7 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Enum_3_623007DD22E200D7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_76F9C089C5BB4240_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_2_B0B42EBD035F7919(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_B0B42EBD035F7919_OFFSET))(a1, a2);
	}

	::System::String* Method_2_EA474E7E2ACA2010()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_EA474E7E2ACA2010_OFFSET))(this);
	}

	::System::Void Method_2_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_F8C7231308CD2C82_OFFSET))(this);
	}

	::System::Void Method_2_DCFB4B22A23E0C97(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::Enum_3_623007DD22E200D7 a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean, ::Enum_3_623007DD22E200D7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_DCFB4B22A23E0C97_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_6E1DD35AC740F721(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_6E1DD35AC740F721_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_42123A8F7B47F79C(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_42123A8F7B47F79C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3DACC45AC8150727(::Enum_3_36BFAC499637728A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_36BFAC499637728A))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_36BFAC499637728A Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_36BFAC499637728A(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_CB741CCB6B42AFF1_OFFSET))(this);
	}

	::System::Void Method_2_06A333308232F7F0(::Enum_3_36BFAC499637728A a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_36BFAC499637728A, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_06A333308232F7F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3D97F53977FFCB87(::UnityEngine::NetworkReachability a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NetworkReachability))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_3D97F53977FFCB87_OFFSET))(this, a1);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0ABED050BF793D4_1(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_F0ABED050BF793D4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_585F9C6EF5BC90C0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_585F9C6EF5BC90C0_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_491F28AD4D453C95(::System::String* a1, ::System::Action_1<::Struct_2_5887222B9AE38D34_2>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action_1<::Struct_2_5887222B9AE38D34_2>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_491F28AD4D453C95_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_84B2CA536DB1077C(::Enum_3_D2A64EC3E750051D a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::Enum_3_D2A64EC3E750051D, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_84B2CA536DB1077C_OFFSET))(a1, a2);
	}

	::System::Void Method_2_C04C7DA78BBA8316(::System::String* a1, ::System::Boolean a2, ::Enum_3_623007DD22E200D7 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Enum_3_623007DD22E200D7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_C04C7DA78BBA8316_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_2_418CA4EF93DDFBCC(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_418CA4EF93DDFBCC_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_405A7BDD272CA47D(::System::String* a1, ::Enum_3_92883740E544236B a2, ::System::Boolean a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::System::String*, ::Enum_3_92883740E544236B, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_405A7BDD272CA47D_OFFSET))(a1, a2, a3, a4);
	}

	::Class_1_7807B2B04302CD7B_13* Method_2_24748FC20F375725()
	{
		return ((::Class_1_7807B2B04302CD7B_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_7807B2B04302CD7B_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7807B2B04302CD7B_13*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
