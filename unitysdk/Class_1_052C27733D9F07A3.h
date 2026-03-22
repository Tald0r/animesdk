#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigCircularSector3D.h"
#include "unitysdk/MoleMole/Config/ConfigInteractionFanCylinder.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_1AA1710B40AA6D3E.h"
#include "unitysdk/Struct_2_409E294815B4CE48.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_58901CE2D08669AE_1.h"
#include "unitysdk/Struct_2_739BA4BA5DC2C4DB.h"
#include "unitysdk/Struct_2_74C6EE564641CFF8.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_1.h"
#include "unitysdk/Struct_2_EB409772687773A2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_483;
class Class_1_43BD383C98B4C0C5_40;
class Class_1_4EC5DD4A862D08DB;
class Class_1_B7E341C5F1A6F199;
class Class_1_E6FFFFD82483DB9E;
class Class_2_0C6A364076BE9BB5;
class Class_2_0C6A364076BE9BB5_1;
class Class_2_2380A913E325D517;
class Class_2_9E8CD0C1037EB98E_11;
class Class_3_DD81183BF1438207;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_052C27733D9F07A3_METHOD_1_03BC3A8E0266BC0A_OFFSET UNITYSDK_OFFSET(0x9B74790)
#define CLASS_1_052C27733D9F07A3_METHOD_1_08C7418911474ABE_OFFSET UNITYSDK_OFFSET(0x9B74020)
#define CLASS_1_052C27733D9F07A3_METHOD_1_12F619E2DA0F67D1_OFFSET UNITYSDK_OFFSET(0x9B71A50)
#define CLASS_1_052C27733D9F07A3_METHOD_1_2206254D783423ED_OFFSET UNITYSDK_OFFSET(0x9B74200)
#define CLASS_1_052C27733D9F07A3_METHOD_1_237DC8C6EAD8055C_OFFSET UNITYSDK_OFFSET(0x9B72B90)
#define CLASS_1_052C27733D9F07A3_METHOD_1_318F78C7FEEEB23B_OFFSET UNITYSDK_OFFSET(0x9B75150)
#define CLASS_1_052C27733D9F07A3_METHOD_1_329343801689C758_OFFSET UNITYSDK_OFFSET(0x9B72230)
#define CLASS_1_052C27733D9F07A3_METHOD_1_34F3742F2B91F146_OFFSET UNITYSDK_OFFSET(0x9B73930)
#define CLASS_1_052C27733D9F07A3_METHOD_1_3D80AF6F3ED50584_OFFSET UNITYSDK_OFFSET(0x9B75BC0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_4FD0DD9315598903_OFFSET UNITYSDK_OFFSET(0x9B73670)
#define CLASS_1_052C27733D9F07A3_METHOD_1_50F0B4DDCEFCFC53_OFFSET UNITYSDK_OFFSET(0x9B74A50)
#define CLASS_1_052C27733D9F07A3_METHOD_1_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0x9B72190)
#define CLASS_1_052C27733D9F07A3_METHOD_1_531E6B6F3F4C19E2_OFFSET UNITYSDK_OFFSET(0x9B72FD0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_6364858ED4C08034_OFFSET UNITYSDK_OFFSET(0x9B73F40)
#define CLASS_1_052C27733D9F07A3_METHOD_1_718F6F31E5C649BA_OFFSET UNITYSDK_OFFSET(0x9B71780)
#define CLASS_1_052C27733D9F07A3_METHOD_1_80D10F12C5B6FAD6_OFFSET UNITYSDK_OFFSET(0x9B735D0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_897587484972E418_OFFSET UNITYSDK_OFFSET(0x9B71590)
#define CLASS_1_052C27733D9F07A3_METHOD_1_8A2AC7CD7EA66CAC_1_OFFSET UNITYSDK_OFFSET(0x9B73470)
#define CLASS_1_052C27733D9F07A3_METHOD_1_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0x9B73460)
#define CLASS_1_052C27733D9F07A3_METHOD_1_90C7BC765C2861DF_OFFSET UNITYSDK_OFFSET(0x9B72580)
#define CLASS_1_052C27733D9F07A3_METHOD_1_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0x9B71CA0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_A19E1DBF92461E75_OFFSET UNITYSDK_OFFSET(0x9B74E30)
#define CLASS_1_052C27733D9F07A3_METHOD_1_AA1B4A8D7F75116E_OFFSET UNITYSDK_OFFSET(0x9B72690)
#define CLASS_1_052C27733D9F07A3_METHOD_1_B538FCB769D3D1B3_OFFSET UNITYSDK_OFFSET(0x9B73D00)
#define CLASS_1_052C27733D9F07A3_METHOD_1_BC8E2121E3BBA5BE_OFFSET UNITYSDK_OFFSET(0x9B74690)
#define CLASS_1_052C27733D9F07A3_METHOD_1_BCD4984B7193EBAE_OFFSET UNITYSDK_OFFSET(0x9B760A0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_C06F9AC638CE2C66_OFFSET UNITYSDK_OFFSET(0x9B74B20)
#define CLASS_1_052C27733D9F07A3_METHOD_1_C1CC1A3933DE591E_OFFSET UNITYSDK_OFFSET(0x9B71E80)
#define CLASS_1_052C27733D9F07A3_METHOD_1_C7950961C767D9D7_OFFSET UNITYSDK_OFFSET(0x9B73370)
#define CLASS_1_052C27733D9F07A3_METHOD_1_C82BBF168012F343_OFFSET UNITYSDK_OFFSET(0x9B75430)
#define CLASS_1_052C27733D9F07A3_METHOD_1_CA6ACCE9D56A6600_OFFSET UNITYSDK_OFFSET(0x9B72AC0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_CF3C30E1C5DE1703_OFFSET UNITYSDK_OFFSET(0x9B72780)
#define CLASS_1_052C27733D9F07A3_METHOD_1_D3A497189BB381F4_OFFSET UNITYSDK_OFFSET(0x9B73480)
#define CLASS_1_052C27733D9F07A3_METHOD_1_DC6BAAE4210C1387_OFFSET UNITYSDK_OFFSET(0x9B75DB0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_DCBF6B63ACB2A8D9_OFFSET UNITYSDK_OFFSET(0x9B71B00)
#define CLASS_1_052C27733D9F07A3_METHOD_1_EC7D759241E4BB4F_OFFSET UNITYSDK_OFFSET(0x9B75F00)
#define CLASS_1_052C27733D9F07A3_METHOD_1_F65AC83AA4591BFC_OFFSET UNITYSDK_OFFSET(0x9B724B0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_FE90B8B6D30EA745_OFFSET UNITYSDK_OFFSET(0x9B754F0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_FF8EE8EE5FBE4FD0_OFFSET UNITYSDK_OFFSET(0x9B761D0)

