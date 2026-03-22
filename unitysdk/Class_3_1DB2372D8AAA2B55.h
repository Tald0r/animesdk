#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_1DB2372D8AAA2B55_Struct_2_B7FF36AE863DA93A.h"
#include "unitysdk/Class_3_1DB2372D8AAA2B55_Struct_2_D339CCD811B55B3A.h"
#include "unitysdk/Class_3_1DB2372D8AAA2B55_Struct_2_ED8FE57BB39388AE.h"
#include "unitysdk/Class_3_1DB2372D8AAA2B55_Struct_2_F7C243F317D8E44A_1.h"
#include "unitysdk/Enum_3_A1BBECBDB49FD4F7.h"
#include "unitysdk/Enum_3_E3B98E92576201A2.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

class Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1;
class Class_1_B7E341C5F1A6F199;
class Class_2_186B4E1BC116EFF3;
class Class_2_208CC9941471731A_848;
class Class_2_3EB92686D65E00AD;
class Class_2_819E8EBE0335DEC6;
class Class_2_8CCD896F955E811E;
class Class_2_96CDB1F24F758964;
class Class_2_B1F96C97C5B88AFC;
class Class_2_BA85E4525E7A6838;
class Class_2_E275F6568FBD98FA;
class Class_3_A9E2939AF1A43E78;
class Class_3_BE75AAF0F7C40C75;
class Class_3_CA0FA373359D1930;
class Class_3_CA0FA373359D1930_Class_1_4BBC7C5446F593D1;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_1DB2372D8AAA2B55_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x826A3F0)
#define CLASS_3_1DB2372D8AAA2B55_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x826AFD0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_029579BA86C97724_OFFSET UNITYSDK_OFFSET(0x8275380)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_02C00608BDDA63CD_OFFSET UNITYSDK_OFFSET(0x8273700)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_0D111E7B8D83D20B_OFFSET UNITYSDK_OFFSET(0x826EFE0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_12A01A1F52BC2ED4_OFFSET UNITYSDK_OFFSET(0x8276E50)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_1DA6758ECD89D23D_OFFSET UNITYSDK_OFFSET(0x8271670)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_1FBC343CC72D3455_OFFSET UNITYSDK_OFFSET(0x8273010)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_25F7C9CEE46BD1E5_1_OFFSET UNITYSDK_OFFSET(0x82705E0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_25F7C9CEE46BD1E5_OFFSET UNITYSDK_OFFSET(0x826FD20)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_289DF29CCB9F65FF_OFFSET UNITYSDK_OFFSET(0x826D4F0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_2C8285CDD10C6409_OFFSET UNITYSDK_OFFSET(0x826E240)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_2F858567F248A08A_OFFSET UNITYSDK_OFFSET(0x826FDF0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_319143D3217AB77D_OFFSET UNITYSDK_OFFSET(0x826EE20)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_324951C2D4AF23C3_OFFSET UNITYSDK_OFFSET(0x8273F70)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_3FE862FF7A0095C0_OFFSET UNITYSDK_OFFSET(0x826F320)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_42D0F605EDCC4ED7_OFFSET UNITYSDK_OFFSET(0x82754F0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_44C663E1EC7C582E_OFFSET UNITYSDK_OFFSET(0x826C6F0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_4B098A51980EAE31_OFFSET UNITYSDK_OFFSET(0x8273320)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_5623BF90400AEC55_1_OFFSET UNITYSDK_OFFSET(0x82750B0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_5623BF90400AEC55_OFFSET UNITYSDK_OFFSET(0x8273490)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8275050)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x826C510)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_5EBBA7A67202F836_OFFSET UNITYSDK_OFFSET(0x8272230)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_64768AC28E15975E_OFFSET UNITYSDK_OFFSET(0x826DA80)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_664E66E508CC28A4_OFFSET UNITYSDK_OFFSET(0x826CBE0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_6823F487DB00ABE5_OFFSET UNITYSDK_OFFSET(0x826B2C0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_69E9070AB5D2430E_OFFSET UNITYSDK_OFFSET(0x8270CC0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_6F11D76F0EBD31C4_OFFSET UNITYSDK_OFFSET(0x826DDB0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_741C644F7BDA6CC5_OFFSET UNITYSDK_OFFSET(0x8271E40)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_771093D3B38BE157_OFFSET UNITYSDK_OFFSET(0x826C570)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_7868DDFC4D86A029_OFFSET UNITYSDK_OFFSET(0x8274AE0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_79209E8C5FFDC9F8_OFFSET UNITYSDK_OFFSET(0x8270720)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_8106988985FA946B_OFFSET UNITYSDK_OFFSET(0x82731D0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x826B030)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_89C094FBF7F72EE9_OFFSET UNITYSDK_OFFSET(0x826EAE0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_8B6BC5E83F675BCB_OFFSET UNITYSDK_OFFSET(0x826B730)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_92EEB198074DA183_1_OFFSET UNITYSDK_OFFSET(0x8275320)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_92EEB198074DA183_OFFSET UNITYSDK_OFFSET(0x82732C0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_9321A09401BCB6C8_OFFSET UNITYSDK_OFFSET(0x826E970)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_9C7805966F67E8C5_OFFSET UNITYSDK_OFFSET(0x8276890)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_9DCC884372DD114E_OFFSET UNITYSDK_OFFSET(0x8275450)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_A10184AA04817ED7_OFFSET UNITYSDK_OFFSET(0x8271A20)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x82753F0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_ADB7638829853D2F_OFFSET UNITYSDK_OFFSET(0x8270970)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_B2C376ACCC22AD69_OFFSET UNITYSDK_OFFSET(0x82743F0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_B5399786BE89634D_OFFSET UNITYSDK_OFFSET(0x8270B50)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_BA9F98B46FD896F5_OFFSET UNITYSDK_OFFSET(0x8274530)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x8274A70)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_BDAEA205627AF268_OFFSET UNITYSDK_OFFSET(0x8274870)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_BF28F9C00500DE7A_OFFSET UNITYSDK_OFFSET(0x8270250)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_C0D33447FFF7D143_OFFSET UNITYSDK_OFFSET(0x82714A0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_C3F081B79E7B9798_OFFSET UNITYSDK_OFFSET(0x8272F70)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_C46DBC1D9719905F_OFFSET UNITYSDK_OFFSET(0x826CFC0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_C98F57800B5794A9_OFFSET UNITYSDK_OFFSET(0x8273D40)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8270AF0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x826FD90)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_D3CF5F361BC4754F_OFFSET UNITYSDK_OFFSET(0x8276980)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_D760E44660A9C0B6_OFFSET UNITYSDK_OFFSET(0x8275E70)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_E12239F58C5458F5_OFFSET UNITYSDK_OFFSET(0x8270350)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_E32F31D305471A57_OFFSET UNITYSDK_OFFSET(0x82725E0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_E3914FE00A447955_OFFSET UNITYSDK_OFFSET(0x8271CC0)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_E4BF5E0E1E925BB8_OFFSET UNITYSDK_OFFSET(0x8274320)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_ED1D80C7EEE032BA_OFFSET UNITYSDK_OFFSET(0x8272440)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_F1AC9C83DFB51714_OFFSET UNITYSDK_OFFSET(0x8272840)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_F62F69D578676DB6_OFFSET UNITYSDK_OFFSET(0x826BC20)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_F7AD97EEE9256A86_OFFSET UNITYSDK_OFFSET(0x826F870)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_FB57D9E4BA815DDB_OFFSET UNITYSDK_OFFSET(0x8272B10)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_FE2F02BCAD55C529_OFFSET UNITYSDK_OFFSET(0x826C270)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_FE9B0B47497E2A1F_OFFSET UNITYSDK_OFFSET(0x8273930)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_FF8DFFDCCAB9F666_1_OFFSET UNITYSDK_OFFSET(0x8270650)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_FF8DFFDCCAB9F666_OFFSET UNITYSDK_OFFSET(0x8270500)
#define CLASS_3_1DB2372D8AAA2B55_METHOD_3_FF9D70DA28C905A2_OFFSET UNITYSDK_OFFSET(0x82707D0)
#define CLASS_3_1DB2372D8AAA2B55_UPDATE_OFFSET UNITYSDK_OFFSET(0x826AE50)
#define CLASS_3_1DB2372D8AAA2B55__CTOR_OFFSET UNITYSDK_OFFSET(0x826B2A0)

