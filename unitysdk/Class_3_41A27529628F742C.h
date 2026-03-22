#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/NapRenderEntityFlags.h"
#include "unitysdk/Struct_2_25797252421662EF.h"
#include "unitysdk/Struct_2_395B739A1AC58399_2.h"
#include "unitysdk/Struct_2_C2BA6C3A72B961AE.h"
#include "unitysdk/Struct_2_D88FF587540AB8AF.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9610394F487FC231;
class Class_1_B7E341C5F1A6F199;
class Class_2_09C478668651C9AE_5;
class Class_2_D0A1765C72A19057;
class Class_3_9AE843FF905C0BDB;
class Class_3_F2DAD7F45F518868;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class MonoRenderHandler; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class RenderMaterial; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define CLASS_3_41A27529628F742C_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x79D56C0)
#define CLASS_3_41A27529628F742C_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x79D62D0)
#define CLASS_3_41A27529628F742C_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x79D65F0)
#define CLASS_3_41A27529628F742C_METHOD_3_02330A6D0B714DA9_1_OFFSET UNITYSDK_OFFSET(0xA426850)
#define CLASS_3_41A27529628F742C_METHOD_3_02330A6D0B714DA9_OFFSET UNITYSDK_OFFSET(0x79DBD70)
#define CLASS_3_41A27529628F742C_METHOD_3_03CC7653040D2294_OFFSET UNITYSDK_OFFSET(0xA422400)
#define CLASS_3_41A27529628F742C_METHOD_3_07C911C46C9639E8_OFFSET UNITYSDK_OFFSET(0xA41F790)
#define CLASS_3_41A27529628F742C_METHOD_3_0EB6B7A416AF5EB9_OFFSET UNITYSDK_OFFSET(0xA426AF0)
#define CLASS_3_41A27529628F742C_METHOD_3_146BFAC3AFDB933C_OFFSET UNITYSDK_OFFSET(0xA422DF0)
#define CLASS_3_41A27529628F742C_METHOD_3_154E381DD1A68A09_OFFSET UNITYSDK_OFFSET(0xA423530)
#define CLASS_3_41A27529628F742C_METHOD_3_1603ED42490AC4B2_OFFSET UNITYSDK_OFFSET(0xA420600)
#define CLASS_3_41A27529628F742C_METHOD_3_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0xA424B40)
#define CLASS_3_41A27529628F742C_METHOD_3_16F68DFE5F1EF396_OFFSET UNITYSDK_OFFSET(0xA4207A0)
#define CLASS_3_41A27529628F742C_METHOD_3_1A2A293D5B3F4F64_OFFSET UNITYSDK_OFFSET(0xA422D60)
#define CLASS_3_41A27529628F742C_METHOD_3_1D079636AB6B80A3_OFFSET UNITYSDK_OFFSET(0x79D9FB0)
#define CLASS_3_41A27529628F742C_METHOD_3_2066B693D3D0F431_OFFSET UNITYSDK_OFFSET(0xA41EB10)
#define CLASS_3_41A27529628F742C_METHOD_3_22F93233C4B2D913_OFFSET UNITYSDK_OFFSET(0xA4221F0)
#define CLASS_3_41A27529628F742C_METHOD_3_23C5A27F079EA695_OFFSET UNITYSDK_OFFSET(0x79D7680)
#define CLASS_3_41A27529628F742C_METHOD_3_27F1A10C451F2291_OFFSET UNITYSDK_OFFSET(0xA426230)
#define CLASS_3_41A27529628F742C_METHOD_3_31B7D57439C0FED7_OFFSET UNITYSDK_OFFSET(0x79D7AF0)
#define CLASS_3_41A27529628F742C_METHOD_3_33E38367D69D2421_OFFSET UNITYSDK_OFFSET(0x79D7C90)
#define CLASS_3_41A27529628F742C_METHOD_3_36BABEFFF1166F4C_OFFSET UNITYSDK_OFFSET(0xA425D60)
#define CLASS_3_41A27529628F742C_METHOD_3_3A2D9727E833F5CE_OFFSET UNITYSDK_OFFSET(0xA4211D0)
#define CLASS_3_41A27529628F742C_METHOD_3_43D78330F1909593_OFFSET UNITYSDK_OFFSET(0xA421600)
#define CLASS_3_41A27529628F742C_METHOD_3_4498D1178597F673_OFFSET UNITYSDK_OFFSET(0xA426780)
#define CLASS_3_41A27529628F742C_METHOD_3_460EA2652D11B056_1_OFFSET UNITYSDK_OFFSET(0xA424EB0)
#define CLASS_3_41A27529628F742C_METHOD_3_460EA2652D11B056_OFFSET UNITYSDK_OFFSET(0xA425F00)
#define CLASS_3_41A27529628F742C_METHOD_3_46400F958915BADC_OFFSET UNITYSDK_OFFSET(0xA426BC0)
#define CLASS_3_41A27529628F742C_METHOD_3_476C5ED2CE01BB87_OFFSET UNITYSDK_OFFSET(0x79D8360)
#define CLASS_3_41A27529628F742C_METHOD_3_4993509E11AB834C_OFFSET UNITYSDK_OFFSET(0xA424120)
#define CLASS_3_41A27529628F742C_METHOD_3_4BA8605801AB2DA8_1_OFFSET UNITYSDK_OFFSET(0xA4214B0)
#define CLASS_3_41A27529628F742C_METHOD_3_4BA8605801AB2DA8_OFFSET UNITYSDK_OFFSET(0x79D8B10)
#define CLASS_3_41A27529628F742C_METHOD_3_4FA263546972185D_OFFSET UNITYSDK_OFFSET(0xA41EF20)
#define CLASS_3_41A27529628F742C_METHOD_3_51874FA60559EA2F_OFFSET UNITYSDK_OFFSET(0x79DB6C0)
#define CLASS_3_41A27529628F742C_METHOD_3_5209C005F46F37AB_OFFSET UNITYSDK_OFFSET(0xA41F2B0)
#define CLASS_3_41A27529628F742C_METHOD_3_546EE710EE77F5C5_1_OFFSET UNITYSDK_OFFSET(0xA4227F0)
#define CLASS_3_41A27529628F742C_METHOD_3_546EE710EE77F5C5_OFFSET UNITYSDK_OFFSET(0x79DBA70)
#define CLASS_3_41A27529628F742C_METHOD_3_581E41BC4B81D19F_OFFSET UNITYSDK_OFFSET(0xA4257B0)
#define CLASS_3_41A27529628F742C_METHOD_3_5839C28D65BD9C1F_OFFSET UNITYSDK_OFFSET(0x79D9490)
#define CLASS_3_41A27529628F742C_METHOD_3_5C31A25339E4703C_OFFSET UNITYSDK_OFFSET(0x79DB410)
#define CLASS_3_41A27529628F742C_METHOD_3_628A2BA2810FD6FB_OFFSET UNITYSDK_OFFSET(0xA427BE0)
#define CLASS_3_41A27529628F742C_METHOD_3_63500C779D0E514F_OFFSET UNITYSDK_OFFSET(0x79D7850)
#define CLASS_3_41A27529628F742C_METHOD_3_681BE4EA1EC95071_OFFSET UNITYSDK_OFFSET(0xA426580)
#define CLASS_3_41A27529628F742C_METHOD_3_6950DFC9E62DCDC3_OFFSET UNITYSDK_OFFSET(0x79D9840)
#define CLASS_3_41A27529628F742C_METHOD_3_6BAA2ADF5CA232E1_OFFSET UNITYSDK_OFFSET(0x79D8C60)
#define CLASS_3_41A27529628F742C_METHOD_3_6BD059A06BA61D3E_OFFSET UNITYSDK_OFFSET(0x79DA2A0)
#define CLASS_3_41A27529628F742C_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x79D82F0)
#define CLASS_3_41A27529628F742C_METHOD_3_6EA53E21BF643EC7_OFFSET UNITYSDK_OFFSET(0xA423C00)
#define CLASS_3_41A27529628F742C_METHOD_3_6F5B17D3B62A6AC4_OFFSET UNITYSDK_OFFSET(0x79D92A0)
#define CLASS_3_41A27529628F742C_METHOD_3_73A2AC30F69BBB76_OFFSET UNITYSDK_OFFSET(0xA422FC0)
#define CLASS_3_41A27529628F742C_METHOD_3_7A7FE0F363B9B386_OFFSET UNITYSDK_OFFSET(0xA424640)
#define CLASS_3_41A27529628F742C_METHOD_3_84992D5F2F49817B_OFFSET UNITYSDK_OFFSET(0xA4245B0)
#define CLASS_3_41A27529628F742C_METHOD_3_87DEC8B885105945_OFFSET UNITYSDK_OFFSET(0xA4218A0)
#define CLASS_3_41A27529628F742C_METHOD_3_896EC6F46874B3D0_OFFSET UNITYSDK_OFFSET(0x79DB170)
#define CLASS_3_41A27529628F742C_METHOD_3_89DA04E9FA142523_OFFSET UNITYSDK_OFFSET(0xA422AF0)
#define CLASS_3_41A27529628F742C_METHOD_3_92EEB198074DA183_1_OFFSET UNITYSDK_OFFSET(0xA427820)
#define CLASS_3_41A27529628F742C_METHOD_3_92EEB198074DA183_OFFSET UNITYSDK_OFFSET(0x79DA240)
#define CLASS_3_41A27529628F742C_METHOD_3_9547AEA0F7B74238_OFFSET UNITYSDK_OFFSET(0xA424BF0)
#define CLASS_3_41A27529628F742C_METHOD_3_9688C02E8D828AA6_OFFSET UNITYSDK_OFFSET(0xA41FFF0)
#define CLASS_3_41A27529628F742C_METHOD_3_99866264207E9AED_OFFSET UNITYSDK_OFFSET(0xA420F30)
#define CLASS_3_41A27529628F742C_METHOD_3_9A13DD63107D6489_OFFSET UNITYSDK_OFFSET(0xA41F850)
#define CLASS_3_41A27529628F742C_METHOD_3_9A2E4360D82CD91D_OFFSET UNITYSDK_OFFSET(0xA425370)
#define CLASS_3_41A27529628F742C_METHOD_3_A0088B2B8CC3AB38_OFFSET UNITYSDK_OFFSET(0x79D9780)
#define CLASS_3_41A27529628F742C_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x79D8450)
#define CLASS_3_41A27529628F742C_METHOD_3_B1C521B1F374AFDB_OFFSET UNITYSDK_OFFSET(0x79D9A20)
#define CLASS_3_41A27529628F742C_METHOD_3_B3BCFE72DF2C5725_OFFSET UNITYSDK_OFFSET(0x79D84B0)
#define CLASS_3_41A27529628F742C_METHOD_3_B90BF2B45AABC8CC_OFFSET UNITYSDK_OFFSET(0x79DA6E0)
#define CLASS_3_41A27529628F742C_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xA422C00)
#define CLASS_3_41A27529628F742C_METHOD_3_BB46C9985B021C91_OFFSET UNITYSDK_OFFSET(0xA4239E0)
#define CLASS_3_41A27529628F742C_METHOD_3_BCB8B56329254DFB_OFFSET UNITYSDK_OFFSET(0xA427880)
#define CLASS_3_41A27529628F742C_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA427B80)
#define CLASS_3_41A27529628F742C_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xA427CC0)
#define CLASS_3_41A27529628F742C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA421450)
#define CLASS_3_41A27529628F742C_METHOD_3_CE742D772F61C581_OFFSET UNITYSDK_OFFSET(0xA426CA0)
#define CLASS_3_41A27529628F742C_METHOD_3_D2570AA6795434FE_OFFSET UNITYSDK_OFFSET(0xA422C70)
#define CLASS_3_41A27529628F742C_METHOD_3_D583DEDB2A029A22_OFFSET UNITYSDK_OFFSET(0x79D9EA0)
#define CLASS_3_41A27529628F742C_METHOD_3_D69FE076BDF3B283_OFFSET UNITYSDK_OFFSET(0x79D7E90)
#define CLASS_3_41A27529628F742C_METHOD_3_E30239949C1C730B_OFFSET UNITYSDK_OFFSET(0xA422E70)
#define CLASS_3_41A27529628F742C_METHOD_3_E4D44C743624F318_OFFSET UNITYSDK_OFFSET(0x79D8830)
#define CLASS_3_41A27529628F742C_METHOD_3_E6855F83AD6FE1E5_OFFSET UNITYSDK_OFFSET(0x79D8DD0)
#define CLASS_3_41A27529628F742C_METHOD_3_E860BCF30C7DC270_OFFSET UNITYSDK_OFFSET(0xA4251F0)
#define CLASS_3_41A27529628F742C_METHOD_3_ECB85B16B5A30336_OFFSET UNITYSDK_OFFSET(0x79D9DF0)
#define CLASS_3_41A27529628F742C_METHOD_3_F0E5D8B8066B7E4D_OFFSET UNITYSDK_OFFSET(0x79DC010)
#define CLASS_3_41A27529628F742C_METHOD_3_F229E8C2AE558504_OFFSET UNITYSDK_OFFSET(0x79D7FF0)
#define CLASS_3_41A27529628F742C_METHOD_3_F5B50F2A74C670C4_1_OFFSET UNITYSDK_OFFSET(0xA423160)
#define CLASS_3_41A27529628F742C_METHOD_3_F5B50F2A74C670C4_OFFSET UNITYSDK_OFFSET(0xA420840)
#define CLASS_3_41A27529628F742C_METHOD_3_F5E83CDB06B1B175_OFFSET UNITYSDK_OFFSET(0xA420E50)
#define CLASS_3_41A27529628F742C_METHOD_3_F7A75C2CCD219D83_OFFSET UNITYSDK_OFFSET(0xA425430)
#define CLASS_3_41A27529628F742C_METHOD_3_F8DFB7D745706C51_OFFSET UNITYSDK_OFFSET(0xA422510)
#define CLASS_3_41A27529628F742C_METHOD_3_FA464556A431EF21_OFFSET UNITYSDK_OFFSET(0xA41FC80)
#define CLASS_3_41A27529628F742C_UPDATE_OFFSET UNITYSDK_OFFSET(0x79D5CA0)
#define CLASS_3_41A27529628F742C__CCTOR_OFFSET UNITYSDK_OFFSET(0x79D6DC0)
#define CLASS_3_41A27529628F742C__CTOR_OFFSET UNITYSDK_OFFSET(0x79D6DA0)