inline static constexpr unsigned int Class_1_052C27733D9F07A3_TypeDefinitionIndex = 49922;

class Class_1_052C27733D9F07A3 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_897587484972E418(::MoleMole::EntityHandle& a1, ::Class_3_DD81183BF1438207*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::Class_3_DD81183BF1438207*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_897587484972E418_OFFSET))(a1, a2);
	}

	static ::Class_3_DD81183BF1438207* Method_1_12F619E2DA0F67D1(::Class_2_0C6A364076BE9BB5_1*& a1, ::Class_1_E6FFFFD82483DB9E*& a2)
	{
		return ((::Class_3_DD81183BF1438207*(*)(::Class_2_0C6A364076BE9BB5_1*&, ::Class_1_E6FFFFD82483DB9E*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_12F619E2DA0F67D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DCBF6B63ACB2A8D9(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_DCBF6B63ACB2A8D9_OFFSET))(a1, a2);
	}

	static ::Struct_2_1AA1710B40AA6D3E Method_1_C1CC1A3933DE591E(::MoleMole::EntityHandle& a1)
	{
		return ((::Struct_2_1AA1710B40AA6D3E(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_C1CC1A3933DE591E_OFFSET))(a1);
	}

	static ::System::Single Method_1_52A3FEDD63707B13(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_52A3FEDD63707B13_OFFSET))(a1);
	}

	static ::Struct_2_45B62668F0BA5CF8 Method_1_329343801689C758(::Struct_2_EB409772687773A2& a1)
	{
		return ((::Struct_2_45B62668F0BA5CF8(*)(::Struct_2_EB409772687773A2&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_329343801689C758_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F65AC83AA4591BFC(::MoleMole::Config::ConfigInteractionFanCylinder a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigInteractionFanCylinder))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_F65AC83AA4591BFC_OFFSET))(a1);
	}

	static ::Foundation::Unreal::FTransform Method_1_90C7BC765C2861DF(::Class_2_9E8CD0C1037EB98E_11* a1, ::MoleMole::EntityHandle a2)
	{
		return ((::Foundation::Unreal::FTransform(*)(::Class_2_9E8CD0C1037EB98E_11*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_90C7BC765C2861DF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_AA1B4A8D7F75116E(::MoleMole::Config::ConfigCircularSector3D& a1, ::Class_2_0C6A364076BE9BB5*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigCircularSector3D&, ::Class_2_0C6A364076BE9BB5*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_AA1B4A8D7F75116E_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_718F6F31E5C649BA(::MoleMole::EntityHandle& a1)
	{
		return ((::System::Single(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_718F6F31E5C649BA_OFFSET))(a1);
	}

	static ::Class_1_4EC5DD4A862D08DB* Method_1_995B4AEB9D9468D5()
	{
		return ((::Class_1_4EC5DD4A862D08DB*(*)())((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_995B4AEB9D9468D5_OFFSET))();
	}

	static ::System::Single Method_1_237DC8C6EAD8055C(::Foundation::Unreal::FTransform& a1, ::Foundation::Unreal::FTransform& a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Single(*)(::Foundation::Unreal::FTransform&, ::Foundation::Unreal::FTransform&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_237DC8C6EAD8055C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_531E6B6F3F4C19E2(::MoleMole::Config::ConfigInteractionFanCylinder& a1, ::Class_3_DD81183BF1438207*& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigInteractionFanCylinder&, ::Class_3_DD81183BF1438207*&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_531E6B6F3F4C19E2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_8A2AC7CD7EA66CAC_OFFSET))();
	}

	static ::System::Boolean Method_1_D3A497189BB381F4(::MoleMole::EntityHandle& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_D3A497189BB381F4_OFFSET))(a1);
	}

	static ::Struct_2_409E294815B4CE48 Method_1_4FD0DD9315598903(::Struct_2_984AA94FB23486F9_1& a1, ::Struct_2_1AA1710B40AA6D3E& a2)
	{
		return ((::Struct_2_409E294815B4CE48(*)(::Struct_2_984AA94FB23486F9_1&, ::Struct_2_1AA1710B40AA6D3E&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_4FD0DD9315598903_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_34F3742F2B91F146(::MoleMole::EntityHandle& a1, ::MoleMole::Config::ConfigCircularSector3D& a2, ::Class_2_0C6A364076BE9BB5*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigCircularSector3D&, ::Class_2_0C6A364076BE9BB5*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_34F3742F2B91F146_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_08C7418911474ABE(::Class_3_DD81183BF1438207*& a1)
	{
		return ((::System::Boolean(*)(::Class_3_DD81183BF1438207*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_08C7418911474ABE_OFFSET))(a1);
	}

	static ::Struct_2_1AA1710B40AA6D3E Method_1_2206254D783423ED(::Class_0_16E4307DCC419505_483*& a1)
	{
		return ((::Struct_2_1AA1710B40AA6D3E(*)(::Class_0_16E4307DCC419505_483*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_2206254D783423ED_OFFSET))(a1);
	}

	static ::System::Single Method_1_BC8E2121E3BBA5BE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_BC8E2121E3BBA5BE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_03BC3A8E0266BC0A(::Class_2_2380A913E325D517* a1, ::Class_1_43BD383C98B4C0C5_40*& a2, ::MoleMole::EntityHandle& a3)
	{
		return ((::System::Boolean(*)(::Class_2_2380A913E325D517*, ::Class_1_43BD383C98B4C0C5_40*&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_03BC3A8E0266BC0A_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_8A2AC7CD7EA66CAC_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_8A2AC7CD7EA66CAC_1_OFFSET))();
	}

	static ::System::Void Method_1_50F0B4DDCEFCFC53(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_50F0B4DDCEFCFC53_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FTransform Method_1_C06F9AC638CE2C66(::MoleMole::EntityHandle& a1)
	{
		return ((::Foundation::Unreal::FTransform(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_C06F9AC638CE2C66_OFFSET))(a1);
	}

	static ::System::ValueTuple_3<::Struct_2_74C6EE564641CFF8, ::Struct_2_74C6EE564641CFF8, ::Struct_2_739BA4BA5DC2C4DB> Method_1_A19E1DBF92461E75(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::Struct_2_1AA1710B40AA6D3E>& a1, ::Struct_2_1AA1710B40AA6D3E& a2)
	{
		return ((::System::ValueTuple_3<::Struct_2_74C6EE564641CFF8, ::Struct_2_74C6EE564641CFF8, ::Struct_2_739BA4BA5DC2C4DB>(*)(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::Struct_2_1AA1710B40AA6D3E>&, ::Struct_2_1AA1710B40AA6D3E&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_A19E1DBF92461E75_OFFSET))(a1, a2);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_6364858ED4C08034(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::Struct_2_1AA1710B40AA6D3E>& a1)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::Struct_2_1AA1710B40AA6D3E>&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_6364858ED4C08034_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_318F78C7FEEEB23B(::MoleMole::EntityHandle& a1, ::MoleMole::Config::ConfigInteractionFanCylinder& a2, ::Class_3_DD81183BF1438207*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigInteractionFanCylinder&, ::Class_3_DD81183BF1438207*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_318F78C7FEEEB23B_OFFSET))(a1, a2, a3);
	}

	static ::Class_3_DD81183BF1438207* Method_1_C82BBF168012F343(::Class_2_0C6A364076BE9BB5_1*& a1, ::Class_1_E6FFFFD82483DB9E*& a2, ::MoleMole::EntityHandle& a3)
	{
		return ((::Class_3_DD81183BF1438207*(*)(::Class_2_0C6A364076BE9BB5_1*&, ::Class_1_E6FFFFD82483DB9E*&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_C82BBF168012F343_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_CF3C30E1C5DE1703(::MoleMole::Config::ConfigCircularSector3D a1)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::MoleMole::Config::ConfigCircularSector3D))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_CF3C30E1C5DE1703_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_FE90B8B6D30EA745(::Foundation::Unreal::FTransform& a1, ::Foundation::Unreal::FTransform& a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform&, ::Foundation::Unreal::FTransform&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_FE90B8B6D30EA745_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_3D80AF6F3ED50584(::MoleMole::EntityHandle& a1, ::MoleMole::Config::ConfigInteractionFanCylinder& a2, ::Struct_2_984AA94FB23486F9_1& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigInteractionFanCylinder&, ::Struct_2_984AA94FB23486F9_1&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_3D80AF6F3ED50584_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DC6BAAE4210C1387(::Class_2_2380A913E325D517*& a1, ::Class_1_43BD383C98B4C0C5_40*& a2, ::MoleMole::EntityHandle& a3)
	{
		return ((::System::Boolean(*)(::Class_2_2380A913E325D517*&, ::Class_1_43BD383C98B4C0C5_40*&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_DC6BAAE4210C1387_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_80D10F12C5B6FAD6(::Foundation::ViewObject::ViewObjectHandle& a1)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_80D10F12C5B6FAD6_OFFSET))(a1);
	}

	static ::System::Single Method_1_CA6ACCE9D56A6600(::UnityEngine::Collider* a1)
	{
		return ((::System::Single(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_CA6ACCE9D56A6600_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C7950961C767D9D7(::MoleMole::EntityHandle& a1, ::MoleMole::Config::ConfigInteractionFanCylinder& a2, ::Class_2_0C6A364076BE9BB5_1*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigInteractionFanCylinder&, ::Class_2_0C6A364076BE9BB5_1*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_C7950961C767D9D7_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_1AA1710B40AA6D3E Method_1_B538FCB769D3D1B3(::Struct_2_58901CE2D08669AE_1<::MoleMole::Battle::Entity*>& a1)
	{
		return ((::Struct_2_1AA1710B40AA6D3E(*)(::Struct_2_58901CE2D08669AE_1<::MoleMole::Battle::Entity*>&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_B538FCB769D3D1B3_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_EC7D759241E4BB4F(::Class_2_2380A913E325D517*& a1, ::Class_2_2380A913E325D517*& a2)
	{
		return ((::System::Int32(*)(::Class_2_2380A913E325D517*&, ::Class_2_2380A913E325D517*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_EC7D759241E4BB4F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_BCD4984B7193EBAE(::MoleMole::EntityHandle& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_BCD4984B7193EBAE_OFFSET))(a1, a2);
	}

	static ::Struct_2_739BA4BA5DC2C4DB Method_1_FF8EE8EE5FBE4FD0(::Struct_2_74C6EE564641CFF8& a1, ::Struct_2_1AA1710B40AA6D3E& a2)
	{
		return ((::Struct_2_739BA4BA5DC2C4DB(*)(::Struct_2_74C6EE564641CFF8&, ::Struct_2_1AA1710B40AA6D3E&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_FF8EE8EE5FBE4FD0_OFFSET))(a1, a2);
	}
};