inline static constexpr unsigned int Class_3_1DB2372D8AAA2B55_TypeDefinitionIndex = 37953;

class Class_3_1DB2372D8AAA2B55 : public ::Class_2_F33340E023067DAF
{
public:
	// static const ::System::Int32 Field_3_1 = 0x5; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_6823F487DB00ABE5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_6823F487DB00ABE5_OFFSET))(a1);
	}

	static ::System::Void Method_3_F62F69D578676DB6(::Enum_3_A1BBECBDB49FD4F7 a1, ::MoleMole::Battle::Entity* a2, ::Il2CppArray<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::Enum_3_A1BBECBDB49FD4F7, ::MoleMole::Battle::Entity*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_F62F69D578676DB6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_5790A55946AA509D_OFFSET))();
	}

	static ::System::Boolean Method_3_771093D3B38BE157(::Enum_3_A1BBECBDB49FD4F7 a1, ::System::UInt32 a2, ::MoleMole::Battle::Entity* a3, ::Il2CppArray<::System::Int32>* a4)
	{
		return ((::System::Boolean(*)(::Enum_3_A1BBECBDB49FD4F7, ::System::UInt32, ::MoleMole::Battle::Entity*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_771093D3B38BE157_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_3_664E66E508CC28A4(::Enum_3_A1BBECBDB49FD4F7 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Int32(*)(::Enum_3_A1BBECBDB49FD4F7, ::System::Single, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_664E66E508CC28A4_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_64768AC28E15975E(::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_64768AC28E15975E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2C8285CDD10C6409(::Class_2_E275F6568FBD98FA* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_E275F6568FBD98FA*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_2C8285CDD10C6409_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_89C094FBF7F72EE9(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_89C094FBF7F72EE9_OFFSET))(a1);
	}

	static ::System::Void Method_3_319143D3217AB77D(::Class_2_BA85E4525E7A6838* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_BA85E4525E7A6838*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_319143D3217AB77D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0D111E7B8D83D20B(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_0D111E7B8D83D20B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_44C663E1EC7C582E(::Class_3_1DB2372D8AAA2B55_Struct_2_B7FF36AE863DA93A a1, ::System::Action_1<::Class_3_1DB2372D8AAA2B55_Struct_2_D339CCD811B55B3A>* a2, ::Il2CppArray<::System::Int32>* a3)
	{
		return ((::System::Boolean(*)(::Class_3_1DB2372D8AAA2B55_Struct_2_B7FF36AE863DA93A, ::System::Action_1<::Class_3_1DB2372D8AAA2B55_Struct_2_D339CCD811B55B3A>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_44C663E1EC7C582E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_3FE862FF7A0095C0(::Class_3_A9E2939AF1A43E78* a1)
	{
		return ((::System::Void(*)(::Class_3_A9E2939AF1A43E78*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_3FE862FF7A0095C0_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_F7AD97EEE9256A86(::Enum_3_A1BBECBDB49FD4F7 a1, ::MoleMole::Battle::Entity* a2, ::System::Action_1<::System::Int32>* a3, ::Il2CppArray<::System::Int32>* a4)
	{
		return ((::System::Boolean(*)(::Enum_3_A1BBECBDB49FD4F7, ::MoleMole::Battle::Entity*, ::System::Action_1<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_F7AD97EEE9256A86_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_25F7C9CEE46BD1E5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_25F7C9CEE46BD1E5_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_289DF29CCB9F65FF(::Enum_3_A1BBECBDB49FD4F7 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Void(*)(::Enum_3_A1BBECBDB49FD4F7, ::System::Single, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_289DF29CCB9F65FF_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_2F858567F248A08A(::System::Single a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_2F858567F248A08A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_9321A09401BCB6C8(::Enum_3_A1BBECBDB49FD4F7 a1, ::MoleMole::Battle::Entity* a2, ::Il2CppArray<::System::Int32>* a3)
	{
		return ((::System::Boolean(*)(::Enum_3_A1BBECBDB49FD4F7, ::MoleMole::Battle::Entity*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_9321A09401BCB6C8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_FF8DFFDCCAB9F666(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_FF8DFFDCCAB9F666_OFFSET))(a1);
	}

	static ::System::Void Method_3_25F7C9CEE46BD1E5_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_25F7C9CEE46BD1E5_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_BF28F9C00500DE7A(::Class_2_208CC9941471731A_848* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Boolean(*)(::Class_2_208CC9941471731A_848*, ::System::Single, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_BF28F9C00500DE7A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_C46DBC1D9719905F(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_C46DBC1D9719905F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_FF8DFFDCCAB9F666_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_FF8DFFDCCAB9F666_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_79209E8C5FFDC9F8(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_79209E8C5FFDC9F8_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_FF9D70DA28C905A2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_FF9D70DA28C905A2_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_B5399786BE89634D(::Class_3_CA0FA373359D1930* a1)
	{
		return ((::System::Void(*)(::Class_3_CA0FA373359D1930*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_B5399786BE89634D_OFFSET))(a1);
	}

	static ::System::Void Method_3_1DA6758ECD89D23D(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_1DA6758ECD89D23D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A10184AA04817ED7(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_A10184AA04817ED7_OFFSET))(a1);
	}

	static ::System::Void Method_3_E3914FE00A447955(::Class_3_CA0FA373359D1930* a1)
	{
		return ((::System::Void(*)(::Class_3_CA0FA373359D1930*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_E3914FE00A447955_OFFSET))(a1);
	}

	static ::System::Void Method_3_741C644F7BDA6CC5(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_741C644F7BDA6CC5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FB57D9E4BA815DDB(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5, ::MoleMole::Battle::Entity* a6)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_FB57D9E4BA815DDB_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_8106988985FA946B(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_8106988985FA946B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8B6BC5E83F675BCB(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_8B6BC5E83F675BCB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_92EEB198074DA183(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_92EEB198074DA183_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_69E9070AB5D2430E(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_69E9070AB5D2430E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5623BF90400AEC55(::MoleMole::Config::BaseProperty a1, ::System::Double a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseProperty, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_5623BF90400AEC55_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_E12239F58C5458F5(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_E12239F58C5458F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_8542E37E74FDE1B5_OFFSET))();
	}

	static ::System::Void Method_3_FE2F02BCAD55C529(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_FE2F02BCAD55C529_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_4B098A51980EAE31(::Enum_3_A1BBECBDB49FD4F7 a1, ::MoleMole::Battle::Entity* a2, ::Il2CppArray<::System::Int32>* a3, ::Class_3_1DB2372D8AAA2B55_Struct_2_ED8FE57BB39388AE& a4)
	{
		return ((::System::Void(*)(::Enum_3_A1BBECBDB49FD4F7, ::MoleMole::Battle::Entity*, ::Il2CppArray<::System::Int32>*, ::Class_3_1DB2372D8AAA2B55_Struct_2_ED8FE57BB39388AE&))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_4B098A51980EAE31_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_C98F57800B5794A9(::Enum_3_E3B98E92576201A2 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Enum_3_E3B98E92576201A2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_C98F57800B5794A9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_324951C2D4AF23C3(::Class_2_186B4E1BC116EFF3* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_186B4E1BC116EFF3*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_324951C2D4AF23C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E4BF5E0E1E925BB8(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_E4BF5E0E1E925BB8_OFFSET))(a1);
	}

	static ::System::Void Method_3_C3F081B79E7B9798(::System::Single a1, ::System::Single a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_C3F081B79E7B9798_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_B2C376ACCC22AD69(::Class_3_CA0FA373359D1930* a1)
	{
		return ((::System::Void(*)(::Class_3_CA0FA373359D1930*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_B2C376ACCC22AD69_OFFSET))(a1);
	}

	static ::System::Void Method_3_BDAEA205627AF268(::Class_2_96CDB1F24F758964* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_96CDB1F24F758964*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_BDAEA205627AF268_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_ADB7638829853D2F(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::System::Int32, ::System::UInt32, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_ADB7638829853D2F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_7868DDFC4D86A029(::System::UInt32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_7868DDFC4D86A029_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_5790A55946AA509D_1_OFFSET))();
	}

	static ::System::Void Method_3_5EBBA7A67202F836(::System::Boolean a1, ::System::Boolean a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_5EBBA7A67202F836_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_02C00608BDDA63CD(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_02C00608BDDA63CD_OFFSET))(a1);
	}

	static ::System::Void Method_3_5623BF90400AEC55_1(::MoleMole::Config::BaseProperty a1, ::System::Double a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseProperty, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_5623BF90400AEC55_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_ED1D80C7EEE032BA(::Enum_3_A1BBECBDB49FD4F7 a1, ::System::UInt32 a2, ::System::Boolean a3, ::MoleMole::Battle::Entity* a4, ::Il2CppArray<::System::Int32>* a5)
	{
		return ((::System::Boolean(*)(::Enum_3_A1BBECBDB49FD4F7, ::System::UInt32, ::System::Boolean, ::MoleMole::Battle::Entity*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_ED1D80C7EEE032BA_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_92EEB198074DA183_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_92EEB198074DA183_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_029579BA86C97724(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_029579BA86C97724_OFFSET))(a1);
	}

	static ::System::Void Method_3_F1AC9C83DFB51714(::Class_2_819E8EBE0335DEC6* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_819E8EBE0335DEC6*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_F1AC9C83DFB51714_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C0D33447FFF7D143(::Class_3_CA0FA373359D1930* a1)
	{
		return ((::System::Void(*)(::Class_3_CA0FA373359D1930*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_C0D33447FFF7D143_OFFSET))(a1);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_BE75AAF0F7C40C75* a1)
	{
		return ((::System::Void(*)(::Class_3_BE75AAF0F7C40C75*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::System::Void Method_3_9DCC884372DD114E(::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_9DCC884372DD114E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E32F31D305471A57(::Class_2_B1F96C97C5B88AFC* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_B1F96C97C5B88AFC*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_E32F31D305471A57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FE9B0B47497E2A1F(::Class_3_CA0FA373359D1930* a1)
	{
		return ((::System::Void(*)(::Class_3_CA0FA373359D1930*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_FE9B0B47497E2A1F_OFFSET))(a1);
	}

	static ::System::Void Method_3_42D0F605EDCC4ED7(::Class_2_3EB92686D65E00AD* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_3EB92686D65E00AD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_42D0F605EDCC4ED7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D760E44660A9C0B6(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_D760E44660A9C0B6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1FBC343CC72D3455(::MoleMole::Config::BaseProperty a1, ::System::Double a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseProperty, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_1FBC343CC72D3455_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_9C7805966F67E8C5(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_9C7805966F67E8C5_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_BA9F98B46FD896F5(::Class_3_CA0FA373359D1930_Class_1_4BBC7C5446F593D1* a1)
	{
		return ((::System::Boolean(*)(::Class_3_CA0FA373359D1930_Class_1_4BBC7C5446F593D1*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_BA9F98B46FD896F5_OFFSET))(a1);
	}

	static ::System::Void Method_3_D3CF5F361BC4754F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_D3CF5F361BC4754F_OFFSET))(a1);
	}

	static ::System::Void Method_3_12A01A1F52BC2ED4(::Class_2_8CCD896F955E811E* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_8CCD896F955E811E*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_12A01A1F52BC2ED4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6F11D76F0EBD31C4(::System::Int32 a1, ::Class_3_1DB2372D8AAA2B55_Struct_2_F7C243F317D8E44A_1 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_3_1DB2372D8AAA2B55_Struct_2_F7C243F317D8E44A_1, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1DB2372D8AAA2B55_METHOD_3_6F11D76F0EBD31C4_OFFSET))(a1, a2, a3, a4);
	}
};
