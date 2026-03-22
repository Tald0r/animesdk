#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2E0F4F3EE3890A77_Enum_3_E97B70FCA25BE2EF.h"
#include "unitysdk/Enum_3_C94072881E4D8DDF.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/Struct_2_762745BB6079D620.h"
#include "unitysdk/Struct_2_A97D76DF7CC328CB.h"
#include "unitysdk/Struct_2_D1EFB72CF64C82FB.h"
#include "unitysdk/Struct_2_EB409772687773A2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_483;
class Class_1_0E19106486AABDF9;
class Class_1_34FD3279A7CB3331;
class Class_1_CF0CD74FF3197D03;
class Class_2_208CC9941471731A_342;
class Class_2_2CBC78D5C92D43A4;
class Class_2_D202B83AFEDC0267_1;
class Class_3_74BDCD2E9535A045_2;
class Class_3_9F2FCC0519F3E06F_67;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class AbyssS2InteractionBuildData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x69D2550)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_062C30C07BD5A31D_OFFSET UNITYSDK_OFFSET(0x69CFF00)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_0EBA4970CE1970A6_OFFSET UNITYSDK_OFFSET(0x69D31F0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_0F8226F089EBF6F9_OFFSET UNITYSDK_OFFSET(0x69D1440)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_12E2584290784D11_OFFSET UNITYSDK_OFFSET(0x69D3B00)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_187B3E3B8611027E_OFFSET UNITYSDK_OFFSET(0x69D6650)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_188D98AFDB04C63A_OFFSET UNITYSDK_OFFSET(0x69D50F0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_1BFB922FA93BF5FA_OFFSET UNITYSDK_OFFSET(0x69D51D0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_263AAA2415453CAC_OFFSET UNITYSDK_OFFSET(0x69D3E10)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_341698C29DA9690D_OFFSET UNITYSDK_OFFSET(0x69D4CC0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_36AD99A415645A1B_OFFSET UNITYSDK_OFFSET(0x69D4F90)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_37CFBDAE896650D5_OFFSET UNITYSDK_OFFSET(0x69D32F0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_3BC578EAB014DDA0_OFFSET UNITYSDK_OFFSET(0x69D02C0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_412A43E284E9C89C_OFFSET UNITYSDK_OFFSET(0x69D4720)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_41D8D9609691BC68_OFFSET UNITYSDK_OFFSET(0x69D1210)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_44AC943DFF18693F_OFFSET UNITYSDK_OFFSET(0x69D0730)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_49964A8388055B4B_OFFSET UNITYSDK_OFFSET(0x69D35C0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C2ACACD89F4EF1A_OFFSET UNITYSDK_OFFSET(0x69D40A0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C4CD42FE499726C_1_OFFSET UNITYSDK_OFFSET(0x69D4A80)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C4CD42FE499726C_OFFSET UNITYSDK_OFFSET(0x69D0AB0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C633591FEC7DFE8_OFFSET UNITYSDK_OFFSET(0x69D53C0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_4CA94EEE67092683_OFFSET UNITYSDK_OFFSET(0x69D3140)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_5034A05F39A54035_OFFSET UNITYSDK_OFFSET(0x69D52F0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_50FA36BE07F14CC1_OFFSET UNITYSDK_OFFSET(0x69D0CF0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x69D4190)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_582A746C174B343F_OFFSET UNITYSDK_OFFSET(0x69D2FE0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_583F5BF4187B6510_OFFSET UNITYSDK_OFFSET(0x69D66B0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_585F516F2193A5F9_1_OFFSET UNITYSDK_OFFSET(0x69D0050)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_585F516F2193A5F9_OFFSET UNITYSDK_OFFSET(0x69CF840)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_59850B5B891AFB03_OFFSET UNITYSDK_OFFSET(0x69D5F30)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_5CD9ED6DE8B9A028_1_OFFSET UNITYSDK_OFFSET(0x69D5940)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_5CD9ED6DE8B9A028_OFFSET UNITYSDK_OFFSET(0x69D27C0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_637A915502BBAB58_OFFSET UNITYSDK_OFFSET(0x69CF8F0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_6A0604423146B648_OFFSET UNITYSDK_OFFSET(0x69D38E0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_75E09BEF17D32072_OFFSET UNITYSDK_OFFSET(0x69D1BB0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_792DE10F6E501243_OFFSET UNITYSDK_OFFSET(0x69D4380)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_7C57D2BFA5D5A22D_OFFSET UNITYSDK_OFFSET(0x69D0910)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_7D1E3E3790B089E5_OFFSET UNITYSDK_OFFSET(0x69D2E10)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_7D33C76814CBDF9C_OFFSET UNITYSDK_OFFSET(0x69D03D0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_7EB884ACE72E4228_OFFSET UNITYSDK_OFFSET(0x69D1920)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_8369C84CFD80B2FB_OFFSET UNITYSDK_OFFSET(0x69CFCD0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x69D1D00)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_86743E8E66B3D2C3_OFFSET UNITYSDK_OFFSET(0x69D1DD0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_86B5E9A9F08192C9_OFFSET UNITYSDK_OFFSET(0x69D25B0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_8A7AC5C0FDE4B19E_OFFSET UNITYSDK_OFFSET(0x69D0100)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0x69CFAF0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_A45029BEBB2783A6_OFFSET UNITYSDK_OFFSET(0x69D1F50)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0x69D4410)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_B681D17F144F3FD0_OFFSET UNITYSDK_OFFSET(0x69D05A0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_BDB797B3510F490C_OFFSET UNITYSDK_OFFSET(0x69D2730)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_C0FD77CCB1B53417_OFFSET UNITYSDK_OFFSET(0x69D2EE0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_C43BAF4FA453D522_OFFSET UNITYSDK_OFFSET(0x69D5730)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_C66FD0CA776DA3CB_OFFSET UNITYSDK_OFFSET(0x69D48F0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_CB384C32289DEF52_OFFSET UNITYSDK_OFFSET(0x69D15D0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_D1D24AC21ACE0893_OFFSET UNITYSDK_OFFSET(0x69D2350)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_D2764D4B3DC2AE66_OFFSET UNITYSDK_OFFSET(0x69D41F0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_DCB1C6CDC61D91E8_1_OFFSET UNITYSDK_OFFSET(0x69D5CF0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_DCB1C6CDC61D91E8_OFFSET UNITYSDK_OFFSET(0x69D54F0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_E712C48FF2FEC12C_OFFSET UNITYSDK_OFFSET(0x69D2B30)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_E7322EE9E937999D_OFFSET UNITYSDK_OFFSET(0x69D20C0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_EBA29CC3E5DF3810_1_OFFSET UNITYSDK_OFFSET(0x69D3510)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_EBA29CC3E5DF3810_2_OFFSET UNITYSDK_OFFSET(0x69D4670)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_EBA29CC3E5DF3810_OFFSET UNITYSDK_OFFSET(0x69D2D60)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x69D37E0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_F80EB96591751CA1_OFFSET UNITYSDK_OFFSET(0x69D1650)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_F852041EBB85F269_OFFSET UNITYSDK_OFFSET(0x69D3BF0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_FE448A90BBB8EF2C_OFFSET UNITYSDK_OFFSET(0x69D1280)
#define CLASS_1_2E0F4F3EE3890A77__CCTOR_OFFSET UNITYSDK_OFFSET(0x69CF7D0)

inline static constexpr unsigned int Class_1_2E0F4F3EE3890A77_TypeDefinitionIndex = 61979;

class Class_1_2E0F4F3EE3890A77 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E0F4F3EE3890A77_TypeDefinitionIndex)->GetStaticField(0x32C60);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E0F4F3EE3890A77_TypeDefinitionIndex)->GetStaticField(0x32C68);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E0F4F3EE3890A77_TypeDefinitionIndex)->GetStaticField(0x32C70);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E0F4F3EE3890A77_TypeDefinitionIndex)->GetStaticField(0xC500);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E0F4F3EE3890A77_TypeDefinitionIndex)->GetStaticField(0xC504);
	}
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_585F516F2193A5F9(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_585F516F2193A5F9_OFFSET))(a1);
	}

	static ::Class_1_CF0CD74FF3197D03* Method_1_995B4AEB9D9468D5()
	{
		return ((::Class_1_CF0CD74FF3197D03*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_995B4AEB9D9468D5_OFFSET))();
	}

	static ::System::Boolean Method_1_8369C84CFD80B2FB(::MoleMole::Battle::Entity*& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_8369C84CFD80B2FB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_585F516F2193A5F9_1(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_585F516F2193A5F9_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8A7AC5C0FDE4B19E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_8A7AC5C0FDE4B19E_OFFSET))();
	}

	static ::System::Int32 Method_1_7D33C76814CBDF9C(::System::Int32& a1)
	{
		return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_7D33C76814CBDF9C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_44AC943DFF18693F(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_44AC943DFF18693F_OFFSET))(a1);
	}

	static ::System::Void Method_1_4C4CD42FE499726C(::System::Int32& a1, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*& a2)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C4CD42FE499726C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_FE448A90BBB8EF2C(::Class_2_2CBC78D5C92D43A4*& a1, ::Class_1_0E19106486AABDF9*& a2)
	{
		return ((::System::Boolean(*)(::Class_2_2CBC78D5C92D43A4*&, ::Class_1_0E19106486AABDF9*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_FE448A90BBB8EF2C_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_0F8226F089EBF6F9(::System::Int32& a1)
	{
		return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_0F8226F089EBF6F9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CB384C32289DEF52(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_CB384C32289DEF52_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F80EB96591751CA1(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_F80EB96591751CA1_OFFSET))(a1, a2);
	}

	static ::Struct_2_EB409772687773A2 Method_1_75E09BEF17D32072(::MoleMole::Battle::Entity* a1)
	{
		return ((::Struct_2_EB409772687773A2(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_75E09BEF17D32072_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_83DA3EC57FF907F4_OFFSET))();
	}

	static ::System::Int32 Method_1_86743E8E66B3D2C3(::System::Int32& a1, ::System::Boolean a2, ::System::Int32& a3)
	{
		return ((::System::Int32(*)(::System::Int32&, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_86743E8E66B3D2C3_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_A45029BEBB2783A6(::System::Int32& a1)
	{
		return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_A45029BEBB2783A6_OFFSET))(a1);
	}

	static ::Class_2_208CC9941471731A_342* Method_1_E7322EE9E937999D(::MoleMole::Battle::Entity*& a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_342*>*& a2)
	{
		return ((::Class_2_208CC9941471731A_342*(*)(::MoleMole::Battle::Entity*&, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_342*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_E7322EE9E937999D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D1D24AC21ACE0893(::MoleMole::Battle::Entity*& a1, ::System::Boolean a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_D1D24AC21ACE0893_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7EB884ACE72E4228(::MoleMole::Battle::Entity*& a1, ::Class_2_208CC9941471731A_342*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&, ::Class_2_208CC9941471731A_342*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_7EB884ACE72E4228_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BDB797B3510F490C(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_BDB797B3510F490C_OFFSET))(a1, a2);
	}

	static ::Struct_2_D1EFB72CF64C82FB Method_1_5CD9ED6DE8B9A028(::MoleMole::EntityHandle& a1, ::MoleMole::EntityHandle& a2, ::System::Int32& a3)
	{
		return ((::Struct_2_D1EFB72CF64C82FB(*)(::MoleMole::EntityHandle&, ::MoleMole::EntityHandle&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_5CD9ED6DE8B9A028_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_E712C48FF2FEC12C(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_E712C48FF2FEC12C_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_EBA29CC3E5DF3810()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_EBA29CC3E5DF3810_OFFSET))();
	}

	static ::Class_3_9F2FCC0519F3E06F_67* Method_1_B681D17F144F3FD0()
	{
		return ((::Class_3_9F2FCC0519F3E06F_67*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_B681D17F144F3FD0_OFFSET))();
	}

	static ::System::Boolean Method_1_C0FD77CCB1B53417(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_C0FD77CCB1B53417_OFFSET))(a1);
	}

	static ::MoleMole::EntityHandle Method_1_582A746C174B343F(::Class_0_16E4307DCC419505_483*& a1)
	{
		return ((::MoleMole::EntityHandle(*)(::Class_0_16E4307DCC419505_483*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_582A746C174B343F_OFFSET))(a1);
	}

	static ::Enum_3_C94072881E4D8DDF Method_1_4CA94EEE67092683()
	{
		return ((::Enum_3_C94072881E4D8DDF(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_4CA94EEE67092683_OFFSET))();
	}

	static ::Struct_2_A97D76DF7CC328CB Method_1_0EBA4970CE1970A6(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single& a3, ::System::Single& a4, ::System::Int32& a5)
	{
		return ((::Struct_2_A97D76DF7CC328CB(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_0EBA4970CE1970A6_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_2_208CC9941471731A_342* Method_1_7D1E3E3790B089E5()
	{
		return ((::Class_2_208CC9941471731A_342*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_7D1E3E3790B089E5_OFFSET))();
	}

	static ::System::Int32 Method_1_EBA29CC3E5DF3810_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_EBA29CC3E5DF3810_1_OFFSET))();
	}

	static ::System::Boolean Method_1_49964A8388055B4B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_49964A8388055B4B_OFFSET))();
	}

	static ::System::Boolean Method_1_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_F39234F2606D8D97_OFFSET))();
	}

	static ::System::Boolean Method_1_3BC578EAB014DDA0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_3BC578EAB014DDA0_OFFSET))();
	}

	static ::System::Boolean Method_1_6A0604423146B648(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_6A0604423146B648_OFFSET))(a1);
	}

	static ::MoleMole::FlowCanvas::Nodes::AreaIDTag Method_1_637A915502BBAB58(::System::Int32& a1)
	{
		return ((::MoleMole::FlowCanvas::Nodes::AreaIDTag(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_637A915502BBAB58_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_12E2584290784D11(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_12E2584290784D11_OFFSET))(a1);
	}

	static ::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData* Method_1_41D8D9609691BC68(::Class_2_208CC9941471731A_342*& a1)
	{
		return ((::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*(*)(::Class_2_208CC9941471731A_342*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_41D8D9609691BC68_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_263AAA2415453CAC(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_263AAA2415453CAC_OFFSET))(a1);
	}

	static ::System::Void Method_1_4C2ACACD89F4EF1A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C2ACACD89F4EF1A_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_D2764D4B3DC2AE66(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_D2764D4B3DC2AE66_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_792DE10F6E501243(::MoleMole::EntityHandle& a1, ::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_792DE10F6E501243_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F852041EBB85F269(::MoleMole::Battle::Entity*& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_F852041EBB85F269_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_ADA85C40A3382050_OFFSET))();
	}

	static ::System::Int32 Method_1_37CFBDAE896650D5()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_37CFBDAE896650D5_OFFSET))();
	}

	static ::System::Int32 Method_1_EBA29CC3E5DF3810_2()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_EBA29CC3E5DF3810_2_OFFSET))();
	}

	static ::System::Void Method_1_412A43E284E9C89C(::System::String* a1, ::UnityEngine::LogType a2, ::System::Nullable_1<::UnityEngine::Color> a3)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_412A43E284E9C89C_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_C66FD0CA776DA3CB()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_C66FD0CA776DA3CB_OFFSET))();
	}

	static ::System::Void Method_1_4C4CD42FE499726C_1(::System::Int32& a1, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*& a2)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C4CD42FE499726C_1_OFFSET))(a1, a2);
	}

	static ::Class_3_74BDCD2E9535A045_2* Method_1_341698C29DA9690D(::System::Int32& a1)
	{
		return ((::Class_3_74BDCD2E9535A045_2*(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_341698C29DA9690D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_36AD99A415645A1B(::MoleMole::Battle::Entity*& a1, ::Class_1_34FD3279A7CB3331*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&, ::Class_1_34FD3279A7CB3331*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_36AD99A415645A1B_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_188D98AFDB04C63A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_188D98AFDB04C63A_OFFSET))();
	}

	static ::System::Boolean Method_1_1BFB922FA93BF5FA(::MoleMole::Battle::Entity*& a1, ::MoleMole::Battle::Entity*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_1BFB922FA93BF5FA_OFFSET))(a1, a2);
	}

	static ::Struct_2_D1EFB72CF64C82FB Method_1_5034A05F39A54035(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single& a3, ::System::Int32& a4)
	{
		return ((::Struct_2_D1EFB72CF64C82FB(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_5034A05F39A54035_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4C633591FEC7DFE8(::System::Int32& a1, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*& a2)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C633591FEC7DFE8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DCB1C6CDC61D91E8()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_DCB1C6CDC61D91E8_OFFSET))();
	}

	static ::System::Boolean Method_1_C43BAF4FA453D522(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_C43BAF4FA453D522_OFFSET))(a1);
	}

	static ::Class_2_D202B83AFEDC0267_1* Method_1_7C57D2BFA5D5A22D(::MoleMole::Battle::Entity*& a1)
	{
		return ((::Class_2_D202B83AFEDC0267_1*(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_7C57D2BFA5D5A22D_OFFSET))(a1);
	}

	static ::Struct_2_A97D76DF7CC328CB Method_1_5CD9ED6DE8B9A028_1(::MoleMole::EntityHandle& a1, ::MoleMole::EntityHandle& a2, ::System::Int32& a3)
	{
		return ((::Struct_2_A97D76DF7CC328CB(*)(::MoleMole::EntityHandle&, ::MoleMole::EntityHandle&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_5CD9ED6DE8B9A028_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DCB1C6CDC61D91E8_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_DCB1C6CDC61D91E8_1_OFFSET))();
	}

	static ::System::Boolean Method_1_86B5E9A9F08192C9(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_86B5E9A9F08192C9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_062C30C07BD5A31D(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_062C30C07BD5A31D_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_342*>* Method_1_59850B5B891AFB03(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_342*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_59850B5B891AFB03_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_342*>* Method_1_50FA36BE07F14CC1(::System::Int32& a1, ::Class_1_2E0F4F3EE3890A77_Enum_3_E97B70FCA25BE2EF& a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_342*>*(*)(::System::Int32&, ::Class_1_2E0F4F3EE3890A77_Enum_3_E97B70FCA25BE2EF&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_50FA36BE07F14CC1_OFFSET))(a1, a2);
	}

	static ::Struct_2_762745BB6079D620 Method_1_187B3E3B8611027E()
	{
		return ((::Struct_2_762745BB6079D620(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_187B3E3B8611027E_OFFSET))();
	}

	static ::System::Boolean Method_1_583F5BF4187B6510(::System::String*& a1, ::System::Collections::Generic::HashSet_1<::System::String*>*& a2)
	{
		return ((::System::Boolean(*)(::System::String*&, ::System::Collections::Generic::HashSet_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_583F5BF4187B6510_OFFSET))(a1, a2);
	}
};
