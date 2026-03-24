#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6BBC338ED78FFF84_Struct_2_F6BDC7768A513B49.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_918AC29321A00F8A.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLodLevel.h"

class Class_1_B7E341C5F1A6F199;
class Class_1_C14A0318DCE59ECF;
class Class_1_E3855AF859F1C128;
class Class_2_44D59DDDD1D4E4A6;
class Class_3_6124F7AF16B30AB1;
class Class_3_A5AF8EA2F7094EFB;
class Class_3_D902FC5F64432838;
namespace MoleMole { class MonoEffectPluginTransform; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { template <typename T1, typename T2> class IndexedList_2; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_6BBC338ED78FFF84_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2ED580)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0xB2F5D40)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_07A640FA3CABD3A7_1_OFFSET UNITYSDK_OFFSET(0xB2F52C0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_07A640FA3CABD3A7_2_OFFSET UNITYSDK_OFFSET(0xB2F1320)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_07A640FA3CABD3A7_OFFSET UNITYSDK_OFFSET(0xB2F3570)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_09A9B238A71E35B3_OFFSET UNITYSDK_OFFSET(0xB2F0B10)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_09C4428BEAB114EA_OFFSET UNITYSDK_OFFSET(0xB2F3750)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_0EE11097D4B8BBB6_OFFSET UNITYSDK_OFFSET(0xB2F64F0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0xB2F7440)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1AF858573C3B2182_OFFSET UNITYSDK_OFFSET(0xB2EFCA0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB2F1760)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_10_OFFSET UNITYSDK_OFFSET(0xB2F1700)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_11_OFFSET UNITYSDK_OFFSET(0xB2F1860)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_12_OFFSET UNITYSDK_OFFSET(0xB2F28E0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_13_OFFSET UNITYSDK_OFFSET(0xB2F3D60)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_14_OFFSET UNITYSDK_OFFSET(0xB2F58C0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_15_OFFSET UNITYSDK_OFFSET(0xB2F60E0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_16_OFFSET UNITYSDK_OFFSET(0xB2F6370)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_17_OFFSET UNITYSDK_OFFSET(0xB2F6490)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_18_OFFSET UNITYSDK_OFFSET(0xB2F7380)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_19_OFFSET UNITYSDK_OFFSET(0xB2F8390)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_1_OFFSET UNITYSDK_OFFSET(0xB2EEE40)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_2_OFFSET UNITYSDK_OFFSET(0xB2EF5B0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_3_OFFSET UNITYSDK_OFFSET(0xB2EF850)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_4_OFFSET UNITYSDK_OFFSET(0xB2EFAC0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_5_OFFSET UNITYSDK_OFFSET(0xB2EFB80)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_6_OFFSET UNITYSDK_OFFSET(0xB2F0420)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_7_OFFSET UNITYSDK_OFFSET(0xB2F04E0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_8_OFFSET UNITYSDK_OFFSET(0xB2F0A50)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_9_OFFSET UNITYSDK_OFFSET(0xB2F1030)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0xB2EDD80)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_2517DA48F637894C_OFFSET UNITYSDK_OFFSET(0xB2F38C0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_275C2C006FCC699C_OFFSET UNITYSDK_OFFSET(0xB2EF610)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0xB2F3DC0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_2AA60859E1992EFA_OFFSET UNITYSDK_OFFSET(0xB2EF8B0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0xB2EEFD0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_3BC578EAB014DDA0_OFFSET UNITYSDK_OFFSET(0xB2EE300)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_3BDC641E184F5D1E_OFFSET UNITYSDK_OFFSET(0xB2F2E20)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_3D775053B4C2DB6A_OFFSET UNITYSDK_OFFSET(0xB2F6AB0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_3D8BC98C26AF647D_OFFSET UNITYSDK_OFFSET(0xB2F5160)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_467AC3F076594137_OFFSET UNITYSDK_OFFSET(0xB2F6F50)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_4C288C0C3DC7B4CA_OFFSET UNITYSDK_OFFSET(0xB2ED140)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_56AFD15A3ABA3ABF_OFFSET UNITYSDK_OFFSET(0xB2F2940)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_57145E05AB2F02E8_OFFSET UNITYSDK_OFFSET(0xB2F6140)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_575128F36CADA48E_OFFSET UNITYSDK_OFFSET(0xB2EFDE0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0xB2EF350)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0xB2F1090)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_6AA581BE0B50758A_1_OFFSET UNITYSDK_OFFSET(0xB2F83F0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_6AA581BE0B50758A_OFFSET UNITYSDK_OFFSET(0xB2F56C0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_6B7B6B25D6DA0DF0_OFFSET UNITYSDK_OFFSET(0xB2EE0A0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0xB2F1B10)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_716A73895C080181_OFFSET UNITYSDK_OFFSET(0xB2F4340)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_71AB7687BD5863BC_OFFSET UNITYSDK_OFFSET(0xB2F54A0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_860BDBCE502B20FD_OFFSET UNITYSDK_OFFSET(0xB2F1500)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0xB2EEEA0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_8C06673CB959B543_OFFSET UNITYSDK_OFFSET(0xB2F59E0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_9655F911610F6C9A_OFFSET UNITYSDK_OFFSET(0xB2F3B40)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_A16B1E4DB1A3F093_OFFSET UNITYSDK_OFFSET(0xB2F05E0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_A696D92D49FAA3EF_OFFSET UNITYSDK_OFFSET(0xB2F0CF0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_B078C58C2CD24B5E_OFFSET UNITYSDK_OFFSET(0xB2F8290)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_B4441DA2218099CA_OFFSET UNITYSDK_OFFSET(0xB2F2490)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_B58CAE8280B7FD86_OFFSET UNITYSDK_OFFSET(0xB2EDE40)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_B623FB583E585B62_OFFSET UNITYSDK_OFFSET(0xB2F5B40)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_B6D0677AF5E76CEC_OFFSET UNITYSDK_OFFSET(0xB2EDCC0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_B82CC466E4908722_OFFSET UNITYSDK_OFFSET(0xB2EE1A0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0xB2EE570)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_BB339FC1181B5C4A_OFFSET UNITYSDK_OFFSET(0xB2F85F0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0xB2ED6D0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_BF05434D19601DE3_OFFSET UNITYSDK_OFFSET(0xB2EE440)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_BFD3F1C8946B5E66_OFFSET UNITYSDK_OFFSET(0xB2F6800)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_C25411016B9B9077_OFFSET UNITYSDK_OFFSET(0xB2F8200)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_C42564250CFDB5BC_OFFSET UNITYSDK_OFFSET(0xB2F0C60)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0xB2F18C0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB2EED70)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_10_OFFSET UNITYSDK_OFFSET(0xB2F1800)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_11_OFFSET UNITYSDK_OFFSET(0xB2F1AB0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_12_OFFSET UNITYSDK_OFFSET(0xB2F1BE0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_13_OFFSET UNITYSDK_OFFSET(0xB2F5860)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_14_OFFSET UNITYSDK_OFFSET(0xB2F5920)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_15_OFFSET UNITYSDK_OFFSET(0xB2F5980)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_16_OFFSET UNITYSDK_OFFSET(0xB2F63D0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_17_OFFSET UNITYSDK_OFFSET(0xB2F6430)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_18_OFFSET UNITYSDK_OFFSET(0xB2F73E0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_19_OFFSET UNITYSDK_OFFSET(0xB2F8590)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0xB2EEDE0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_2_OFFSET UNITYSDK_OFFSET(0xB2EFB20)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_3_OFFSET UNITYSDK_OFFSET(0xB2EFBE0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_4_OFFSET UNITYSDK_OFFSET(0xB2EFC40)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_5_OFFSET UNITYSDK_OFFSET(0xB2F0480)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_6_OFFSET UNITYSDK_OFFSET(0xB2F0AB0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_7_OFFSET UNITYSDK_OFFSET(0xB2F0F70)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_8_OFFSET UNITYSDK_OFFSET(0xB2F0FD0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_9_OFFSET UNITYSDK_OFFSET(0xB2F15B0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xB2EDDE0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xB2ED770)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0xB2F0540)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_DB57563EA2EA402B_OFFSET UNITYSDK_OFFSET(0xB2F74F0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_DFEA80256A97C1C4_OFFSET UNITYSDK_OFFSET(0xB2F7080)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_E085759920253133_OFFSET UNITYSDK_OFFSET(0xB2F6580)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_E39D2C91331E6AAB_OFFSET UNITYSDK_OFFSET(0xB2F3170)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_E5D433C7A574E387_OFFSET UNITYSDK_OFFSET(0xB2F1610)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_E656C395DC8733E7_OFFSET UNITYSDK_OFFSET(0xB2F07D0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB2EE090)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_F3413F9D3146DA07_OFFSET UNITYSDK_OFFSET(0xB2F09A0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_F6E9D813BDC4DA1A_OFFSET UNITYSDK_OFFSET(0xB2F2130)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_F9A0F51C719C9A1E_OFFSET UNITYSDK_OFFSET(0xB2F01F0)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_FAADEE08E4E52BA5_OFFSET UNITYSDK_OFFSET(0xB2F1C40)
#define CLASS_2_6BBC338ED78FFF84_METHOD_2_FCEC49353B63FA90_OFFSET UNITYSDK_OFFSET(0xB2F5BF0)
#define CLASS_2_6BBC338ED78FFF84_ONCREATE_OFFSET UNITYSDK_OFFSET(0xB2ED060)
#define CLASS_2_6BBC338ED78FFF84_UPDATE_OFFSET UNITYSDK_OFFSET(0xB2ED0C0)
#define CLASS_2_6BBC338ED78FFF84__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2EDC40)
#define CLASS_2_6BBC338ED78FFF84__CTOR_OFFSET UNITYSDK_OFFSET(0xB2ED870)

inline static constexpr unsigned int Class_2_6BBC338ED78FFF84_TypeDefinitionIndex = 45912;

class Class_2_6BBC338ED78FFF84 : public ::Foundation::SingletonDisposable_1<::Class_2_6BBC338ED78FFF84*>
{
public:
	static ::Class_1_E3855AF859F1C128** StaticGet_Field_2_21()
	{
		return (::Class_1_E3855AF859F1C128**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0x2FEF0);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_2_24()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAD0);
	}
	static ::System::Boolean* StaticGet_Field_2_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAE0);
	}
	static ::System::Boolean* StaticGet_Field_2_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAE1);
	}
	static ::System::Boolean* StaticGet_Field_2_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAE2);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAE3);
	}
	static ::System::Boolean* StaticGet_Field_2_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAE4);
	}
	static ::System::Boolean* StaticGet_Field_2_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAE5);
	}
	static ::System::Boolean* StaticGet_Field_2_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAE6);
	}
	static ::System::Boolean* StaticGet_Field_2_20()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAE7);
	}
	static ::System::Single* StaticGet_Field_2_39()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAE8);
	}
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAEC);
	}
	static ::System::Boolean* StaticGet_Field_2_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAED);
	}
	static ::System::Boolean* StaticGet_Field_2_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAEE);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAEF);
	}
	static ::System::Boolean* StaticGet_Field_2_13()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAF0);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAF1);
	}
	static ::System::Boolean* StaticGet_Field_2_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAF2);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAF3);
	}
	static ::System::Boolean* StaticGet_Field_2_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAF4);
	}
	static ::System::Boolean* StaticGet_Field_2_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAF5);
	}
	static ::System::Boolean* StaticGet_Field_2_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAF6);
	}
	static ::System::Boolean* StaticGet_Field_2_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAF7);
	}
	static ::System::Boolean* StaticGet_Field_2_19()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAF8);
	}
	static ::System::Boolean* StaticGet_Field_2_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BBC338ED78FFF84_TypeDefinitionIndex)->GetStaticField(0xBAF9);
	}
	::System::String* Field_2_42; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_918AC29321A00F8A>* Field_2_43; // 0x18
	::System::Collections::Generic::Queue_1<::MoleMole::Battle::Entity*>* Field_2_49; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_26; // 0x28
	::Class_2_44D59DDDD1D4E4A6* Field_2_37; // 0x30
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_C14A0318DCE59ECF*>* Field_2_27; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_36; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_38; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*>* Field_2_44; // 0x50
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_30; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_34; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*>* Field_2_45; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_33; // 0x70
	::System::Collections::Generic::List_1<::Class_1_E3855AF859F1C128*>* Field_2_25; // 0x78
	::Nap::NapECS::IndexedList_2<::MoleMole::MonoEffectPluginTransform*, ::Class_2_6BBC338ED78FFF84_Struct_2_F6BDC7768A513B49<::MoleMole::MonoEffectPluginTransform*>>* Field_2_35; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_40; // 0x88
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Field_2_29; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_32; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*>* Field_2_41; // 0xA0
	::System::Int32 Field_2_48; // 0xA8
	::System::Boolean Field_2_31; // 0xAC
	::System::Boolean Field_2_28; // 0xAD
	::System::Boolean Field_2_46; // 0xAE
	::System::Boolean Field_2_47; // 0xAF
	::System::Int32 Field_2_23; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_B6D0677AF5E76CEC(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_B6D0677AF5E76CEC_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_OFFSET))();
	}

	static ::System::Boolean Method_2_B58CAE8280B7FD86()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_B58CAE8280B7FD86_OFFSET))();
	}

	::System::Void Method_2_6B7B6B25D6DA0DF0(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_6B7B6B25D6DA0DF0_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_3BC578EAB014DDA0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_3BC578EAB014DDA0_OFFSET))();
	}

	::System::Boolean Method_2_BF05434D19601DE3(::System::UInt32 a1, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_BF05434D19601DE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_B917C58B4E14AC1B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_8A2AC7CD7EA66CAC_OFFSET))();
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_2_OFFSET))(a1);
	}

	::System::Void Method_2_275C2C006FCC699C(::Class_2_44D59DDDD1D4E4A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_44D59DDDD1D4E4A6*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_275C2C006FCC699C_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_3_OFFSET))(a1);
	}

	::System::Void Method_2_2AA60859E1992EFA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_2AA60859E1992EFA_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_4_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_2_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_5_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_3()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_3_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_4()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_4_OFFSET))();
	}

	::System::Int32 Method_2_1AF858573C3B2182(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1AF858573C3B2182_OFFSET))(this, a1);
	}

	::System::Void Method_2_575128F36CADA48E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_575128F36CADA48E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F9A0F51C719C9A1E(::System::String* a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_F9A0F51C719C9A1E_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_6_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_5()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_5_OFFSET))();
	}

	static ::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_7_OFFSET))(a1);
	}

	::System::Void Method_2_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Void Method_2_A16B1E4DB1A3F093(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_A16B1E4DB1A3F093_OFFSET))(this, a1);
	}

	::System::Void Method_2_E656C395DC8733E7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_E656C395DC8733E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F3413F9D3146DA07(::MoleMole::MonoEffectPluginTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginTransform*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_F3413F9D3146DA07_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_8_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_6()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_6_OFFSET))();
	}

	::System::Void Method_2_09A9B238A71E35B3(::System::UInt32 a1, ::Class_3_6124F7AF16B30AB1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_6124F7AF16B30AB1*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_09A9B238A71E35B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C42564250CFDB5BC(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_C42564250CFDB5BC_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_7()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_7_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_8()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_8_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_9_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_64F0C85A431FBD69_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_9()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_9_OFFSET))();
	}

	::System::Void Method_2_E5D433C7A574E387(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_E5D433C7A574E387_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_10(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_10_OFFSET))(a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_10()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_10_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_11(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_11_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_C982C8295D29DA97()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_C982C8295D29DA97_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_11()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_11_OFFSET))();
	}

	::System::Void Method_2_70603E2AE56EBD6B(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_12()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_12_OFFSET))();
	}

	::System::Void Method_2_FAADEE08E4E52BA5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_FAADEE08E4E52BA5_OFFSET))(this);
	}

	::System::Void Method_2_F6E9D813BDC4DA1A(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_F6E9D813BDC4DA1A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_B4441DA2218099CA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_B4441DA2218099CA_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_12(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_12_OFFSET))(a1);
	}

	::System::Void Method_2_56AFD15A3ABA3ABF(::System::String* a1, ::MoleMole::EntityHandle a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_56AFD15A3ABA3ABF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3BDC641E184F5D1E(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_3BDC641E184F5D1E_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_E39D2C91331E6AAB(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::String* a3, ::System::Boolean a4, ::System::Int32 a5, ::Class_3_A5AF8EA2F7094EFB* a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Int32, ::Class_3_A5AF8EA2F7094EFB*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_E39D2C91331E6AAB_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	static ::System::Boolean Method_2_07A640FA3CABD3A7()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_07A640FA3CABD3A7_OFFSET))();
	}

	::System::Void Method_2_09C4428BEAB114EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_09C4428BEAB114EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2517DA48F637894C(::System::String* a1, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_2517DA48F637894C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9655F911610F6C9A(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_9655F911610F6C9A_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_13(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_13_OFFSET))(a1);
	}

	::System::Void Method_2_2839AE123F8ECAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_2839AE123F8ECAA7_OFFSET))(this);
	}

	::Class_1_E3855AF859F1C128* Method_2_716A73895C080181(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_6124F7AF16B30AB1* a3, ::Class_3_A5AF8EA2F7094EFB* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* a7, ::System::Action_1<::MoleMole::Battle::Entity*>* a8)
	{
		return ((::Class_1_E3855AF859F1C128*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_3_6124F7AF16B30AB1*, ::Class_3_A5AF8EA2F7094EFB*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_716A73895C080181_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_62167C28EC14CC63_OFFSET))(this);
	}

	static ::System::Void Method_2_3D8BC98C26AF647D(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_3D8BC98C26AF647D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_2_6AA581BE0B50758A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_6AA581BE0B50758A_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_13()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_13_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_14(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_14_OFFSET))(a1);
	}

	::System::Void Method_2_B82CC466E4908722(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_B82CC466E4908722_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_14()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_14_OFFSET))();
	}

	static ::System::Boolean Method_2_07A640FA3CABD3A7_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_07A640FA3CABD3A7_1_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_15()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_15_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_2_8C06673CB959B543(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::AssetPath, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_8C06673CB959B543_OFFSET))(a1, a2);
	}

	::System::Void Method_2_B623FB583E585B62(::MoleMole::MonoEffectPluginTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginTransform*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_B623FB583E585B62_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCEC49353B63FA90(::System::UInt32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_FCEC49353B63FA90_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_071850D2764E9D4C_OFFSET))(this);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_15(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_15_OFFSET))(a1);
	}

	::System::Void Method_2_57145E05AB2F02E8(::MoleMole::EntityHandle a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_57145E05AB2F02E8_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_71AB7687BD5863BC(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_71AB7687BD5863BC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_16(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_16_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_16()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_16_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_17()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_17_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_17(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_17_OFFSET))(a1);
	}

	::System::Void Method_2_0EE11097D4B8BBB6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_0EE11097D4B8BBB6_OFFSET))(this, a1);
	}

	::System::Void Method_2_E085759920253133(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_E085759920253133_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_3A599F23178B2776_OFFSET))(this);
	}

	static ::System::Boolean Method_2_860BDBCE502B20FD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_860BDBCE502B20FD_OFFSET))();
	}

	::System::Void Method_2_BFD3F1C8946B5E66(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_BFD3F1C8946B5E66_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D775053B4C2DB6A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_3D775053B4C2DB6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_467AC3F076594137(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_467AC3F076594137_OFFSET))(this, a1);
	}

	::System::Void Method_2_A696D92D49FAA3EF(::System::UInt32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_A696D92D49FAA3EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DFEA80256A97C1C4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_DFEA80256A97C1C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C288C0C3DC7B4CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_4C288C0C3DC7B4CA_OFFSET))(this);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_18(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_18_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_18()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_18_OFFSET))();
	}

	static ::System::Void Method_2_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_163DC9A61F1D3AF0_OFFSET))();
	}

	::System::Void Method_2_DB57563EA2EA402B(::Class_1_E3855AF859F1C128* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3855AF859F1C128*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_DB57563EA2EA402B_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_B078C58C2CD24B5E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_B078C58C2CD24B5E_OFFSET))();
	}

	::System::Boolean Method_2_C25411016B9B9077(::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_C25411016B9B9077_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_19(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_1DA89DF9585853CF_19_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_6AA581BE0B50758A_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_6AA581BE0B50758A_1_OFFSET))();
	}

	static ::System::Boolean Method_2_07A640FA3CABD3A7_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_07A640FA3CABD3A7_2_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_19()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_CE34EA208837238D_19_OFFSET))();
	}

	::System::Void Method_2_BB339FC1181B5C4A(::System::UInt32 a1, ::Class_3_D902FC5F64432838* a2, ::Class_3_D902FC5F64432838* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_D902FC5F64432838*, ::Class_3_D902FC5F64432838*))((::PBYTE)hIl2Cpp + CLASS_2_6BBC338ED78FFF84_METHOD_2_BB339FC1181B5C4A_OFFSET))(this, a1, a2, a3);
	}
};