inline static constexpr unsigned int Class_3_41A27529628F742C_TypeDefinitionIndex = 45788;

class Class_3_41A27529628F742C : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Class_1_9610394F487FC231*, ::System::Collections::Generic::List_1<::Struct_2_D88FF587540AB8AF>*>** StaticGet_Field_3_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_9610394F487FC231*, ::System::Collections::Generic::List_1<::Struct_2_D88FF587540AB8AF>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x2E7A0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_Field_3_10()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x2E7A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_395B739A1AC58399_2>** StaticGet_Field_3_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_395B739A1AC58399_2>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x2E7B0);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_D88FF587540AB8AF>** StaticGet_Field_3_1()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_D88FF587540AB8AF>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x2E7B8);
	}
	static ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags>>** StaticGet_Field_3_8()
	{
		return (::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags>>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x2E7C0);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_C2BA6C3A72B961AE>** StaticGet_Field_3_5()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_C2BA6C3A72B961AE>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x2E7C8);
	}
	static ::System::Collections::Generic::HashSet_1<::Class_1_9610394F487FC231*>** StaticGet_Field_3_2()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_1_9610394F487FC231*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x2E7D0);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_0()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0xB170);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_4()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0xB180);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_9()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0xB190);
	}
	::Nap::NapECS::EcsFilter* Field_3_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_UPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_23C5A27F079EA695(::Class_3_F2DAD7F45F518868* a1)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_23C5A27F079EA695_OFFSET))(a1);
	}

	static ::System::Void Method_3_63500C779D0E514F(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_63500C779D0E514F_OFFSET))(a1);
	}

	::System::Void Method_3_33E38367D69D2421(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_33E38367D69D2421_OFFSET))(this, a1);
	}

	static ::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags> Method_3_D69FE076BDF3B283(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags>(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_D69FE076BDF3B283_OFFSET))(a1);
	}

	static ::System::Void Method_3_F229E8C2AE558504(::Class_3_F35B080B137ECC46* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_F229E8C2AE558504_OFFSET))(a1, a2);
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_476C5ED2CE01BB87(::Class_3_9AE843FF905C0BDB* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_476C5ED2CE01BB87_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	::System::Void Method_3_B3BCFE72DF2C5725(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_B3BCFE72DF2C5725_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E4D44C743624F318(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_E4D44C743624F318_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4BA8605801AB2DA8(::Class_3_9AE843FF905C0BDB* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_4BA8605801AB2DA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6BAA2ADF5CA232E1(::Class_3_9AE843FF905C0BDB* a1, ::MoleMole::Config::MaterialPropertyType a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_6BAA2ADF5CA232E1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_E6855F83AD6FE1E5(::Class_3_9AE843FF905C0BDB* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Boolean(*)(::Class_3_9AE843FF905C0BDB*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_E6855F83AD6FE1E5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_6F5B17D3B62A6AC4(::Class_3_9AE843FF905C0BDB* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_3_9AE843FF905C0BDB*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_6F5B17D3B62A6AC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A0088B2B8CC3AB38(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_A0088B2B8CC3AB38_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_5839C28D65BD9C1F(::Class_3_9AE843FF905C0BDB* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_3_9AE843FF905C0BDB*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_5839C28D65BD9C1F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6950DFC9E62DCDC3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_6950DFC9E62DCDC3_OFFSET))(a1);
	}

	static ::System::Void Method_3_B1C521B1F374AFDB(::Class_3_9AE843FF905C0BDB* a1, ::UnityEngine::Renderer* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_B1C521B1F374AFDB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_ECB85B16B5A30336(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_ECB85B16B5A30336_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_D583DEDB2A029A22(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_D583DEDB2A029A22_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1D079636AB6B80A3(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_1D079636AB6B80A3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92EEB198074DA183(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_92EEB198074DA183_OFFSET))(a1);
	}

	static ::System::Void Method_3_6BD059A06BA61D3E(::Class_3_F35B080B137ECC46* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_6BD059A06BA61D3E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_31B7D57439C0FED7(::Class_3_9AE843FF905C0BDB* a1, ::Struct_2_25797252421662EF a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::Struct_2_25797252421662EF))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_31B7D57439C0FED7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B90BF2B45AABC8CC(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_B90BF2B45AABC8CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_896EC6F46874B3D0(::Class_3_9AE843FF905C0BDB* a1, ::UnityEngine::Renderer* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::UnityEngine::Renderer*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_896EC6F46874B3D0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_5C31A25339E4703C(::MoleMole::Config::CharacterSize a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::CharacterSize, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_5C31A25339E4703C_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_51874FA60559EA2F(::Class_3_9AE843FF905C0BDB* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::Class_3_9AE843FF905C0BDB*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_51874FA60559EA2F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_546EE710EE77F5C5(::Class_3_9AE843FF905C0BDB* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_546EE710EE77F5C5_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_3_02330A6D0B714DA9(::Class_3_9AE843FF905C0BDB* a1, ::UnityEngine::Renderer* a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::Class_3_9AE843FF905C0BDB*, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_02330A6D0B714DA9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_F0E5D8B8066B7E4D(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_F0E5D8B8066B7E4D_OFFSET))(a1);
	}

	static ::System::Void Method_3_2066B693D3D0F431(::Class_3_F2DAD7F45F518868* a1, ::Class_3_9AE843FF905C0BDB* a2)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_2066B693D3D0F431_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4FA263546972185D(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_4FA263546972185D_OFFSET))(a1);
	}

	static ::System::Void Method_3_5209C005F46F37AB(::Class_3_9AE843FF905C0BDB* a1, ::MoleMole::Config::MaterialPropertyType a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_5209C005F46F37AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9A13DD63107D6489(::Class_3_F35B080B137ECC46* a1, ::Class_3_9AE843FF905C0BDB* a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_9A13DD63107D6489_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FA464556A431EF21(::Class_3_F2DAD7F45F518868* a1, ::Class_3_9AE843FF905C0BDB* a2)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_FA464556A431EF21_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_9688C02E8D828AA6(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Boolean(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_9688C02E8D828AA6_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_1603ED42490AC4B2(::Class_3_9AE843FF905C0BDB* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Boolean(*)(::Class_3_9AE843FF905C0BDB*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_1603ED42490AC4B2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_16F68DFE5F1EF396(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_16F68DFE5F1EF396_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_F5E83CDB06B1B175(::Class_3_9AE843FF905C0BDB* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::Class_3_9AE843FF905C0BDB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_F5E83CDB06B1B175_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99866264207E9AED(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_99866264207E9AED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3A2D9727E833F5CE(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_3A2D9727E833F5CE_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_4BA8605801AB2DA8_1(::Class_3_9AE843FF905C0BDB* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_4BA8605801AB2DA8_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F5B50F2A74C670C4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_F5B50F2A74C670C4_OFFSET))(a1);
	}

	static ::System::Void Method_3_03CC7653040D2294(::Class_3_F2DAD7F45F518868* a1)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_03CC7653040D2294_OFFSET))(a1);
	}

	static ::System::Void Method_3_F8DFB7D745706C51(::Class_3_9AE843FF905C0BDB* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_F8DFB7D745706C51_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_22F93233C4B2D913(::Class_3_F2DAD7F45F518868* a1, ::Class_3_9AE843FF905C0BDB* a2)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_22F93233C4B2D913_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_546EE710EE77F5C5_1(::Class_3_9AE843FF905C0BDB* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_546EE710EE77F5C5_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_07C911C46C9639E8(::Class_3_9AE843FF905C0BDB* a1, ::MoleMole::Config::MaterialPropertyType a2, ::System::Collections::Generic::List_1<::Class_1_9610394F487FC231*>* a3)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::List_1<::Class_1_9610394F487FC231*>*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_07C911C46C9639E8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_89DA04E9FA142523(::Class_3_9AE843FF905C0BDB* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_89DA04E9FA142523_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_D2570AA6795434FE(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::Class_3_9AE843FF905C0BDB*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_D2570AA6795434FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1A2A293D5B3F4F64(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_1A2A293D5B3F4F64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_146BFAC3AFDB933C(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_146BFAC3AFDB933C_OFFSET))(a1);
	}

	static ::System::Void Method_3_E30239949C1C730B(::Class_3_9AE843FF905C0BDB* a1, ::MoleMole::Config::MaterialPropertyType a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_E30239949C1C730B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_73A2AC30F69BBB76(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_73A2AC30F69BBB76_OFFSET))(a1);
	}

	static ::System::Void Method_3_F5B50F2A74C670C4_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_F5B50F2A74C670C4_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_6EA53E21BF643EC7(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::String* a5, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a6, ::System::Boolean a7, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a8)
	{
		return ((::System::Boolean(*)(::Class_3_9AE843FF905C0BDB*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_6EA53E21BF643EC7_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_4993509E11AB834C(::Class_3_9AE843FF905C0BDB* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_4993509E11AB834C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_84992D5F2F49817B(::Class_3_9AE843FF905C0BDB* a1, ::System::Func_2<::System::String*, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::Func_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_84992D5F2F49817B_OFFSET))(a1, a2);
	}

	static ::MoleMole::MonoRenderHandler* Method_3_7A7FE0F363B9B386(::Il2CppArray<::UnityEngine::Material*>*& a1, ::Class_3_9AE843FF905C0BDB* a2)
	{
		return ((::MoleMole::MonoRenderHandler*(*)(::Il2CppArray<::UnityEngine::Material*>*&, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_7A7FE0F363B9B386_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::System::Void Method_3_9547AEA0F7B74238(::Class_3_9AE843FF905C0BDB* a1, ::Class_2_D0A1765C72A19057* a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::Class_2_D0A1765C72A19057*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_9547AEA0F7B74238_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E860BCF30C7DC270(::Class_2_09C478668651C9AE_5* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_09C478668651C9AE_5*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_E860BCF30C7DC270_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9A2E4360D82CD91D(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_9A2E4360D82CD91D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F7A75C2CCD219D83(::Class_3_9AE843FF905C0BDB* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_F7A75C2CCD219D83_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_581E41BC4B81D19F(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::String* a5, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a6, ::System::Boolean a7, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a8)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_581E41BC4B81D19F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_36BABEFFF1166F4C(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_36BABEFFF1166F4C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_460EA2652D11B056(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_460EA2652D11B056_OFFSET))(a1);
	}

	static ::System::Void Method_3_43D78330F1909593(::Class_3_F35B080B137ECC46* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_9AE843FF905C0BDB* a3)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::MoleMole::Battle::Entity*, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_43D78330F1909593_OFFSET))(a1, a2, a3);
	}

	::System::Boolean Method_3_27F1A10C451F2291(::UnityEngine::Renderer* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_27F1A10C451F2291_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_87DEC8B885105945(::Class_3_F35B080B137ECC46* a1, ::Class_3_9AE843FF905C0BDB* a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_87DEC8B885105945_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_681BE4EA1EC95071(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::String* a5, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a6, ::System::Boolean a7, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a8)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_681BE4EA1EC95071_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_4498D1178597F673(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_4498D1178597F673_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_02330A6D0B714DA9_1(::Class_3_9AE843FF905C0BDB* a1, ::UnityEngine::Renderer* a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::Class_3_9AE843FF905C0BDB*, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_02330A6D0B714DA9_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0EB6B7A416AF5EB9(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_0EB6B7A416AF5EB9_OFFSET))(a1);
	}

	static ::System::Void Method_3_154E381DD1A68A09(::Class_3_F35B080B137ECC46* a1, ::Class_3_9AE843FF905C0BDB* a2, ::Class_3_F2DAD7F45F518868* a3)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_9AE843FF905C0BDB*, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_154E381DD1A68A09_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_3_46400F958915BADC(::Class_3_9AE843FF905C0BDB* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::Class_3_9AE843FF905C0BDB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_46400F958915BADC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CE742D772F61C581(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_CE742D772F61C581_OFFSET))(a1);
	}

	static ::System::Void Method_3_BCB8B56329254DFB(::Class_3_9AE843FF905C0BDB* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_BCB8B56329254DFB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_92EEB198074DA183_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_92EEB198074DA183_1_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_628A2BA2810FD6FB(::Class_3_9AE843FF905C0BDB* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_628A2BA2810FD6FB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_460EA2652D11B056_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_460EA2652D11B056_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_BB46C9985B021C91(::Class_3_9AE843FF905C0BDB* a1)
	{
		return ((::System::Void(*)(::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_BB46C9985B021C91_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}
};
